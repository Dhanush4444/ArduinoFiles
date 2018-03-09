#define DATA 4
#define LATCH 5
#define CLOCK 6
#define Delay 500
byte Zero[8]={1,0,0,0,0,0,0,1};
byte One[8]={1,1,0,0,1,1,1,1};
byte Two[8]={1,0,0,1,0,0,1,0};
byte Three[8]={1,0,0,0,0,1,1,0};
byte Four[8]={1,1,0,0,1,1,0,0};
byte Five[8]={1,0,1,0,0,1,0,0};
byte Six[8]={1,0,1,0,0,0,0,0};
byte Seven[8]={1,0,0,0,1,1,1,1};
byte Eight[8]={1,0,0,0,0,0,0,0};
byte Nine[8]={1,0,0,0,1,1,0,0};
void setup() {
for(unsigned int i=4;i<=6;i++)
pinMode(i,OUTPUT);
}
void Latch(){
  digitalWrite(LATCH,HIGH);
  delay(1);
  digitalWrite(LATCH,LOW);
  }
  void Clock(){
    digitalWrite(CLOCK,HIGH);
    delay(1);
    digitalWrite(CLOCK,LOW);
    }
void Check(){
  for(unsigned int i=1;i<=8;i++){
  digitalWrite(DATA,HIGH);
  Clock();
  Latch();
 delay(100);
  }
  delay(100);
for(unsigned int i=1;i<=8;i++){
  digitalWrite(DATA,LOW);
  Clock();
  Latch();
 delay(100);
  }  
  delay(100);
}
void Send_Numbers(){
  for(unsigned int i=7;i>=0&&i<8;i--){
    digitalWrite(DATA,Zero[i]);
    Clock();
  }
  Latch();
  delay(Delay);

  for(unsigned int i=7;i>=0&&i<8;i--){
    digitalWrite(DATA,One[i]);
    Clock();
  }
  Latch();
  delay(Delay);

  for(unsigned int i=7;i>=0&&i<8;i--){
    digitalWrite(DATA,Two[i]);
    Clock();
  }
  Latch();
  delay(Delay);

  for(unsigned int i=7;i>=0&&i<8;i--){
    digitalWrite(DATA,Three[i]);
    Clock();
  }
  Latch();
  delay(Delay);

  for(unsigned int i=7;i>=0&&i<8;i--){
    digitalWrite(DATA,Four[i]);
    Clock();
  }
  Latch();
  delay(Delay);

  for(unsigned int i=7;i>=0&&i<8;i--){
    digitalWrite(DATA,Five[i]);
    Clock();
  }
  Latch();
  delay(Delay);


 for(unsigned int i=7;i>=0&&i<8;i--){
    digitalWrite(DATA,Six[i]);
    Clock();
  }
  Latch();
  delay(Delay);


  for(unsigned int i=7;i>=0&&i<8;i--){
    digitalWrite(DATA,Seven[i]);
    Clock();
  }
  Latch();
  delay(Delay);

  for(unsigned int i=7;i>=0&&i<8;i--){
    digitalWrite(DATA,Eight[i]);
    Clock();
  }
  Latch();
  delay(Delay);

for(unsigned int i=7;i>=0&&i<8;i--){
    digitalWrite(DATA,Nine[i]);
    Clock();
  }
  Latch();
  delay(Delay);
}
void loop() {
Send_Numbers();
}
