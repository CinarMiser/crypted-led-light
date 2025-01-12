
#define buton1  7
#define buton2 8
#define led1 13
#define led2 12

int say = 0;
int sifre = 0;
int kilit = 3;
int kilit2 = 4;
int durum1 = 0;
int durum2 = 0;

void setup() {

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(buton1,INPUT);
  pinMode(buton2,INPUT);
  
}

void loop() {

  durum1 = digitalRead(buton1);
  durum2 = digitalRead(buton2);

  digitalWrite(led2,HIGH);

  if(durum1 == 1){
    say++;
    delay(250);
    digitalWrite(led2,LOW);
    delay(350);
  }
  if(durum2 == 1){
    sifre++;
    delay(350);
    digitalWrite(led2,LOW);
    delay(350);

  }

  if(say == 4 && sifre == 2){
    digitalWrite(led1,HIGH);
    delay(600);
    digitalWrite(led1,LOW);
    say = 0;
    sifre = 0;
  }
}
