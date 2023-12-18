char Incoming_value = 0;
int trigPin = 2;
int echoPin = 3;
int x = 8;
int y = 9;
int a = 10;
int b = 11;


void setup() 
{
  Serial.begin(9600);
  pinMode(4,INPUT);
  pinMode(7,OUTPUT);         
  pinMode(x,OUTPUT);
  pinMode(y,OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);


}

void loop()
{ digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
long duration, distance;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;

  delay(10);
  if((distance<=12)) 
  {
    digitalWrite(x, LOW);
    digitalWrite(y,HIGH);
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    delay(1000);
    digitalWrite(x,LOW);
    digitalWrite(y,LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);



}
if(digitalRead(4)==HIGH){ 
  digitalWrite(x,LOW);
  digitalWrite(y,LOW);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  delay(1000);
  digitalWrite(x,LOW);
  digitalWrite(y,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  delay(800);
  digitalWrite(x,LOW);
  digitalWrite(y,LOW);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  delay(1000);

} else{

  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.println("\n");        
    if(Incoming_value == '1') {            
      digitalWrite(x,HIGH);
      digitalWrite(y,LOW);
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);}  
    else if(Incoming_value == '0') {     
      digitalWrite(x,LOW);
      digitalWrite(y,HIGH);
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);}
    else if(Incoming_value == '2'){
     digitalWrite(x,LOW);
     digitalWrite(y,LOW);
     digitalWrite(a,LOW);
     digitalWrite(b,LOW); } 
    else if(Incoming_value == '3'){
      digitalWrite(x,HIGH);
      digitalWrite(y,LOW);
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);}
    else if(Incoming_value == '4'){
      digitalWrite(x,LOW);
      digitalWrite(y,LOW);
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);} 
    
    }

    }
}
    