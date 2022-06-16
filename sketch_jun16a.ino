int pir = 6;
int alaram = 3;
int veri;

void setup() {
  pinMode(6,INPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  veri=digitalRead(pir);
  if(veri == 1){
      digitalWrite(alaram,HIGH);
    }else{
        digitalWrite(alaram,LOW);
      }
}
