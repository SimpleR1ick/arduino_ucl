/*
Esse codigo demostra a intensidade da luz de um led
*/
void setup() 
{
  // Configura o pino d13 como saída 
  pinMode(11, OUTPUT);
}

void loop() 
{
  // Configura o pino 13 como HIGH
  analogWrite(11, 255);

  // Espera 1000 ms (1 segundo)
  delay(1000);             

  // Configura o pino 13 como LOW
  analogWrite(11, 100);   

  // Espera 1000 ms (1 segundo)
  delay(1000);            
}
