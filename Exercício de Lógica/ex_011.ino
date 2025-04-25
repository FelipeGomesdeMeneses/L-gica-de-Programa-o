//C++ code
//Variáveis
long idade = 0;

void setup ()
{
  Serial.begin(9600);
}

void loop()
{
  
  Serial.println("qual eh a sua idade");
  while( ! Serial.available() );
  idade = Serial.parseInt();
  
  long idademeses = idade * 12;
  long idadedias = idade * 365;
  long idadehoras = idadedias * 24;
  long idademinutos = idadehoras * 60;
    
    Serial.println("Idade em meses: " + String(idademeses));
    Serial.println("Idade em dias: " + String(idadedias));
    Serial.println("Idade em horas: " + String (idadehoras));
    Serial.println("Idade em minutos: " + String(idademinutos));
  
    delay(4000);

  
}