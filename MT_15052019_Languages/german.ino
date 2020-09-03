void german () {

  if (letterSize == 'L') {
    mySerial.println(F("Bierfahrer\n"));
    mySerial.print(F("Ein ersoffener"));
  } else {
    mySerial.print(F("Ein ersoffener Bierfahrer\n"));
  }

  delay_me(); //1
  mySerial2.println(F("wurde\n"));

  delay_me();
  mySerial4.println(F("auf dem Tisch\n"));

  delay_me();
  mySerial2.println(F("gestemmt.\n"));

  delay_me();
  mySerial.println(F("Irgendeiner\n"));


  delay_me(); //5
  mySerial2.println(F("hatte\n"));

  delay_me();
  mySerial3.println(F("ihm\n"));

  delay_me();
  if (letterSize == 'L') {
  mySerial3.println(F("eine dunkelhell-"));
  mySerial3.println(F("lilla Aster\n"));
  } else {
  mySerial3.println(F("eine dunkelhellilla Aster\n"));
  }

  delay_me();
  mySerial4.print("zwischen die Z");
  mySerial4.print(char(123));
  mySerial4.print("hne");
  mySerial4.println();

  //resetPrinter4();


  delay_me();
  mySerial2.println(F("geklemmt.\n"));

  delay_me(); //10
  mySerial4.println(F("Als\n"));

  delay_me();
  mySerial.println(F("ich\n"));

  delay_me();
  mySerial4.println(F("von der Brust aus.\n"));

  delay_me();
  mySerial4.println(F("unter der Haut\n"));

  delay_me();
  mySerial4.println(F("mit einem langen Messer.\n"));

  delay_me(); //15
  mySerial3.println(F("Zunge und Gaumen\n"));

  delay_me();
  mySerial4.println(F("herrausschnitt\n"));

  delay_me();
  mySerial2.print(F("mu"));
  mySerial2.write(126);
  mySerial2.println(F("\n"));


  delay_me();
  mySerial.println(F("ich\n"));

  delay_me();
  mySerial3.println(F("sie\n"));

  delay_me(); //20
  mySerial2.print(F("angesto"));
  mySerial2.write(126);
  mySerial2.print(F("en haben,"));
  mySerial2.println("\n");
  resetPrinter2();


  delay_me();
  mySerial4.println(F("denn\n"));

  delay_me();
  mySerial.println(F("sie\n"));

  delay_me();
  mySerial4.print(F("in das nebenl"));
  mySerial4.println(F("iegende Gehirn.\n"));
  resetPrinter4();


  //////////
  delay_me();
  mySerial.println(F("Ich\n"));

  delay_me(); //25
  mySerial2.println(F("packte\n"));

  delay_me();
  mySerial3.println(F("sie\n"));

  delay_me();
  mySerial3.println(F("ihm\n"));

  delay_me();
  mySerial4.print(F("in die Brusth"));
  mySerial4.write(124);
  mySerial4.print("hle");
  mySerial4.println("\n");
  resetPrinter4();

  delay_me();
  mySerial4.print(F("Als\n"));

  delay_me(); //30
  mySerial2.print(F("zun"));
  mySerial2.write(123);
  mySerial2.print("hte.\n");
  mySerial2.println();
  resetPrinter2();

  ///////

  delay_me();
  mySerial2.println(F("Trinke dich satt\n"));

  delay_me();
  mySerial3.println(F("dich \n"));

  delay_me();
  mySerial2.println(F("satt\n"));

  delay_me();
  mySerial4.println(F("in deiner Vase!\n"));
  /////
  delay_me(); //35
  mySerial2.println(F("Ruhe\n"));

  delay_me();
  mySerial4.println(F("sanft,\n"));

  delay_me();
  mySerial.println(F("kleine Aster!\n"));



}
