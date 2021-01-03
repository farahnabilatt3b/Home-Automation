int ml=A0;
int m2=A1;
int m3=A2;
int h=255;
int l=0;
String motion;

void setup() {
  Serial.begin(9600);
  pinMode(ml,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
}

void loop() {
    Serial.println("Silakan ketik 'p' untuk memutar fan");
    Serial.println("Silakan ketik 's' untuk berhenti fan");
    Serial.println("Silakan ketik 'n' untuk menyala night lamp");
    Serial.println("Silakan ketik 'f' untuk mati night lamp");
    Serial.println("Silakan ketik 'h' untuk menyala light");
    Serial.println("Silakan ketik 'm' untuk mati light");
    Serial.println("Silakan ketik 'a' untuk menyalakan seluruh home automation");
  while(Serial.available()==0){  }

  motion=Serial.readString();
  if(motion=="p") {
  analogWrite(ml,l);
  analogWrite(m2,h);
  analogWrite(m3,h);
  }

  if(motion=="s"){
  analogWrite(ml,h);
  analogWrite(m2,h);
  analogWrite(m3,h);
  }

  if(motion=="n") {
  analogWrite(ml,h);
  analogWrite(m2,l);
  analogWrite(m3,h);
  }

  if(motion=="f"){
  analogWrite(ml,h);
  analogWrite(m2,h);
  analogWrite(m3,h);
  }

   if(motion=="h") {
  analogWrite(ml,h);
  analogWrite(m2,h);
  analogWrite(m3,l);
  }

  if(motion=="m"){
  analogWrite(ml,h);
  analogWrite(m2,h);
  analogWrite(m3,h);
  }

  if(motion=="a"){
  analogWrite(ml,l);
  analogWrite(m2,l);
  analogWrite(m3,l);
  }
  }
