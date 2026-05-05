
void setup()
{
  pinMode( 4 , OUTPUT );
  
  pinMode( 2 , OUTPUT );
  
  pinMode( 8 , OUTPUT );
  
  pinMode( 7 , OUTPUT );
  
  pinMode( 12 , OUTPUT );
  
}

void loop()
{
  digitalWrite ( 2 , HIGH );
  
  digitalWrite ( 12 , HIGH );
  
  delay (10000);
  
  digitalWrite ( 2 , LOW );
  
  digitalWrite ( 8 , HIGH );
  
  delay (10000);
  
  digitalWrite ( 8 , LOW );
  
  digitalWrite ( 12 , LOW );
  
  digitalWrite ( 7 , HIGH );
  
  digitalWrite ( 4 , HIGH );
  
  delay (10000);
  
  digitalWrite ( 4 , LOW );
  
  digitalWrite ( 8 , HIGH );
  
  delay (10000);
  
  digitalWrite ( 8 , LOW );
  digitalWrite( 7 , LOW );
  
      
}