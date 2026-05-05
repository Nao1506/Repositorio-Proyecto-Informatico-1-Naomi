int potPin = A0;

int ledMagentaR = 3;
int ledMagentaB = 5;

int ledAmarilloR = 6;
int ledAmarilloG = 9;

void setup() {
  pinMode( 3 , OUTPUT );
  pinMode( 5 , OUTPUT );
  
  pinMode( 6 , OUTPUT );
  pinMode( 9 , OUTPUT );
}

void loop() {
  int valor = analogRead(A0);

  int tiempo = map(valor, 0, 1023, 100, 1000);

  digitalWrite( 3 , HIGH );
  digitalWrite( 5 , HIGH );

  digitalWrite( 6 , HIGH );
  digitalWrite( 9 , HIGH );

  delay(tiempo);

  digitalWrite( 3 , LOW );
  digitalWrite( 5 , LOW );

  digitalWrite( 6 , LOW );
  digitalWrite( 9 , LOW );

  delay(tiempo);
}