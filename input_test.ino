/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
int inp0 = A0;
int inp1 = A1;

void setup() {
  // put your setup code here, to run once:
  pinMode(inp0, INPUT_PULLUP);
  pinMode(inp1, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int v0 = analogRead(inp0);
  delay(10);
  int v1 = analogRead(inp1);
  delay(10);

  
 // Serial.print(v0 < 500);
//  Serial.print(" | ");
//  Serial.println(v1 < 500);
boolean b0=v0<500;
boolean b1=v1<500;

  if (b0==1){ 
    Serial.println("up");
    
  }
  if(b1==1){
    Serial.println("down");
  }
}
