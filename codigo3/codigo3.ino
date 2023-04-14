// DEFININDO OS PINOS
int led_red = 5;
int led_gre = 4;
int led_blu = 3;

void setup() {
  // SETUP DOS PINOS
  pinMode(led_red, OUTPUT);
  pinMode(led_gre, OUTPUT);
  pinMode(led_blu, OUTPUT);
}

void loop() {
  // LIGA TODOS OS LEDS
  digitalWrite(led_red, HIGH);
  digitalWrite(led_gre, HIGH);
  digitalWrite(led_blu, HIGH);

  delay(1000);

  // DESLIGA TODOS OS LEDS
  digitalWrite(led_red, LOW);
  digitalWrite(led_gre, LOW);
  digitalWrite(led_blu, LOW);

  delay(1000);

}
