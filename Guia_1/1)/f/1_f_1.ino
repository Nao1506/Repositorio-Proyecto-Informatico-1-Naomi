int pulsador = 7;
int piezo = 3;

void setup()
{
   pinMode( pulsador , INPUT );
   pinMode( piezo , OUTPUT );
  
}

void loop()
{
  if (digitalRead(pulsador) == HIGH){
    tone( piezo , 440 );
    delay(200);
    noTone(piezo);
    delay(200);
  }
  else{
   digitalWrite( piezo , LOW );
  }
}