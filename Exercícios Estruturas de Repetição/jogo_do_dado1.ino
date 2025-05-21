void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));//indica e normaliza a porta randômica para evitar o mesmo valor
}

void loop()
{
  Serial.println("");
  Serial.println("");
  Serial.println("________________________________________________________");
  Serial.println("                 Programa Jogo de Dados                 ");
  Serial.println("________________________________________________________");
  Serial.println("");
  Serial.println("");

  //pedir o palpite do usuario
  Serial.println("Digite um palpite de 1 a 6");
  while(!Serial.available());
  int palpite = Serial.parseInt();
  
  //sortear o dado
  int numeroSorteado = random(1,7);// gera um número aleatório entre 1 e 6
  
  //mostrar o resultado
  Serial.println("Seu palpite " + String (palpite));
  Serial.println("Numero do dado: " + String (numeroSorteado));
  
  //se acertou dar os parabéns, senão que pena...
  if(palpite == numeroSorteado)
  {
    Serial.println("Parabens, voce acertou");
  }
  else{
   Serial.println("Que pena, tente outra vez!"); 
  }
  
  delay(1000);
}