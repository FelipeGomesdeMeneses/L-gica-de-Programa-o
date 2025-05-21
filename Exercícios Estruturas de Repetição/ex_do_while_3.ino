void setup()
{
  Serial.begin(9600);
  
  int senha = 4469;
  int senhadigitada,contador;
  
  do{
    
    Serial.println("Sistema de login");
    Serial.println();
    Serial.println("Digite uma senha de 4 digitos");
    while(!Serial.available());
    senhadigitada = Serial.parseInt();
    
    if(senhadigitada == senha) {
    Serial.println();
    Serial.println("Login efetuado com sucesso.");
    Serial.println();
    }
    else {
    Serial.println("Senha incorreta. Tente novamente!");
    }
    
    delay(2000);
    Serial.println("Voce deseja voltar ao menu? Digite sim ou nao");
    while(! Serial.available()){}
    
    
    if(Serial.readString() == "sim"){
     contador = 1;
    }
    else{
     contador = 0;
      
     Serial.println("Ate breve");
     Serial.println("Caso queira voltar ao menu reinicie");     
    }
    
    
  }
  while(contador!=0);
}

void loop()
{
  
}