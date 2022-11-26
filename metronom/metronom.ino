float T=0.5;
int button_press=1;
float f=0.00;
void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, OUTPUT);
}

void loop() {
  if(button_press==1){
    digitalWrite(9, HIGH);
    delay(T*500);
    digitalWrite(9, LOW);
    delay(T*500);
    f=1/T*60;
    Serial.print(f);
    Serial.println("BPM");
  }
  button_press=1;
  if(digitalRead(7)==LOW){
    T=T-0.1;
    delay(100);
    button_press=0;
  }
  if(digitalRead(8)==LOW){
    T=T+0.1;
    delay(100);
    button_press=0;
  }
  if(T<0.5){
    T=0.5;
  }
}
