int analogA=0;
int analogB=4;
int analogC=8;
int analogD=12;
int pinA=6;
int pinB=9;
int pinC=10;
int pinD=11;
int directionA=1;
int directionB=1;
int directionC=1;
int directionD=1;
int min=0;
int max=255;
int change=1;
int delayer=5;
void setup() {
pinMode(pinA,OUTPUT);
pinMode(pinB,OUTPUT);
pinMode(pinC,OUTPUT);
pinMode(pinD,OUTPUT);
}

void loop() {
  analogWrite(pinA,analogA);
  analogWrite(pinB,analogB);
  analogWrite(pinC,analogC);
  analogWrite(pinD,analogD);
  if(analogA==max){
    directionA=0;
  }
  if(analogA==min){
    directionA=1;
  }
  if(analogB==max){
    directionB=0;
  }
  if(analogB==min){
    directionB=1;
  }
  if(analogC==max){
    directionC=0;
  }
  if(analogC==min){
    directionC=1;
  }
  if(analogD==max){
    directionD=0;
  }
  if(analogD==min){
    directionD=1;
  }
  if(directionA==1){
    analogA=analogA+change;
  }
  if(directionA==0){
    analogA=analogA-change;
  }
  if(directionB==1){
    analogB=analogB+change;
  }
  if(directionB==0){
    analogB=analogB-change;
  }
  if(directionC==1){
    analogC=analogC+change;
  }
  if(directionC==0){
    analogC=analogC-change;
  }
  if(directionD==1){
    analogD=analogD+change;
  }
  if(directionD==0){
    analogD=analogD-change;
  }
  delay(delayer);
}