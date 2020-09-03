void finnish() {

  if (letterSize == 'L') {
    mySerial3.println(F("kuski\n"));
    mySerial3.println(F("Hukkunut kalja-"));
  } else {
    mySerial3.println(F("Hukkunut kaljakuski\n"));
  }

  delay_me();
  mySerial2.println(F("rahdattiin\n"));

  delay_me();
  mySerial4.print(F("p"));
  mySerial4.write(124);
  mySerial4.print(F("yd"));
  mySerial4.write(123);
  mySerial4.print("lle");
  mySerial4.println("\n");
  resetPrinter4();

  delay_me();
  mySerial.println(F("Joku, kuka lie,\n"));

  delay_me();
  mySerial2.println(F("oli tunkenut\n"));

  delay_me();
  if (letterSize == 'L') {
    mySerial3.println(F("tummankirkkaan-\n"));
    mySerial3.println(F("liilan asterin"));

  } else {
    mySerial3.println(F("tummankirkkaanliilan asterin\n"));
  }

  delay_me();
  mySerial4.println(F("h"));
  mySerial4.write(123);
  mySerial4.print("nen hampaidensa v");
  mySerial4.write(123);
  mySerial4.print("liin.");
  mySerial4.println("\n");
  resetPrinter4();

  delay_me();
  mySerial2.println(F("lrrottaessani\n"));

  delay_me();
  mySerial4.print(F("pitk"));
  mySerial4.write(123);
  mySerial4.print("ll");
  mySerial4.write(123);
  mySerial4.println("\n");
  resetPrinter4();

  delay_me();
  mySerial4.print(F("rinnasta k"));
  mySerial4.write(123);
  mySerial4.print("sin ihon alta.");
  mySerial4.println("\n");
  resetPrinter4();

  delay_me(); //10
  mySerial3.println(F("kielt"));
  mySerial3.write(123);
  mySerial3.print("sek");
  mySerial3.write(123);
  mySerial3.print("kitalakea");
  mySerial3.println("\n");
  resetPrinter3();


  delay_me();
  mySerial2.println(F("lienen t"));
  mySerial2.write(124);
  mySerial2.print("n");
  mySerial2.write(123);
  mySerial2.print("issyt");
  mySerial2.println("\n");
  resetPrinter2();

  delay_me();
  mySerial3.println(F("kukka\n"));


  delay_me();
  mySerial2.println(F("sill"));
  mySerial2.write(123);
  mySerial2.println("\n");
  resetPrinter2();


  delay_me();
  mySerial.println(F("se\n"));

  delay_me(); //15
  mySerial2.println(F("liukui\n"));

  delay_me();
  mySerial4.println(F("viereisiin aivoihin.\n"));

  delay_me();
  mySerial2.println(F("Sijasin\n"));

  delay_me();
  mySerial3.println(F("sen\n"));

  delay_me();
  mySerial4.println(F("rintaonteloon\n"));

  delay_me(); //20
  mySerial4.println(F("lastuvillan sekaan"));


  delay_me();
  mySerial4.println(F("kun kiinni"));


  delay_me();
  mySerial2.println(F("ommeltiin.\n"));

  delay_me();
  mySerial2.println(F("Juo\n"));

  delay_me();
  if (letterSize == 'L') {
    mySerial4.println(F("kylliksesi maijakossasi\n"));
    mySerial4.println(F("kylliksesi maijakossasi"));
  }
  mySerial4.println(F("kylliksesi maijakossasi\n"));


  delay_me();
  mySerial2.println(F("Uinu\n"));


  delay_me();
  mySerial4.println(F("rauhassa,\n"));


  delay_me();
  mySerial4.println(F("pikku asteri!\n"));
}
