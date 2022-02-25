#include <SoftwareSerial.h>
SoftwareSerial BT(0, 1); 
String readvoice;
void setup() 
{
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}  
void loop() 
{
  while (BT.available())
{
  delay(10); 
  char c = BT.read(); 
  readvoice += c; 
} 
if (readvoice.length() > 0) 
{
  Serial.println(readvoice);
if(readvoice == "lights on")
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(100);
}
if(readvoice == "lights off")
{
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    delay(100);
}
if(readvoice == "light one on")
{
    digitalWrite(2,HIGH);
    delay(100);
}
if(readvoice == "light one off")
{
   digitalWrite(2,LOW);
   delay(100);
}
if(readvoice == "light two on")
{
   digitalWrite(3,HIGH);
   delay(100);
}
if(readvoice == "light two off")
{
   digitalWrite(3,LOW);
   delay(100);
}
if(readvoice == "light three on")
{
   digitalWrite(4,HIGH);
   delay(100);
}
if(readvoice == "light three off")
{
   digitalWrite(4,LOW);
   delay(100);
}
if(readvoice == "LED lights on")
{
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(100);
}
if(readvoice == "LED lights off")
{
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(100);
}
if(readvoice == "LED light one on")
{
    digitalWrite(5,HIGH);
    delay(100);
}
if(readvoice == "LED light one off")
{
   digitalWrite(5,LOW);
   delay(100);
}
if(readvoice == "LED light two on")
{
   digitalWrite(6,HIGH);
   delay(100);
}
if(readvoice == "LED light two off")
{
   digitalWrite(6,LOW);
   delay(100);
}
if(readvoice == "LED light three on")
{
   digitalWrite(7,HIGH);
   delay(100);
}
if(readvoice == "LED light three off")
{
   digitalWrite(7,LOW);
   delay(100);
}
if(readvoice == "Fan on")
{
    digitalWrite(8, HIGH);
    digitalWrite (9, HIGH);
    digitalWrite (10, HIGH);
    delay(100);
}
if(readvoice == "Fan off")
{
    digitalWrite(8, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10, LOW);
    delay(100);
}
if(readvoice == "Fan one on")
{
    digitalWrite(8,HIGH);
    delay(100);
}
if(readvoice == "Fan one off")
{
    digitalWrite(8,LOW);
    delay(100);
}
if(readvoice == "Fan two on")
{
    digitalWrite(9,HIGH);
    delay(100);
}
if(readvoice == "Fan two off")
{
    digitalWrite(9,LOW);
    delay(100);
}
if(readvoice == "Fan three on")
{
    digitalWrite(10,HIGH);
    delay(100);
}
if(readvoice == "Fan three off")
{
    digitalWrite(10,LOW);
    delay(100);
}
if(readvoice == "all on")
{
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   delay(100);
}
if(readvoice == "all off")
{
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   delay(100);
}
readvoice=""; 
} 
}