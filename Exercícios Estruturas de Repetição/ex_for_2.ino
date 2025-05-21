int num;

void setup()
{
  Serial.begin(9600);

  Serial.println("Digite um numero");
  while(!Serial.available());
  num = Serial.parseInt();
  
 
  for(int contador = 0; contador <=num;contador++){
  Serial.println("Contando: "+ String(contador));
  }
}

void loop()
{
 // sem intruções
}