int A=5;         //. TrigPin
int B=9;         //. EchoPin
int a=3;
int b=4;
int c=6;
int d=8; 
int time1;
int buzzer=2;
int Distance;
void setup()
{
  Serial.begin(9600);
  pinMode(A,OUTPUT);
  pinMode(B,INPUT);
}

void loop()
{
  digitalWrite(A,LOW);
  delayMicroseconds(1);
  digitalWrite(A,HIGH);
  delayMicroseconds(10);
  time1=pulseIn(B,HIGH);       
  Distance=time1*0.034/2;                  //. Speed Of sound = 340m/s = 0.034cm/s
  if((Distance>25))
  {                                        //.Forward Condition
    digitalWrite(a,HIGH);    
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
  }
  else if(Distance<25)
  {                                        //.Stop Condition
    digitalWrite(a,LOW);    
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    delay(500);
    digitalWrite(buzzer,HIGH);
    delay(3000);
  }
}
