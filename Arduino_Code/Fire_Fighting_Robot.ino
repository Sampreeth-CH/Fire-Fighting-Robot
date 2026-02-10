#include <Servo.h> 
Servo myservo;
int pos = 0;
int motor_speed = 100;  
boolean fire = false;
#define Left 9      
#define Right 10    
#define Forward 8  
#define LM1 2       
#define LM2 7       
#define RM1 4       
#define RM2 12       
#define pump 3
const int trig=A1;
const int echo=A2;

void setup() 
{
  pinMode(Left, INPUT);
  pinMode(Right, INPUT);
  pinMode(Forward, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  pinMode(pump, OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  analogWrite(6, motor_speed);
  analogWrite(5, motor_speed);
  myservo.attach(11);
  myservo.write(90);
}

  int read()
{ int distance;
  long int duration;
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH);
  distance=duration*0.034/2;
  return distance;
}

void put_off_fire() 
{
    delay (100);  
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
    digitalWrite(pump,HIGH);
    delay(500);
    for (pos = 50; pos <= 130; pos += 1) 
  {
    myservo.write(pos);
    delay(10);  
  }
  for (pos = 130; pos >= 50; pos -= 1) 
  {
    myservo.write(pos);
    delay(10);
  }
  digitalWrite(pump,LOW);
  myservo.write(90);
  fire=false;
} 

void loop() {
   myservo.write(90);  
   int distance=read();
   Serial.println(distance);
   if (digitalRead(Left) ==1 && digitalRead(Right)==1 && digitalRead(Forward) ==1) 
  {   
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }  
   else if (digitalRead(Forward) ==0 && distance>20) 
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
    fire = true; 
  }   
   else if(digitalRead(Forward) ==0 && distance<20)
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
    fire = true; 
    if(digitalRead(Forward) ==0 && distance<10)
   {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    delay(100);
    fire = true; 
   }
  }
   else if (digitalRead(Left) ==0) 
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
  }
   else if (digitalRead(Right) ==0) 
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }
   delay(1000);
   while (fire == true) 
  {
      put_off_fire();
  }
}