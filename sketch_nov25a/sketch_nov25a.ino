 int pulsador=0; // estado de pulso del boton //
 int boton= 5;
 int led=8; // led aparte/solitario //
 int cont=0;

void setup() {
  // put your setup code here, to run once:
 pinMode (boton , INPUT);
 pinMode (led , OUTPUT);
 Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 pulsador = digitalRead(boton); // tenemos guardado el estado del boton //
 
 if (pulsador == 1 && cont==0 ){
  digitalWrite (led, HIGH);
  cont++;
  delay(400); // Puede existir un error de conexion de cables /resistencia muy grande, en el que tengamos que apretar //
  // varias veces el boton para que funcione el codigo ( sin emabrgo puede estar ok), pero para eso en el programa ( una posible solucion ) //
  // se pone un delay para darle tiempo al arduino para que la energia termine de ser consumida por la resistencia //
  // otra solucion es bajarle los ohms a la resistencia ( achicarla ) //
  // Esto es debido a que en arduino no consumimos energia, la medimos, entonces el consumo de energia por el arduino en el pin //
  // utilizado/seleccionado es muy bajo como para consumir toda la energia que quedo del otro lado //

  // La solucion del delay en el programa no siempre funciona ( en este caso si por trabajar con un led, pero con un motor no por eje) //
 }
 pulsador = digitalRead (boton); // Es necesario poner de nuevo una lectura pq sino tomara siempre como //
 // 1 en todo el loop, es por eso que necesitamos interrumpir el proceso con una lectura //

 if (pulsador == 1 && cont==1){
  digitalWrite (led, LOW);
  cont--;
  delay (400);
 }
}
