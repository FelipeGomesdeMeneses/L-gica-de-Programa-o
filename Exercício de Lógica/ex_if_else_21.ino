//C++ code
//Variáveis
String cor = "";

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite a cor do semaforo (Verde ou Vermelho)");
  while( ! Serial.available());
  cor = Serial.readString(); 
  
  if (cor == "Verde") { // se retornar verdadeiro - losango sim
    Serial.println("Siga");
  } else {//falso - losango não
    Serial.println("Pare");
  }
  
  delay(2000);
}