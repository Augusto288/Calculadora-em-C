#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	char operacao, tipo;
	double num1, num2, resultado;
	
	
	//introdução da calculadora
	printf("Calculadora 1.0 \n");
	printf("Escolha um tipo de operacao, digite (1) para basica ou (0) para avancada \n");
	scanf(" %c", &tipo);
	
	//Se o valor da variável tipo for igual a 1 então...
	if (tipo == '1'){
		
		//Define a operação que será realizada e pega os valores que serão utilizados
		printf("Qual operacao deseja fazer? ( + | - | * | / )?\n");
		scanf(" %c", &operacao);
		printf("Insira o primeiro valor:\n");
		scanf(" %lf", &num1);
		printf("Insira o segundo valor:\n");
		scanf(" %lf", &num2);
		
		//Executa a operaçao de acordo com o simbolo inserido na variável operacao
		switch(operacao){
			case '+':
				resultado = num1 + num2; 
				break;
				
			case '-':
				resultado = num1 - num2;
				break;
				
			case '*':
				resultado = num1 * num2;
				break;
		
			case '/':
				// Se o valor da variável num2 for igual a zero, dará erro porquê nunhum número pode ser dividido por 0
				if (num2 != 0){
					resultado = num1 / num2;
				} else{
					printf(" Erro, nao e possivel realizar esta operacao. ");
					return 1;
				}
				
				break;
				
			//Se a variável operacao não corresponder com nenhunm dos casos uma mensagem de erro será mostrada
			default:
				printf(" Tipo de operacao selecionado nao existe");
				return 1;
				
		}
	   
	  //Senão, se o valor da variável tipo for igual a 0 então... 	
	} else if(tipo == '0'){
		
		//Define qual operação será realizada
		printf("Qual operacao deseja fazer? \n");
		printf("Digite (Q) para raiz quadrada \n");
		printf("Digite (C) para raiz cubica\n");
		printf("Digite (P) para potenciacao \n");
		printf("Digite (M) para arredondar um valor para cima (inteiro mais proximo) \n");
		printf("Digite (N) para arredondar um valor para baixo (inteiro mais proximo) \n");
		scanf(" %c", &operacao);
		
		
		switch(operacao){
			case 'Q':
			case 'q':
				printf("Insira um numero maior que 0:\n");
		        scanf(" %lf", &num1);
		        
		        //O valor do radicando(num1) não pode ser menor que zero, se for uma mensagem de erro será exibida
		        if (num1 > 0){
				
				resultado = sqrt(num1);
				break;
			} else {
				printf(" Erro, numero inserido e menor que 0");
				return 1;
			}
			
			case 'P':
			case 'p':
				printf("Insira o valor da base:\n");
				scanf("%lf", &num1);
				printf("Insira o valor do expoente:\n");
				scanf("%lf", &num2);
				
				resultado = pow(num1, num2);
				break;
				
			case 'M':
			case 'm':
				printf("Insira o valor que deseja arrdondar para cima: \n");
				scanf("%lf", &num1);
				
				resultado = ceil(num1);
				break;
				
			case 'N':
			case 'n':
				printf("Insira o valor que deseja arredondar para baixo: \n");
				scanf("%lf", &num1);
				
				resultado = floor(num1);
				break;

			case 'C':
			case 'c':
				printf("Insira um numero maior que 0:\n");
				scanf(" %lf", &num1);
			
				//O valor do radicando(num1) não pode ser menor que zero, se for uma mensagem de erro será exibida
				if (num1 > 0){
				
				resultado = cbrt(num1);
				break;
			} else {
				printf(" Erro, numero inserido e menor que 0");
				return 1;

	
}
}
	}
    //Se o valor do tipo não for nem 1, nem 0 a calculadora dará erro
    else{
		
		printf("Erro, tipo de operacao selecionado nao existe.");
		return 1;
		
	}

	//Mostra o resultado da conta

	printf("O resultado da operacao foi : %lf \n",resultado);

	system("pause");
    return 0;
	
}