#include <stdio.h>
#include <math.h>

typedef struct alunos {
    char nome[100];
    int ra;
    float p1;
    float p2;
    float p3;
    float media;
} aluno;

void medias()
{    
    int i;
    FILE *fp;
    
    fp = fopen("lista_alunos.txt","r"); // leitura (e escrita +)
        
    aluno alunos[50];

    for (i = 0;i < 50;i++) {        
        fscanf(fp, "\%s \%d \%f \%f \%f", alunos[i].nome, &alunos[i].ra, &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
        alunos[i].media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3)/3;   
    }
    
    fp = fopen("media_alunos.txt","w+"); // cria arquivo para ser escrito
         
    for (i = 0;i < 50;i++) {
        fprintf(fp, "\%s \%d \%.2f \%.2f \%.2f \%.2f\n", alunos[i].nome, alunos[i].ra, alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
    }
    fclose(fp);
}

int main()
{
    medias();        
    return 0;
}
