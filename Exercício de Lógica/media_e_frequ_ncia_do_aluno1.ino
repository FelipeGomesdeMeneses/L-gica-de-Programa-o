int nota1, nota2;
float frequencia;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite a primeira nota (Nota maxima 10)");
  while ( ! Serial.available());
  nota1 = Serial.parseInt();
  
  Serial.println("Digite a segunda nota(Nota maxima 10)");
  while ( ! Serial.available());
  nota2 = Serial.parseInt();
  
  Serial.println("Digite a frequencia do aluno (Frequencia maxima 10)");
  while ( ! Serial.available());
  frequencia = Serial.parseFloat();
  
  int media = (nota1 + nota2) / 2;
     
  if (media>=6 && media<=9 && frequencia >= 7.5){
  Serial.println("Aluno aprovado");
  }
  else if (media == 10 && frequencia ==10){
   Serial.println("Aluno aprovado por nota maxima");
  } 
  else if (media <=5 && frequencia >= 7.5 ){
   Serial.println("Aluno reprovado por nota"); 
  } 
  else if (media >=6 && frequencia <= 7.4 ){
   Serial.println("Aluno reprovado por frequencia ");
  }
  else if (media <=5 || frequencia <= 7.4){
   Serial.println("Aluno reprovado por ambos");
  }
 delay (5000);
}