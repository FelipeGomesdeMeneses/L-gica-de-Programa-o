void setup()
{
  Serial.begin(9600);
	
  int resultado;
  int contador;
  
  
  do{
  
  Serial.println("Quanto que eh 2 + 2");
  while(! Serial.available());
  resultado = Serial.parseInt();  
    
    if(resultado == 4){
    Serial.println("Parabens!");
    }
    else {
    Serial.println("Resposta errada. Tente novamente");
    }
    
    Serial.println("Voce quer tentar denovo? Digite sim ou nao");
    while(!Serial.available());
    
    if(Serial.readString()== "sim"){
      contador = 1;
    }
    else {
     contador = 0;
      
      Serial.println("Ate breve. Se quiser tentar novamente reinicie");
    }
    
    
  }
while(contador !=0);
  
}

void loop()
{
 // sem intruções
}