int x=0;
int y=0;
int z=0;
int a=0;
int b=0;
int c=0;
int d=0;
int e=0;
void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  if(x>0){
    digitalWrite(12, HIGH);
  }
  if(x<1){
    digitalWrite(12, LOW);
  }
  if(y>1){
    digitalWrite(11, HIGH);
  }
  if(y<2){
    digitalWrite(11, LOW);
  }
  if(z>3){
    digitalWrite(10, HIGH);
  }
  if(z<4){
    digitalWrite(10, LOW);
  }
  if(a>7){
    digitalWrite(9, HIGH);
  }
  if(a<8){
    digitalWrite(9, LOW);
  }
  if(b>15){
    digitalWrite(8, HIGH);
  }
  if(b<16){
    digitalWrite(8, LOW);
  }
  if(c>31){
    digitalWrite(7, HIGH);
  }
  if(c<32){
    digitalWrite(7, LOW);
  }
  if(d>63){
    digitalWrite(6, HIGH);
  }
  if(d<64){
    digitalWrite(6, LOW);
  }
  if(e>127){
    digitalWrite(5, HIGH);
  }
  if(e<128){
    digitalWrite(5, LOW);
  }
  x++;
  y++;
  z++;
  a++;
  b++;
  c++;
  d++;
  e++;
  if(x>1){
    x=0;
  }
  if(y>3){
    y=0;
  }
  if(z>7){
    z=0;
  }
  if(a>15){
    a=0;
  }
  if(b>31){
    b=0;
  }
  if(c>63){
    c=0;
  }
  if(d>127){
    d=0;
  }
  if(e>255){
    e=0;
  }
  delay(250);
}