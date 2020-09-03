/*------------------------------------------------------------------------
  Example sketch for Adafruit Thermal Printer library for Arduino.
  Demonstrates a few text styles & layouts, bitmap printing, etc.

  IMPORTANT: DECLARATIONS DIFFER FROM PRIOR VERSIONS OF THIS LIBRARY.
  This is to support newer & more board types, especially ones that don't
  support SoftwareSerial (e.g. Arduino Due).  You can pass any Stream
  (e.g. Serial1) to the printer constructor.  See notes below.

  You may need to editsenso the PRINTER_FIRMWARE value in Adafruit_Thermal.h
  to match your printer (hold feed button on powerup for test page).
  --------------------------------------------------------------------------
 HEY THU
  USED ARDUINO IS ARDUINO MEGA!!!
  ------------------------------------------------------------------------*/

#include "Adafruit_Thermal.h"
#include "adalogo.h"
#include "adaqrcode.h"
#include <EEPROM.h>

//Motion Sensor and Timer
byte language;
int sensorPin = 13;
long timer = -200000;
long delay_time = 20000; //milliseconds

// Here's the new syntax when using SoftwareSerial (e.g. Arduino Uno) ----
// If using hardware serial instead, comment out or remove these lines:

#include "SoftwareSerial.h"
//Subject
#define TX_PIN 3 // Arduino transmit  YELLOW WIRE  labeled RX on printer
#define RX_PIN 7 // Arduino receive   GREEN WIRE   labeled TX on printer
SoftwareSerial mySerial(RX_PIN, TX_PIN); // Declare SoftwareSerial obj first
Adafruit_Thermal printer1(&mySerial);     // Pass addr to printer constructor

//predicate
#define TX2_PIN 4 // Arduino transmit  YELLOW WIRE  labeled RX on printer
SoftwareSerial mySerial2(RX_PIN, TX2_PIN); // Declare SoftwareSerial obj first
Adafruit_Thermal printer2(&mySerial2);     // Pass addr to printer constructor

//object
#define TX3_PIN 5 // Arduino transmit  YELLOW WIRE  labeled RX on printer
SoftwareSerial mySerial3(RX_PIN, TX3_PIN); // Declare SoftwareSerial obj first
Adafruit_Thermal printer3(&mySerial3);     // Pass addr to printer constructor

//adverbial
#define TX3_PIN 6 // Arduino transmit  YELLOW WIRE  labeled RX on printer
SoftwareSerial mySerial4(RX_PIN, TX3_PIN); // Declare SoftwareSerial obj first
Adafruit_Thermal printer4(&mySerial4);     // Pass addr to printer constructor

// -----------------------------------------------------------------------

long unsigned delays[37] = {
  500, 500, 500, 500, 500, 500, 500, 500,
  500, 500, 500, 500, 500, 500, 500, 500,
  500, 500, 500, 500, 500, 500, 500, 500,
  500, 500, 500, 500, 500, 500, 500, 500,
  500, 500, 500, 500, 500
};

int delay_i = 0;

char letterSize = 'M';
int lineHeight = 25;
char textJust = 'R';

void delay_me() {
  long unsigned del = delays[delay_i];
  delay(del);
  delay_i = (delay_i + 1) % 36;
}

void start_printers() {

  // NOTE: SOME PRINTERS NEED 9600 BAUD instead of 19200, check test page.
  mySerial.begin(9600);  // Initialize SoftwareSerial
  mySerial2.begin(9600);  // Initialize SoftwareSerial
  mySerial3.begin(9600);  // Initialize SoftwareSerial
  mySerial4.begin(9600);  // Initialize SoftwareSerial

  // Init printer (same regardless of serial type)
  printer1.begin(50);
  printer2.begin(50);
  printer3.begin(50);
  printer4.begin(50);

  // to print upside down
  mySerial.write(27);
  mySerial.write(123);
  mySerial.write(1);

  mySerial2.write(27);
  mySerial2.write(123);
  mySerial2.write(1);

  mySerial3.write(27);
  mySerial3.write(123);
  mySerial3.write(1);

  mySerial4.write(27);
  mySerial4.write(123);
  mySerial4.write(1);

  // For the letters öäüß
  byte bytes[] = {27, 82, 2};
  for (byte i = 0; i < 3; i++) {
    mySerial.write(bytes[i]);
    mySerial2.write(bytes[i]);
    mySerial3.write(bytes[i]);
    mySerial4.write(bytes[i]);
  }
  //
  printer1.setLineHeight(lineHeight);
  printer1.setSize(letterSize);
  printer1.justify(textJust);


  printer2.setLineHeight(lineHeight);
  printer2.setSize(letterSize);
  printer2.justify(textJust);


  printer3.setLineHeight(lineHeight);
  printer3.setSize(letterSize);
  printer3.justify(textJust);


  printer4.setLineHeight(lineHeight);
  printer4.setSize(letterSize);
  printer4.justify(textJust);


}


void setup() {
  Serial.begin(9600);
  language = EEPROM.read(language);
  if (language >= 2) language = -1;
  language = language + 1;
  EEPROM.write(0, language);

  randomize();
  start_printers();
  pinMode(sensorPin, INPUT);
}


void resetPrinter4() {

  mySerial4.write(27);
  mySerial4.write(123);
  mySerial4.write(1);

  byte bytes[] = {27, 82, 2};
  for (byte i = 0; i < 3; i++) {

    mySerial4.write(bytes[i]);
  }
}


void resetPrinter2() {
  mySerial2.write(27);
  mySerial2.write(123);
  mySerial2.write(1);

  byte bytes[] = {27, 82, 2};
  for (byte i = 0; i < 3; i++) {
    mySerial2.write(bytes[i]);
  }

  //printer2.setLineHeight(25);
  //printer2.setSize('M');
}


void resetPrinter3() {
  mySerial2.write(27);
  mySerial2.write(123);
  mySerial2.write(1);

  byte bytes[] = {27, 82, 2};
  for (byte i = 0; i < 3; i++) {
    mySerial2.write(bytes[i]);
  }

  //printer2.setLineHeight(25);
  //printer2.setSize('M');
}


void randomize() {
  lineHeight = random(0, 100);
  int rdmJustify = random(1, 4);
  int rdmSize = random(1, 4);

  switch (rdmJustify) {
    case 1:
      textJust = 'R';
      break;
    case 2:
      textJust = 'C';
      break;
    case 3:
      textJust = 'L';
      break;
  }



  switch (rdmSize) {
    case 1:
      letterSize = 'M';
      break;
    case 2:
      letterSize = 'S';
      break;
    case 3:
      letterSize = 'L';
      break;
  }
}

void loop() {

  randomize();
  start_printers();
  Serial.println(language);

  int sensorState = digitalRead(sensorPin);
  
  // print out the state of the button:
  Serial.print("Motion sensor");
  Serial.println(sensorState);
  if (sensorState) {
    timer = millis();
    
  }

  if (millis() - timer < delay_time) {
    Serial.println(millis() - timer);
    Serial.println("Keep running!");
    if (language == 0) {
      Serial.println("German");
      german();
    } else if (language == 1) {
      Serial.println("Finnish");
      finnish();
    } else {
      Serial.println("English");
      english();
    }
  }

  delay(1);        // delay in between reads for stability


  printer1.sleep();      // Tell printer to sleep
  delay(1500L);         // Sleep for 3 seconds
  printer1.wake();       // MUST wake() before printing again, even if reset
  printer1.setDefault(); // Restore printer to defaults
}
