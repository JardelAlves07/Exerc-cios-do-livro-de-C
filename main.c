#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* 1
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    if (n1 > n2){
        printf("%d é maior", n1);
    }
   else{
    printf("%d é maior", n2);
   }
   */
   /* 2
       int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    if (n1 > n2){
        printf("%d é maior", n1);
    }
   else if (n2>n1){
    printf("%d é maior", n2);
   }
   else{
    printf("Numeros iguais");
   }
*/

/* 3
int n1;
scanf("%d", &n1);
if (n1%2==0){
    printf("Par");
}
else{
    printf("ímpar");
}
*/
/* 4
float salario, prestacao;
printf("Salario: ");
scanf("%f", &salario);
printf("Prestação: ");
scanf("%f", &prestacao);
if (prestacao>(0.2*salario)){
    printf("Emprestimo não concedido");
}
else{
    printf("Emprestimo concedido");
}
}
*/

/* 5 Ve ro pq dps de q n ta calculando
float n1;
scanf("%d", &n1);
if (n1>0){
    printf("%d\n", n1*n1);
    printf("%d", sqrt(n1));
}
*/
/*6
float altura, pesoIdeal;
char sexo;
printf("Sexo: ");
scanf("%c", &sexo);
printf("Altura: ");
scanf("%f", &altura);

if (sexo == 'F'){
    pesoIdeal = 62.1*altura - 44.7;
}
else{
    pesoIdeal = 72.7*altura - 58;
}
printf("%f", pesoIdeal);
*/
/* 7
CODE BLOCKS está com problema para definir palavras
float imposto, valor;
char estado;
printf("Estado: ");
scanf("%s", &estado);
printf("Valor: ");
scanf("%f", &valor);
if (estado == "MG"){
    imposto = 0.07;
    printf("O valor final do produto é de: ", valor+(valor*imposto));
}
else if (estado == "SP"){
    imposto = 0.12;
    printf("O valor final do produto é de: ", valor+(valor*imposto));
}
else if (estado == "RJ"){
    imposto = 0.15;
    printf("O valor final do produto é de: ", valor+(valor*imposto));
}
else if (estado == "MS"){
    imposto = 0.08;
    printf("O valor final do produto é de: ", valor+(valor*imposto));
}
else{
    printf("Estado não válido");
}
*/
/* 8
int idade;
printf("Idade: ");
scanf("%d", &idade);
if ((idade>5) && (idade<7)){
    printf("A - Infantil");
}
else if (idade>=7 && idade <10){
    printf("B - Infantil");
}
else if (idade>=10 && idade<13){
    printf("A - Juvenil");
}
else if (idade>=13 && idade<=17){
    printf("B - Juvenil");
}
else if(idade>17){
    printf("Adulto");
}
*/
/* 9
float altura, peso;
printf("Altura: ");
scanf("%f", &altura);
printf("Peso: ");
scanf("%f", &peso);

if (altura<1.2){
    if (peso<=60){
        printf("A");
    }
    else if(peso>60 && peso<=90){
        printf("B");
    }
    else{
        printf("C");
    }
}
else if(altura>=1.2 && altura<1.7){
    if(peso<=60){
        printf("D");
    }
    else if(peso>60 && peso<90){
        printf("E");
    }
    else{
        printf("F");
    }
}
else{
          if(peso<=60){
        printf("G");
    }
    else if(peso>60 && peso<90){
        printf("H");
    }
    else{
        printf("I");
    }

}
*/
/* 10
int n1, n2, n3, valor;
float media;
printf("Digite um numero: ");
scanf("%d", &n1);
printf("Digite um numero: ");
scanf("%d", &n2);
printf("Digite um numero: ");
scanf("%d", &n3);
printf("Digite o valor da media que deseja calcular:\n 1 - Geometrica\n 2 - Ponderada\n 3 - Harmonica\n 4 - Aritmetica\n");
scanf("%d", &valor);
if (valor == 1){
    media = n1*n2*n3;
}
else if(valor == 2){
    media = (n1 + 2*n2 + 3*n3)/6;
}
else if(valor == 3){
    media = 1/((1/n1)+(1/n2)+(1/n3));
}
else if (valor == 4){
    media = (n1+n2+n3)/3;
}
printf("O valor da media e de %f", media);
}
*/
/* 11
int mes;
printf("Mês? ");
scanf("%d", &mes);

if (mes == 1){
printf("Janeiro");
} else if(mes == 2){
printf("Fevereiro");
} else if(mes == 3){
printf("Março");
}else if(mes == 4){
printf("Abril");
}else if(mes == 5){
printf("Maio");
}else if(mes == 6){
printf("Junho");
}else if(mes == 7){
printf("Julho");
}else if(mes == 8){
printf("Agosto");
}else if(mes == 9){
printf("Setembro");
}else if(mes == 10){
printf("Outubro");
}else if(mes == 11){
printf("Novembro");
}else{
printf("Dezembro");
}
*/
/* 12
int dia;
printf("Dia: ");
scanf("%d/n", &dia);

switch(dia){
case 1: printf("Domingo"); break;
case 2: printf("Segunda"); break;
case 3: printf("Terça"); break;
case 4: printf("Quarta"); break;
case 5: printf("Quinta"); break;
case 6: printf("Sexta"); break;
case 7: printf("Sábado"); break;
}
*/

/* 13
int opcao;
float n1, n2, op;
printf("Digite um numero: ");
scanf("%f", &n1);
printf("Digite outro número: ");
scanf("%f", &n2);
printf("Digite o numero correspondente a operação que deseja realizar: \n");
printf(" 1 - SOMA\n 2 - SUBTRAÇÃO\n 3 - MULTIPLICAÇÃO\n 4 - DIVISÃO\n");
scanf("%d", &opcao);
if (opcao == 1){
    op = n1 + n2;
    printf("A soma é %f", n1 + n2);
}
else if(opcao == 2){
    op = n1-n2;
    printf("A subtração é igual a %f", n1-n2);
}
else if(opcao == 3){
    op = n1*n2;
    printf("A multiplicação é igual a %f", op);
}
else if(opcao == 4){
    op = n1/n2;
    printf("A divisão é igual a %f", op);
}
*/
/* 14
int n1;
printf("Digite um numero: ");
scanf("%d", &n1);
if (n1%3 == 0 && n1%5==0){
    printf("Este numero é divisível por 3 e por 5");
}
else{
    if(n1%3==0){
        printf("Este numero é divisível por 3");
    }
    else if(n1%5==0){
        printf("Este numero é divisível por 5");
    }
    else{
        printf("Este numero não é divisível nem por 3 e nem por 5");
    }
}
*/
/* 15
int a, b, c, delta;
float x1, x2;
printf("Digite o valor de a: ");
scanf("%d", &a);
printf("Digite o valor de b: ");
scanf("%d", &b);
printf("Digite o valor de c: ");
scanf("%d", &c);
delta = b*b - 4*a*c;

if (delta<0){
    printf("Não existem raízes reais");
}
else if(delta == 0){
    x1 = (-b + delta)/2*a;
    x2 = x1;
    printf("As raízes reias são iguais a = %d", x1);
}
else{
    x1 = (-b + delta)/2*a;
    x2 = (-b - delta)/2*a;
    printf("As raízes reias são iguais a = %f e %f ", x1, x2);

}
*/
float salarioB = 0, inss = 0, ir = 0, salarioL = 0;
  printf("Salario bruto: ");
  scanf("%f", &salarioB);
  printf("Imposto de renda: ");
  scanf("%f", &ir);
  printf("Inss: ");
  scanf("%f", &inss);

  salarioL = salarioB - ((inss / 100) * salarioB) -
                   ((ir / 100) * salarioB);

  printf(" salario bruto é %.2f \n  o imposto de renda é igual a %.2f%: %.2f \n  O "
         "INSS é igual a %.2f%: %.2f \n = O salário líquido é igual a %.2f",
         salarioB, ir, (ir / 100) * salarioB, inss,
         (inss / 100) * salarioB, salarioL);
return 0;

}

