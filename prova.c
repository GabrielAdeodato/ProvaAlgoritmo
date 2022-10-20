/*PROVA ALGORITMO*/

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");


	/*(0,5 ponto). Escreva um printf com as seguintes informa��es: nome da disciplina (Algoritmo e
Programa��o), nome do professor (Joyce Siqueira), nome completo do aluno, matr�cula, curso, link do
reposit�rio do GitHub e qual software foi utilizado: DevC++ ou VSCode.*/


printf("Nome da disciplina: Algoritmo e programa��o\nNome: Gabriel de Paula Alvarenga Adeodato.\nMatr�cula: UC22103132.\nCurso: Ci�ncia da computa��o\nLink do reposit�rio do gitHub: https://github.com/GabrielAdeodato/ProvaAlgoritmo\nSoftware: DevC++");
	


	/*(1.0 ponto). Deve ser constru�do um menu, com switch case, que d� acesso as 3 quest�es. Ou seja,
para executar a quest�o A, digite �A�; para quest�o B, digite �B� e; para a quest�o C, digite �C�. Caso a
op��o desejada n�o seja v�lida, imprimir �Opcao invalida�.*/
	
int questao;	

printf("\n\nEscolha o numero da quest�o que voc� deseja realizar (1 para A, 2 para B ou 3 para C): ");
scanf("%d", &questao);

switch(questao){
	float a, b, hipotenusa, seno;
	int anoNascimento;
	char nome[80];
	
	case 1:
/*(2.5 pontos). A. Um Col�gio est� com um novo projeto, no qual deseja ensinar matem�tica aos alunos do
ensino m�dio, por meio de algoritmos de resolu��o de formulas. Assim, voc� foi contratado para escrever
um algoritmo que receba os valores de �a� e �b�, ou seja, os valores dos catetos oposto e adjacente,
respectivamente, de um tri�ngulo. Com esses valores, calcule o valor da hipotenusa, usando o teorema de
Pit�goras, e o valor de seno. Ao final, apresente todos os resultados calculados, com 3 casas depois da
v�rgula.*/
	
		printf("Digite o valor do cateto oposto: ");
		scanf("%f", &a);
		printf("Digite o valor do cateto adjacente: ");
		scanf("%f", &b);
		
		hipotenusa = sqrt(pow(a, 2) + pow(b,2));
		
		printf("A hipotenusa �: %.3f\n", hipotenusa);
		
		seno = a/hipotenusa;
		
		printf("O seno �: %.3f", seno);
		
		
		
	break;
	
	case 2:
		/*(5.0 pontos). B. O usu�rio deseja verificar se seu ano de nascimento � um ano bissexto ou n�o. Para tal, �
preciso solicitar o nome do usu�rio e ano de nascimento, garantindo que seja um ano v�lido, ou seja, entre
1900 e 2022.*/
fflush(stdin);
	printf("Digite seu nome: ");
	fgets(nome, 80, stdin);
	
	printf("Digite o seu ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	if (anoNascimento< 1900 && anoNascimento> 2022 ){
	}	
	else if(anoNascimento % 4 == 0 && anoNascimento % 100 != 0 && anoNascimento>= 1900 && anoNascimento<= 2022 || anoNascimento % 4== 0 && anoNascimento % 100== 0 && anoNascimento % 400== 0 && anoNascimento>= 1900 && anoNascimento<= 2022 ){
		
		printf("%s, o ano do seu nascimento � bissexto", nome);
	}
	
	else{
		printf("%s, se o ano do seu nascimento estiver entre 1900 e 2022, o ano do seu nascimento n�o � bissexto, caso contr�rio, a data � invalida", nome);
			}
	break;
	
	
	
	
	case 3:
		printf("Quest�o longa demais, escolha outra.");
	
			
	
	break;
	default:
		printf("Op��o invalida");
	break;	
}	
}

