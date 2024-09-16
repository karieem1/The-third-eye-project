int trig = 11;
int eco = 10;
int buzzer = 12;
int vibmotor =9;
void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
pinMode (buzzer,OUTPUT);
pinMode (vibmotor,OUTPUT);
pinMode (trig,OUTPUT);
pinMode (eco,INPUT);}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(2);
digitalWrite(trig,LOW);
long durtion = pulseIn(eco,HIGH);
float distance = (durtion*0.034)/2;
durtion = pulseIn(eco,LOW);
Serial.print(distance);
Serial.println("cm");
delayMicroseconds(1);
if (distance>100) {digitalWrite(buzzer,LOW);
digitalWrite(vibmotor,LOW);
delayMicroseconds(10);}
  if (distance<=15)
{
digitalWrite(buzzer,HIGH);
digitalWrite(vibmotor,HIGH);
delayMicroseconds(10);}
if (15<distance &&distance<50 )
{digitalWrite(buzzer,HIGH);
digitalWrite(vibmotor,HIGH);
delay(20);
digitalWrite(buzzer,LOW);
delay(10);}
if (50<distance &&distance<100 )
{
digitalWrite(vibmotor,HIGH);
delay(10);}
