
#define trigPin 2
#define echoPin 3

long duration;
int distance;
void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delay(220);
  krka :
  digitalWrite(trigPin, HIGH);
  delay(220);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance= duration*0.034/2;
 if (distance <=10)
  { Serial.println("Condition arrises ... Wait for 1.5 seconds within this move out of given range"); 
  delay(2000);
    goto krka; }
    else {
      Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(50);
}}
