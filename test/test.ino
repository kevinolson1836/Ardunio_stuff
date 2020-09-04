int pulse_pin = 13;
int solid_pin = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(pulse_pin, OUTPUT);
  pinMode(solid_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(solid_pin, HIGH);
  digitalWrite(pulse_pin, HIGH);
  delay(1000);
  digitalWrite(pulse_pin, LOW);
  delay(1000);
}
