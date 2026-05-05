// C++ code
//
void setup()
{
  pinMode( 2 , OUTPUT);
  pinMode( 3 , OUTPUT);
  pinMode( 4 , OUTPUT);
  pinMode( 5 , OUTPUT);
  pinMode( 6 , OUTPUT);
  pinMode( 7 , OUTPUT);
}

void loop()
{
  digitalWrite( 4 , HIGH); //rojo
  delay(1000);
  digitalWrite( 4 , LOW ); //rojo
  digitalWrite( 3 , HIGH ); //azul
  digitalWrite( 2 , HIGH ); //verde
  delay(1000);
  digitalWrite( 3 , LOW ); //azul
  digitalWrite( 2 , HIGH ); //verde
  delay(1000);
  digitalWrite( 2 , LOW ); //verde
  digitalWrite( 3 , HIGH ); //azul
  digitalWrite( 4 , HIGH ); //rojo
  delay(1000);
  digitalWrite( 4 , LOW ); //rojo
  digitalWrite( 3 , HIGH ); //azul
  delay(1000);
  digitalWrite( 2 , HIGH ); //verde
  digitalWrite( 3 , HIGH ); //azul
  digitalWrite( 4 , HIGH ); //rojo
  delay(1000);
  digitalWrite( 3 , LOW ); //azul
  digitalWrite( 2 , HIGH ); //verde
  digitalWrite( 4 , HIGH ); //rojo
  delay(1000);
  digitalWrite( 2 , LOW ); //verde
  digitalWrite( 3 , LOW ); //azul
  digitalWrite( 4 , LOW ); //rojo
  delay(1000);
  digitalWrite( 7 , HIGH); //rojo
  delay(1000);
  digitalWrite( 7 , LOW ); //rojo
  digitalWrite( 6 , HIGH ); //azul
  digitalWrite( 5 , HIGH ); //verde
  delay(1000);
  digitalWrite( 6 , LOW ); //azul
  digitalWrite( 5 , HIGH );
  delay(1000);
  digitalWrite( 5 , LOW );
  digitalWrite( 6 , HIGH );
  digitalWrite( 7 , HIGH );
  delay(1000);
  digitalWrite( 7 , LOW );
  digitalWrite( 6 , HIGH );
  delay(1000);
  digitalWrite( 5 , HIGH );
  digitalWrite( 6 , HIGH );
  digitalWrite( 7 , HIGH );
  delay(1000);
  digitalWrite( 6 , LOW );
  digitalWrite( 5 , HIGH );
  digitalWrite( 7 , HIGH );
  delay(1000);
  digitalWrite( 5 , LOW );
  digitalWrite( 6 , LOW );
  digitalWrite( 7 , LOW );
}