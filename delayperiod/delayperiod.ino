int loops=0;
int delayPeriod=100;
int x=0;
int y=0;
void setup() {
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  
}

void loop() {
  digitalWrite(8, HIGH);
  delay(delayPeriod);
  digitalWrite(8, LOW);
  delay(delayPeriod);
  delayPeriod=delayPeriod-25;
  loops++;
  if (delayPeriod<25){
    delayPeriod=100+loops*25;
  }
  if (loops>100){
    digitalWrite(13, HIGH);
    loops=0;
    if (x==1){
      x=0;
      digitalWrite(13, LOW);
      y=1;
    }
    if (y=0){
      x++;
    }
    y=0;
  }
}
