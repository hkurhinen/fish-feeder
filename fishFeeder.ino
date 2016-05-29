#define MOTOR_PIN_1 4
#define MOTOR_PIN_2 3
#define SPEED_PIN 6
#define SPEED 255
#define FEED_TIME 6000

void setup() {
  pinMode(MOTOR_PIN_1, OUTPUT);
  pinMode(MOTOR_PIN_2, OUTPUT);
  pinMode(SPEED_PIN, OUTPUT);
  digitalWrite(MOTOR_PIN_1, HIGH);
  digitalWrite(MOTOR_PIN_2, LOW);
  analogWrite(SPEED_PIN, SPEED);
}

void loop() {
  delay(FEED_TIME);
  digitalWrite(MOTOR_PIN_1, LOW);
  digitalWrite(MOTOR_PIN_2, LOW);
  analogWrite(SPEED_PIN, 0);
}
