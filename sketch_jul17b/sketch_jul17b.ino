#define echoPin 2
#define trigPin 3
#define echoPin2 6
#define trigPin2 7

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(13, LOW);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration = pulseIn(echoPin2, HIGH);
  distance = duration * 0.034 / 2;

  if (distance >= 20 && distance <= 200)
  {
    Serial.println(distance);
    delay(200);
    digitalWrite(13, HIGH);
    delay(200);
  }

}
