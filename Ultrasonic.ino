#define trigPin 13
#define echoPin 12
#define led 11
#define led2 10
void setup(){
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  
}

 void loop(){
  long duration,distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); 
  distance = (duration/2)/29.1;
  

 if (distance <= 50)

{ digitalWrite(led,LOW); 
  digitalWrite(led2,HIGH);
  }

else {

digitalWrite(led,HIGH);
 digitalWrite(led2,LOW);

}

Serial.print(distance);

Serial.println(" cm");

delay(500);

}
 
