void main(void){
char turma[6][2][20],n,t;
float notas[6][3][2],media,geral;
int i,o,u,l,cont,cont2,zero;
int presenca[6][2],a,b;
a=0;
b=0;
for(i=1;i<=2;i++){
for(o=1;o<=5;o++){
    printf("\n turma %d\t",i);
    printf("\n aluno %d\t",o);
    printf("\n escreva o nome do aluno\t");
    scanf("%s",&turma[o][i]);
    printf("\n digite a faltas do aluno\t");
    scanf("%d",&presenca[o][i]);
if(i==1){a++;}
if(i==2){b++;}
for(u=0;u<=2;u++){
 printf("\ndigite a nota %d\t",u+1);
 scanf("%f",&notas[o][u][i]);}
if(o<5){
printf("\ndeseja matricular mais algum aluno s ou n\t");
scanf("%s",&t);
if(t=='n'){o=7;}}
}}
printf("\ndeseja imprimir um relatorio s ou n\t");
scanf("%s",&n);
while(n=='s'){
l=0;
printf("\ndeseja imprimir um relatorio por aluno(1) ou por turma(2)\t");
scanf("%d",&l);

if(l==1){media=0;
    printf("\nde qual turma ?\t");
    scanf("%d",&i);
    printf("\nqual eo numero do aluno\t");
    scanf("%d",&o);


    printf("\n nome: %s\t",turma[o][i]);
    for(u=0;u<=2;u++){
        printf("\nnotas: %f\t",notas[o][u][i]);
        media=media+notas[o][u][i];}
    media=media/3;
    printf("\nmedia %f",media);
    printf("\n teve %d faltas",presenca[o][i]);
    if(media>=7&&presenca[o][i]<=10){printf("\ncertificado liberado\t");}
    if(media<7&&media>=5&&presenca[o][i]<=10){printf("\nfara substutiva\t");}
    if(media<5){printf("\n reprovado por nota\t");}
    if(presenca[o][i]>10){printf("\nreprovado por falta\t");}}

    if(l==2){cont=0;
            cont2=0;
            media=0;
            geral=0;
        printf("\nqual turma gostaria de ve \t");
        scanf("%d",&i);

        if(i==1){
        for(o=1;o<=a;o++){media=0;
        for(u=0;u<=2;u++){
        media=media+notas[o][u][i];}
        media=media/3;
        if(media>8){cont++;}
        if(media<7&media>4){cont2++;}
        geral=geral+media;}
        zero=0;
        for(o=0;o<=a;o++){for(u=0;u<=2;u++){if(notas[o][u][i]==0||notas[o][u][i]==0||notas[o][u][i]==0){zero++;
    u=7;}}}
    geral=geral/a;
    printf("\n%d alunos matriculados na turma\t",a);}

        if(i==2){
        for(o=1;o<=b;o++){media=0;
        for(u=0;u<=2;u++){
        media=media+notas[o][u][i];}
        media=media/3;
        if(media>8){cont++;}
        if(media<7&media>4){cont2++;}
        geral=geral+media;}
        zero=0;
        for(o=0;o<=b;o++){for(u=0;u<=2;u++){if(notas[o][u][i]==0||notas[o][u][i]==0||notas[o][u][i]==0){zero++;
        u=7;}}}

    geral=geral/b;
    printf("\n%d alunos matriculados na turma\t",b);}
    printf("\n %f ea media geral da turma\t",geral);
    printf("\n %d alunos faram substutiva\t",cont2);
    printf("\n %d alunos obtiveram media superior a 8\t",cont);
    printf("\n %d alunos obtiveram alguma nota 0\t",zero);}


    printf("\ndeseja imprimir outro relatorio\t");
    scanf("%s",&n);

}
return 0;
}