int operacao;
float resultado;



//ESTRUTURA: tiporetorno nomedaFUNÇÃO parametros corpo
void somar(float num1param, float num2param = 0){
  resultado = num1param + num2param;
  Serial.println("O resultado da soma eh: " + String(resultado));
}

float dividir(float num3param, float num4param = 0){
  resultado = num3param / num4param;
  return resultado;
  //Serial.println("O resultado da divisao eh: " + String(resultado));
}

void multiplicar(float num5param, float num6param = 0){
  resultado = num5param * num6param;
  Serial.println("O resultado da multiplicacao eh: " + String(resultado));

}


float subtrair(float num7param, float num8param = 0){
  resultado = num7param - num8param;
  return resultado;
}

void setup()
{
  Serial.begin(9600);
  
  
  int contador = 0;
  float num1,num2;
    
    
  do{
    Serial.println("Bem-vindo a calculadora inteligente : P!!!\n");
    Serial.println("Escolha uma das operacoes");
    Serial.println("1 - Somar");
    Serial.println("2 - Dividir");
    Serial.println("3 - Multiplicar");
    Serial.println("4 - Subtrair");
    while( ! Serial.available()){}
    operacao = Serial.parseInt();
  
    
    
    Serial.println("Para prosseguir voce vai precisar digitar 2 numeros");
    Serial.println("Digite o 1o numero");
    while( ! Serial.available()){}
    num1 = Serial.parseFloat();
          
    Serial.println("Digite o 2o numero");
    while( ! Serial.available()){}
    num2 = Serial.parseFloat();
    
    
    switch(operacao){
      case 1: //SOMAR
          somar(num1, num2);//estou passando os valores que o usuário digitou via parametro
          somar(1, 3); //estou passando os valores fixos via parametro
          
      
      /*float retornoFuncaoSomar;
          retornoFuncaoSomar = somar(num1, num2);
      Serial.println("");*/
      
      break;
      
      case 2:
       float retornoFuncaoDividir;
          retornoFuncaoDividir = dividir(num1, num2);
      Serial.println("O resultado da divisao eh: " + String(resultado));
          break;
      
      case 3:
          multiplicar(num1, num2);
          break;
      
      case 4:
            float retornoFuncaoSubtrair;
          retornoFuncaoSubtrair = subtrair(num1, num2);
            Serial.println("O resultado da subtracao eh: " + String(resultado));

          break;
      
      default:
       Serial.println("Opcao invalida! Escolha ua opcao do 1 ao 4. ;)");
    }
    
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
  //sem instruções
}