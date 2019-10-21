int inPin=2;
int a=0;
void setup()
{
  Serial.begin(9600);
   pinMode(11,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(6,OUTPUT);
   pinMode(3,OUTPUT);
  pinMode(inPin,INPUT);
}
void loop()
{
int sensorValue=analogRead(A0);
 int reading=digitalRead(inPin);
  if(reading == HIGH)
  { a++;}
  if(a%2!=0)
  {
    Serial.println(sensorValue);
  delay(100);
  if(sensorValue < 480)
  {
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(3,HIGH);
    delay(100);
    
  }
  else
  {
    digitalWrite(3, HIGH);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(6,LOW);
    delay(100);
  }
  }
  else if(reading==LOW)
  {    
    digitalWrite(3, LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(6,LOW);
    
  }
}
