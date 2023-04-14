void setup() 
{
  // Configura o pino d6 como saída 
  pinMode(6, OUTPUT);
}

void loop() 
{
  // Configura o pino d6 como HIGH
  digitalWrite(11, HIGH);
  
  // Espera 1000 ms (1 segundo)
  delay(1000);             

  // Configura o pino d6 como LOW
  digitalWrite(11, LOW);  
   
  // Espera 1000 ms (1 segundo)
  delay(1000);            
}