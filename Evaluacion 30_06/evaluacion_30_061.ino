#include <Adafruit_NeoPixel.h>
#include <LiquidCrystal.h>

#define PRUEBA

#define PIN_NEOPIXEL 6
#define CANT_LED 6

#define LDR A0
#define BOTON 7

#define RS 12
#define EN 11
#define D4 5
#define D5 4
#define D6_LCD 3
#define D7_LCD 2

Adafruit_NeoPixel tira(CANT_LED, PIN_NEOPIXEL, NEO_GRB + NEO_KHZ800);
LiquidCrystal lcd(RS, EN, D4, D5, D6_LCD, D7_LCD);

int valorSensor = 0;
int porcentaje = 0;
int cantidadLed = 0;

int estadoSistema = 0;
int estadoBoton = 1;
int estadoAnterior = 1;

char color[10];

void setup()
{
  pinMode(BOTON, INPUT_PULLUP);
  pinMode(LDR, INPUT);

  Serial.begin(9600);

  lcd.begin(16, 2);
  lcd.clear();

  tira.begin();
  tira.show();
}
void loop()
{
  estadoBoton = digitalRead(BOTON);

  if (estadoBoton == LOW && estadoAnterior == HIGH)
  {
    if (estadoSistema == 0)
    {
      estadoSistema = 1;
    }
    else
    {
      estadoSistema = 0;
    }

    delay(200);
  }

  estadoAnterior = estadoBoton;

  valorSensor = analogRead(LDR);

  porcentaje = map(valorSensor, 0, 1023, 0, 100);
  porcentaje = constrain(porcentaje, 0, 100);

  cantidadLed = map(porcentaje, 0, 100, 0, 6);
  cantidadLed = constrain(cantidadLed, 0, 6);

  if (porcentaje <= 30)
  {
    color[0] = 'V';
    color[1] = 'E';
    color[2] = 'R';
    color[3] = 'D';
    color[4] = 'E';
    color[5] = '\0';
  }
  else if (porcentaje <= 70)
  {
    color[0] = 'A';
    color[1] = 'M';
    color[2] = 'A';
    color[3] = 'R';
    color[4] = 'I';
    color[5] = 'L';
    color[6] = 'L';
    color[7] = 'O';
    color[8] = '\0';
  }
  else
  {
    color[0] = 'R';
    color[1] = 'O';
    color[2] = 'J';
    color[3] = 'O';
    color[4] = '\0';
  }

#ifdef PRUEBA
  Serial.print("Sensor: ");
  Serial.print(valorSensor);
  Serial.print("  Porcentaje: ");
  Serial.print(porcentaje);
  Serial.print("%  N° Led: ");
  Serial.print(cantidadLed);
  Serial.print("  Color: ");
  Serial.println(color);
#endif

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("LUZ:");
  lcd.print(porcentaje);
  lcd.print("%");

  lcd.setCursor(0, 1);

  if (estadoSistema == 1)
  {
    lcd.print("PRENDIDO");
  }
  else
  {
    lcd.print("APAGADO ");
  }

  lcd.setCursor(11, 1);
  lcd.print(color);

  if (estadoSistema == 1)
  {
    if (cantidadLed >= 1)
      tira.setPixelColor(0, tira.Color(0, 255, 0));
    else
      tira.setPixelColor(0, 0);

    if (cantidadLed >= 2)
      tira.setPixelColor(1, tira.Color(0, 255, 0));
    else
      tira.setPixelColor(1, 0);

    if (cantidadLed >= 3)
      tira.setPixelColor(2, tira.Color(255, 255, 0));
    else
      tira.setPixelColor(2, 0);

    if (cantidadLed >= 4)
      tira.setPixelColor(3, tira.Color(255, 255, 0));
    else
      tira.setPixelColor(3, 0);

    if (cantidadLed >= 5)
      tira.setPixelColor(4, tira.Color(255, 0, 0));
    else
      tira.setPixelColor(4, 0);

    if (cantidadLed >= 6)
      tira.setPixelColor(5, tira.Color(255, 0, 0));
    else
      tira.setPixelColor(5, 0);
  }
  else
  {
    tira.setPixelColor(0, 0);
    tira.setPixelColor(1, 0);
    tira.setPixelColor(2, 0);
    tira.setPixelColor(3, 0);
    tira.setPixelColor(4, 0);
    tira.setPixelColor(5, 0);
  }

  tira.show();

  delay(100);
}
