int num;
int resultado;
void setup()
{
  Serial.begin(9600);
  
  Serial.println("Tabuada");
  
  Serial.println("Insira o numero que voce quer a tabuada");
  while(!Serial.available());
  num = Serial.parseInt();
  
  for (int contador = 1; contador<=100; contador++){
    resultado = num * contador;
    
  	Serial.print(num);
  	Serial.print(" * ");
  	Serial.print(contador);
  	Serial.print(" = ");
    Serial.println(resultado);

    
  }

}

void loop()
{
  //sem instruções
}