void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 // pinMode(8, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //int s0 = digitalRead(8);

  int s0 = analogRead(A0);
  int s1 = analogRead(A1);
  int s2 = analogRead(A2);
  int s3 = analogRead(A3);
  int s4 = analogRead(A4);
  int s5 = analogRead(A5);
  int s6 = analogRead(A6);
  // int s7 = analogRead(A7);

  if(Serial.available() > 0)
  {
    int incoming = Serial.read(); 

    if (s0 > 100 || s1 > 100 || s2 > 100 || s3 > 100 || s4 != 0 || s5 != 0 || s6 != 0)
    {
      if(s0 > 100) //zero is the threshold for now 
      s0 = 1;
      else
      s0 =0;

      if(s1 > 100) //zero is the threshold for now 
      s1 = 1;
      else
      s1 =0;

      if(s2 > 100) //zero is the threshold for now 
      s2 = 1;
      else
      s2 =0;

      if(s3 > 400) //zero is the threshold for now 
      s3 = 1;
      else
      s3 =0;

      if(s4 > 400) //zero is the threshold for now 
      s4 = 1;
      else
      s4 =0;

      if(s5 > 100) //zero is the threshold for now 
      s5 = 1;
      else
      s5 =0;

      if(s6 > 400) //zero is the threshold for now 
      s6 = 1;
      else
      s6 =0;

      // if(s7 > 100) //zero is the threshold for now 
      // s7 = 1;
      // else
      // s7 =0;

      //  Serial.print(s0); 
      //  Serial.print(","); 
      //  Serial.print(s1);
      //  Serial.print(","); 
      //  Serial.print(s2);
      //  Serial.print(","); 
      //  Serial.print(s3);
      //  Serial.print(",");
      //  Serial.print(s4);
      //  Serial.print(",");
      //  Serial.print(s5);
      //  Serial.print(",");
       Serial.println(s6);
      //  Serial.print(",");
      //  Serial.println(s7);
      
       
    }
  }

}
