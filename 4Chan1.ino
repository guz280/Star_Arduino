int Delay = 0;
int analogVal = 0;

void setup() 
{
  Serial.begin(9600);
  Serial.println("Joseph Psaila - 79256994\n");
  
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
}

void loop() 
{
  analogVal = analogRead(A7);
  Delay = analogVal*5;
  Serial.println(analogVal);
  
  digitalWrite(8,HIGH);
  delay(Delay);
  digitalWrite(7,HIGH);
  delay(Delay);
  digitalWrite(6,HIGH);
  delay(Delay);
  //digitalWrite(5,HIGH);
  //delay(Delay);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  //digitalWrite(5,LOW);
  delay(Delay);
}
