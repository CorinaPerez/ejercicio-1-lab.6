const int boton = 2;
const int led = 13;
const int led2 =11;
int estado = 0;
int contador = 0;

void setup() {
  pinMode (boton, INPUT);
  pinMode (led, OUTPUT);
  pinMode (led2, OUTPUT);
  Serial.begin (9600); 
}

void loop() {
  int estado = digitalRead(boton);

  if (estado==HIGH) {
  contador++;
  Serial.println(contador);
  delay(200);
  if (contador==2){
    digitalWrite(led, HIGH);
    delay(5000);
    digitalWrite(led, LOW);
  }
    
  }
  if(contador==4) {
    digitalWrite(led2, HIGH);
  }
  

}
