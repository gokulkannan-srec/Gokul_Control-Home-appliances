
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
  digitalWrite (3, HIGH);
  delay(100);
}
if(readvoice == "lights off")
{
    digitalWrite(2, LOW);
    digitalWrite (3, LOW);
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

if(readvoice == "Fan on")
{
    digitalWrite(4, HIGH);
    digitalWrite (5, HIGH);
    delay(100);
}
if(readvoice == "Fan off")
{
    digitalWrite(4, LOW);
    digitalWrite (5, LOW);
    delay(100);
}

if(readvoice == "Fan one on")
{
    digitalWrite(4,HIGH);
    delay(100);
}
if(readvoice == "Fan one off")
{
    digitalWrite(4,LOW);
    delay(100);
}

if(readvoice == "Fan two on")
{
    digitalWrite(5,HIGH);
    delay(100);
}
if(readvoice == "Fan two off")
{
    digitalWrite(5,LOW);
    delay(100);
}

if(readvoice == "all on")
{
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   delay(100);
}
if(readvoice == "all off")
{
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   delay(100);
}

readvoice=""; 
} 
}
