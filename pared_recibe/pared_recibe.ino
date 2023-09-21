
int P2 = 1;
int P3 = 2;
int P4 = 3;
int P5 = 4;
int P6 = 5;


int v2=0;
int v3=0;
int v4=0;
int v5=0;
int v6=0;


// Pin analógico del fotoresistor
int ALARMA = 9;          // Pin de la alarma
int valorLDR = 0;        // Variable para almacenar el valor del fotoresistor
int umbral = 1;        // Valor umbral para activar la alarma (ajustable)

void setup() {
  
  pinMode(P2, INPUT);
  pinMode(P3, INPUT);
  pinMode(P4, INPUT);
  pinMode(P5, INPUT);
  pinMode(P6, INPUT);
  
  pinMode(ALARMA, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ALARMA,LOW);
  v2 = digitalRead(P2);
  v3 = digitalRead(P3);
  v4 = digitalRead(P4);
  v5 = digitalRead(P5);
  v6 = digitalRead(P6);


  
  if(v2!=HIGH && v3!=HIGH &&  v4!=HIGH && v5!=HIGH && v6!=HIGH){
    digitalWrite(ALARMA,HIGH);

  }

  

  
  

}
