
int pulsador=0;
int boton=5;
int led=8;

void setup() {
  // put your setup code here, to run once:
pinMode (boton, INPUT);
pinMode (led, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
pulsador=digitalRead(boton);
if (pulsador==1){
  digitalWrite (led, HIGH);
}
else {
  digitalWrite (led, LOW);
}
}
