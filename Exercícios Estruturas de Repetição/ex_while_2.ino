int num;

void setup()
{
  Serial.begin(9600);

  Serial.println("Digite um numero");
  while(!Serial.available());
  num = Serial.parseInt();
  
  int contador = 0; 
 
  while(contador <=num){
  Serial.println("Contando: "+ String(contador));
  contador++;
  }
}

void loop()
{
 // sem intruções
}