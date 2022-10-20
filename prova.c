/*PROVA ALGORITMO*/

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");


	/*(0,5 ponto). Escreva um printf com as seguintes informações: nome da disciplina (Algoritmo e
Programação), nome do professor (Joyce Siqueira), nome completo do aluno, matrícula, curso, link do
repositório do GitHub e qual software foi utilizado: DevC++ ou VSCode.*/


printf("Nome da disciplina: Algoritmo e programação\nNome: Gabriel de Paula Alvarenga Adeodato.\nMatrícula: UC22103132.\nCurso: Ciência da computação\nLink do repositório do gitHub: https://github.com/GabrielAdeodato/ProvaAlgoritmo\nSoftware: DevC++");
	


	/*(1.0 ponto). Deve ser construído um menu, com switch case, que dê acesso as 3 questões. Ou seja,
para executar a questão A, digite ‘A’; para questão B, digite ‘B’ e; para a questão C, digite ‘C’. Caso a
opção desejada não seja válida, imprimir “Opcao invalida”.*/
	
int questao;	

printf("\n\nEscolha o numero da questão que você deseja realizar (1 para A, 2 para B ou 3 para C): ");
scanf("%d", &questao);

switch(questao){
	float a, b, hipotenusa, seno;
	int anoNascimento;
	char nome[80];
	
	case 1:
/*(2.5 pontos). A. Um Colégio está com um novo projeto, no qual deseja ensinar matemática aos alunos do
ensino médio, por meio de algoritmos de resolução de formulas. Assim, você foi contratado para escrever
um algoritmo que receba os valores de ‘a’ e ‘b’, ou seja, os valores dos catetos oposto e adjacente,
respectivamente, de um triângulo. Com esses valores, calcule o valor da hipotenusa, usando o teorema de
Pitágoras, e o valor de seno. Ao final, apresente todos os resultados calculados, com 3 casas depois da
vírgula.*/
	
		printf("Digite o valor do cateto oposto: ");
		scanf("%f", &a);
		printf("Digite o valor do cateto adjacente: ");
		scanf("%f", &b);
		
		hipotenusa = sqrt(pow(a, 2) + pow(b,2));
		
		printf("A hipotenusa é: %.3f\n", hipotenusa);
		
		seno = a/hipotenusa;
		
		printf("O seno é: %.3f", seno);
		
		
		
	break;
	
	case 2:
		/*(5.0 pontos). B. O usuário deseja verificar se seu ano de nascimento é um ano bissexto ou não. Para tal, é
preciso solicitar o nome do usuário e ano de nascimento, garantindo que seja um ano válido, ou seja, entre
1900 e 2022.*/
fflush(stdin);
	printf("Digite seu nome: ");
	fgets(nome, 80, stdin);
	
	printf("Digite o seu ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	if (anoNascimento< 1900 && anoNascimento> 2022 ){
	}	
	else if(anoNascimento % 4 == 0 && anoNascimento % 100 != 0 && anoNascimento>= 1900 && anoNascimento<= 2022 || anoNascimento % 4== 0 && anoNascimento % 100== 0 && anoNascimento % 400== 0 && anoNascimento>= 1900 && anoNascimento<= 2022 ){
		
		printf("%s, o ano do seu nascimento é bissexto", nome);
	}
	
	else{
		printf("%s, se o ano do seu nascimento estiver entre 1900 e 2022, o ano do seu nascimento não é bissexto, caso contrário, a data é invalida", nome);
			}
	break;
	
	
	
	
	case 3:
		printf("Questão longa demais, escolha outra.");
	
			
	
	break;
	default:
		printf("Opção invalida");
	break;	
}	
}

