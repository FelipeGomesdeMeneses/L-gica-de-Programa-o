void setup()
{
	Serial.begin(9600);
  
  int contador;
  int escolha;
  
  do {
  Serial.println("________________________________________________________");
  Serial.println("                    1 - Ver telefone                    ");
  Serial.println();
  Serial.println("                    2 - Ver endereco                    ");
  Serial.println("________________________________________________________");
  Serial.println("                    3 - Sair                            ");
  while(!Serial.available());
  escolha = Serial.parseInt();
  
    if(escolha == 1 ){
      Serial.println();
      Serial.println("Telefone: 7070-7070");
      Serial.println();
      delay(2000);

    }
    else if (escolha == 2){
      Serial.println();
      Serial.println("Rua Niteroi 180  Sao Caetano do Sul  SP.");
      Serial.println();
      delay(2000);
    }
    else if (escolha == 3) {
      Serial.println();
      Serial.println("Encerrando o atendimento. Ate logo!");  
      Serial.println();
      delay(2000);
    }
    else {
      Serial.println();
      Serial.println("Digito invalido.");
      Serial.println();
      delay(2000);
    }
    
     Serial.println("se quiser ser atendido novamente digite sim caso nao queira digite nao.");
     while(!Serial.available());
    
    if (Serial.readString() == "sim"){
     contador = 1;
    }
    else {
     contador = 0;
      Serial.println();
      Serial.println("Caso queira voltar ao menu reinicie");
    }
    
    
  }
  while(contador !=0);
}

void loop()
{
  
}