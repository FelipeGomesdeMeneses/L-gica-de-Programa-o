String nome [7];
String email[7];
int idade [7];

void setup()
{
  Serial.begin(9600);
  
  Serial.println("________________________________________________________");
  Serial.println("          Programa de Cadastro de Convidados            ");
  Serial.println("________________________________________________________");
  Serial.println();
  
  for(int i = 0; i<7; i++){
   Serial.println("Digite seu nome");
   while(!Serial.available());
   nome [i] = Serial.readString();
   Serial.println("Digite seu email");
   while(!Serial.available());
   email[i] = Serial.readString(); 
   Serial.println("Digite a sua idade");
   while(!Serial.available());
   idade[i] = Serial.parseInt(); 
   Serial.println(" ");
  }
  
  
  Serial.println("________________________________________________________");
  Serial.println("          Programa de Cadastro de Convidados            ");
  Serial.println("________________________________________________________");
  
  
  for (int i =0 ; i<7; i++){
  Serial.println("Nome: " + nome[i]);
  Serial.println("Email: " + email[i]);
  Serial.println("Idade: " + String(idade[i]));
  Serial.println("---");
  }
  
  
}

void loop()
{
  
}