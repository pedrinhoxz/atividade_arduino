int LED = 13;
int LDR = A0;
int valor_LDR;
void setup() {
 pinMode(LED, OUTPUT);
 pinMode(LDR,INPUT);
 Serial.begin(9600);

}

void loop() {
valor_LDR = analogRead(LDR);
Serial.println(valor_LDR);
if (valor_LDR > 1000){
digitalWrite(LED,HIGH);
delay (1000);
} else {
      
       digitalWrite(LED,LOW);
       delay (1000);
  }
}
