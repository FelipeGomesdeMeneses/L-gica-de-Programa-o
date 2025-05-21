void setup()
{
  Serial.begin(9600);

  int contador = 0; 
 
  for(int contador = 0;contador <=100;contador++){
  Serial.println("Contando: "+ String(contador));
  }
  
}

void loop()
{
 // sem intruções
}