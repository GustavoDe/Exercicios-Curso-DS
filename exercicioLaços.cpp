#include <stdio.h>
int main()
{
	float nota1, nota2, media, exame;
	int aprovadoDireto, reprovadoDireto, aprovadoExame, reprovadoExame, alunos;
	char nomeAluno[30];
	aprovadoDireto = 0;
	reprovadoDireto = 0;
	aprovadoExame = 0;
	reprovadoExame = 0;
	alunos = 0;
	
	while(alunos < 10){	
	printf("Nome do Aluno: ");
	scanf("%s", nomeAluno);
	printf("Digite a sua primeira nota do aluno: ");
	scanf("%f", &nota1);
	printf("Digite a sua segunda nota do aluno: ");
	scanf("%f", &nota2);
	if (nota1 > 10 && nota2 > 10 ){
		printf("Insira numeros menor que 10, Tente novamente \n ");
		break;
	}
	media = (nota1 + nota2)/2;
	if(media >= 7) {
		printf("%s foi aprovado \n", nomeAluno );
		aprovadoDireto++;
		alunos++;
	} else {
		if(media < 4) {
			printf("%s Aluno reprovado \n", nomeAluno);	
			
			aprovadoDireto++;
			alunos++;
		} else {
			if(media >= 4 || media <= 6.9 ) {
				printf("Insira a nota do seu exame \n");
				scanf("%f", &exame);
				if(exame >= 5) {
					printf("%s aprovado por exame \n", nomeAluno);
					aprovadoExame++;
					alunos++;
					
				} else {
					printf("%s Aluno reprovado por exame \n", nomeAluno);
					reprovadoExame++;	
					alunos++;		
				}
			}
		}
	}
}
printf("Quantidade de aluno aprovado: %d ", aprovadoDireto);
printf("Quantidade de aluno aprovado: %d ", reprovadoDireto);
printf("Quantidade de aluno aprovado: %d ", aprovadoExame);
printf("Quantidade de aluno aprovado: %d ", reprovadoDireto);
}
