void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
long timeSec = millis()/1000;

if (timeSec % 2 == 0) digitalWrite(7, HIGH);
else digitalWrite(7, LOW);
if (timeSec % 4 == 0) digitalWrite(8, HIGH);
else digitalWrite(8, LOW);

}