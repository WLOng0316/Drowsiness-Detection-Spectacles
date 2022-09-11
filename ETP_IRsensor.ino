#define IR 12
#define buzzer 10
#define vibrator 11
#define LED 4

int Obstacle;

void setup() {
  // put your setup code here, to run once:
  pinMode(IR, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(vibrator, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  // put your main code here, to run repeatedly:
  Obstacle = digitalRead(IR);

  if(Obstacle==LOW) {
    //Serial.println("STOP");
    Serial.print("d");
    digitalWrite(LED,HIGH);
    digitalWrite(buzzer,HIGH);
    digitalWrite(vibrator,HIGH);
   // delay(400);
  }
  else if (Obstacle==HIGH) {
    //Serial.println("All Clear");
    Serial.print("g");
    digitalWrite(LED,LOW);
    digitalWrite(buzzer,LOW);
    digitalWrite(vibrator,LOW);
    //delay(400);
  }

  delay(500);

}
