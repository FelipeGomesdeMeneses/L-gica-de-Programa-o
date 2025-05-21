void setup()
{
  Serial.begin(9600);
  
  
  int contadorWhile = 60; // variavel local
  
  while(contadorWhile<=101){
    if ((contadorWhile>=60 && contadorWhile<= 80 && contadorWhile % 2 == 0)|| (contadorWhile>= 81 && contadorWhile<= 101 && contadorWhile % 2 == 1))
    {Serial.println(contadorWhile);
    }
    contadorWhile++;
    
  }
}

void loop()
{
}