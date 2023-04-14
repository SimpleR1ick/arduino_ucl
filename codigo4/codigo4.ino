// DEFININDO OS PINOS
int led_red = 5;
int led_gre = 4;
int led_blu = 3;

// DECLARANDO VARIAVEIS
char caracter;
char mensagem[3];
int count = 0;

void setup() {
  // SETUP DOS PINOS
  pinMode(led_red, OUTPUT);
  pinMode(led_gre, OUTPUT);
  pinMode(led_blu, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    while (Serial.available() > 0) {
      caracter = Serial.read();

      if (caracter != '\n') {
        mensagem[count] = caracter;
        count++;
      }
    }
  }
  // ENTRADA DE DADOS
  Serial.println("Valores recebidos:");
  Serial.print(mensagem[0]);
  Serial.print(mensagem[1]);
  Serial.print(mensagem[2]);

  // ZERA O CONTADOR
  count = 0;

  // LIGA O LED AZUL
  if (mensagem[0] == '1') {
    digitalWrite(led_blu, HIGH);
  }
  // LIGA O LED VERDE
  if (mensagem[1] == '1') {
    digitalWrite(led_gre, HIGH);
  }
  // LIGA O VERMELHO
  if (mensagem[2] == '1') {
    digitalWrite(led_red, HIGH);
  }
  // DESLIGA O LED AZUL
  if (mensagem[0] == '0') {
    digitalWrite(led_blu, LOW);
  }
  // DESLIGA O LED VERDE
  if (mensagem[1] == '0') {
    digitalWrite(led_gre, LOW);
  }
  // DESLIGA O LED VERMELHO
  if (mensagem[2] == '0') {
    digitalWrite(led_red, LOW);
  }
}
