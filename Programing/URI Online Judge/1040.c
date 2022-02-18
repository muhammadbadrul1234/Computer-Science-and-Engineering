#include<stdio.h>
int main(){
    float a,b,c,d,e,Average,Average1;
    scanf("%f%f%f%f", &a,&b,&c,&d);
    Average=((a*2+b*3+c*4+d)/10);
    printf("Media: %.1f\n",Average);

    if(Average>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(Average<5.0){
        printf("Aluno reprovado.\n");
    }
    else if((Average>=5.0) && (Average<=6.9)){
        printf("Aluno em exame.\n");
        printf("Nota do exame: ");
    }
        scanf("%f", &e);
        Average1=(Average+e)/2;
        if(Average1>=5.0){
            printf("\nAluno aprovado.\n");
        }
        else if(Average1<=4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",Average1);

    return 0;

}
