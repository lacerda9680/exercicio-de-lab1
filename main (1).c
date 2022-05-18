
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*EXERCICIO 1
int main()
{
  int valor;
    printf("digite um numero inteiro\n");
    scanf("%d",&valor);
    printf("seu valor e:\n\n%d",valor);

    return 0;
}*/
/*exercicio 2
int main
{
    float valor;
    printf("digite um numero real\n");
    scanf("%f",&valor);
    printf("seu valor e:\n\n%f",valor);

    return 0;
}*/
//EXERCICIO 3
/*int main()
{
     int result,x,y,z;
        printf("digite um numero inteiro\n");
        scanf("%d",&x);
         printf("digite o segundo numero inteiro\n");
        scanf("%d",&y);
         printf("digite o terceiro numero inteiro\n");
        scanf("%d",&z);

        result=x+y+z;


        printf("a soma deles éeh: %d",result);
}
*/
/* EXERCICIO 4

int main()
{float num,result;
printf("digite um numero");
scanf("%f",&num);
result=num/5;
printf("a quinta parte desse numero digitado é:\n%f",result);

}
*/
/* EXERCICIO 5
int main()
{
   double entrada, quintaParte;
   printf ("Digite um numero: \n");

   scanf ("%lf", &entrada);

   quintaParte = entrada * 1/5;
   printf ("A quinta parte de %lf eh:%f\n",  entrada, quintaParte);

   return 0;
       
}
*/



/*
int main()  EXERCICIO 6
{
    double c,f;
    
    printf("digite uma temperatura em celsius\n");
    scanf("%f",&c,&f);
    f = c*(9.0/5.0)+32.0;
     printf("a conversC#o de graus celsius para fahrenheit C):%.f\n",f);

return 0;
 
}
*/
/*

EXERCICIO 7
int main()
{

double f,c,result;

printf("digite uma temperatura em fahrenheit\n");
scanf("%f",&f);
 c= 5.0*(f-32.0)/9;


printf("a conversC#o de fahrenheit para celsius C):\n%f",c,f);

 return 0;

}
*/


/*
int main ()   EXERCICIO 8
{
double k,c;
printf("digite uma temperatura em graus kelvin:\n");
scanf("%f",&k);
c=k-273.15;


printf(" a conversC#o de kelvin para celsius C):%f",c,k);
return 0;
 

}
*/

/*int main ()  EXERCICIO 9
{
double c,k;
printf("digite uma temperatura em graus celsius:\n");
scanf("%lf",&c);
k=c+273.15;
printf(" a conversC#o de celsius para kelvin %lf",k,c);
return 0;
}
*/

 /*
    int main () EXERCICIO 10
    {
    float km,ms;
    printf("digite uma velocidade em km/h\n");
    scanf("%f",&km);
    ms=km/3.6;
    printf("a velocidade convertida em metros por segundo C)%f",ms,km);

    return 0;
    }
  */


/*
int main () EXERCICIO 11
 {
 float ms,km;
 printf("digite uma velocidade em m/s\n");
 scanf("%f",&ms);
 km=ms*3.60;

 printf("a velocidade convertida em quilometros por hora C):\n %f",km,ms);
 return 0;
}
*/



/*
int main() EXERCICIO 12
{
float mi,kl;
printf("digite uma distancia em milhas:\n");
scanf("%f",&mi);
kl=1.61*mi;
printf("a conversC#o de milhas para kilometros dessa distancia C)%f",kl,mi);


return 0;
    
}

*/



/*
int main () EXERCICIO 13
{
    float mi,kl;
printf("digite uma distancia em kilometros:\n");
scanf("%f",&kl);
mi=kl/1.61;
printf("a conversC#o de kilometros para milhas dessa distancia C)%f",mi,kl);

return 0;
}

*/

/* EXERCICIO 14
int main()
{
    float g,r;
    printf("digite um angulo:\n");
    scanf("%f",&g);
    r=g*3.141592/180;
    printf("o valor da conversC#o desse angulo para radianos C):\n%f",r,g);

}
*/

/* EXERCICIO 15
int main ()
{
    
    float g,r;
    printf("valor de um angulo em radianos:\n");
    scanf("%f",&r);
    g=r*180/3.141592;
    printf("o valor da conversC#o desse angulo para graus C):\n%f",g,r);
    
    
}
*/


/*
int main() EXERCICIO 16
{
    float p,c;
    printf("digite um valor de um comprimento em polegadas:\n");
    scanf("%f",&p);
    c=p*2.54;
    
    printf("o valor da conversC#o desse numero para centimentros C):\n%f",c,p);
    
    
}
*/



/*
int main () EXERCICO 17
{
float p,c;
    printf("digite um valor de um comprimento em centimentros:\n");
    scanf("%f",&c);
    p=c/2.54;
    
    printf("o valor da conversC#o desse numero para polegadas C):\n%f",p,c);
}
*/


/*
int main ()  EXERCICIO 18
{
    float m,l;
    printf("digite um valor de volume em m3\n");
    scanf("%f",&m);
    
    l=1000*m;
    
    printf("a conversC#o desse valor para litros C):\n%f",l,m);
}
*/



/*
int main () EXERCICIO 19
{
    float l,m;
    printf("digite um valor de volume em litros\n");
    scanf("%f",&l);
    
    m=l/1000;
    
    printf(" a conversC#o desse valor para metros cubicos C):\n%f",m,l);
}
*/



/*
int main() EXERCICIO 20

{
    float k,l;
    printf("digite um valor de massa em kilogramas\n");
    scanf("%f",&k);
    
    l=k/0.45;
    
    printf("conversC#o desse valor para libras C):\n%f",l,k);
}
*/

/*
int main () EXERCICIO 21

{
    float l,k;
    
    printf("digite um valor de massa em libras:\n");
    scanf("%f",&l);
    k=l*0.45;
    printf("esse valor convertido para quilogramas C):\n%f",k,l);
    
}
*/

/*
int main() EXERCICIO 22
{
    float j,m;
    printf("digite um valor em jardas\n");
    scanf("%f",&j);
    m=0.91*j;
    
    printf("esse valor convertido em em metros C):\n%f",m,j);
    
}
*/


/* EXERCICIO 23
 int main ()
 {
     
     float m,j;
     printf("digite um valor em metros:\n");
     scanf("%f",&m);
     j=m/0.91;
     printf("esse valor convertido em jardas C):\n%f",j,m);
     
 }
 */


 /*EXERCICIO 24
    int main()
    {
    float m,a;
    printf("digite um valor em metros quadrados:\n");
    scanf("%f",&m);
    a=m*0.000247;
    printf("esse valor convertido em acres C):\n%f",a,m);

    }
  */


 /* EXERCICIO 25
    int main()
    {
    float m,a;
    printf("digite um valor que vai ser lido como acres:\n");
    scanf("%f",&a);
    m=a*4048.58;
    printf("esse valor convertido em metros quadrados C):\n%f",m,a);

    }
  */

 /* EXERCICIO 26
    int main()
    {
    float m,h;
    printf("digite um valor que vai ser lido como metros quadrados:\n");
    scanf("%f",&m);
    h=m*0.0001;
    printf("esse valor convertido em hectares C):\n%f",h,m);
    }
  */

 /*EXERCICIO 27
    int main()
    {
    float m,h;
    printf("digite um valor que vai ser lido como hectares:\n");
    scanf("%f",&h);
    m=h*10000;
    printf("esse valor convertido em metros quadrados C):\n%f",m,h);

    }
  */
  /*
  int main() EXERCICIO 28
  {
       float a, b, c,result;
  printf (" digite um primeiro valor\n");
scanf("%f",&a);

  printf (" digite um segundo valor\n");
  scanf("%f",&b);

  printf(" digite um terceiro valor\n");
scanf("%f",&c);

  result =(a+b+c)*2;
  printf ("a soma do quadrados desses numeoros é:\n%f",result);
      
  }
  */
 
  /*
int
main ()  EXERCICIO 29
{
  float a, b, c,d,result;
  printf (" digite um primeiro valor\n");
scanf("%f",&a);

  printf (" digite um segundo valor\n");
  scanf("%f",&b);

  printf(" digite um terceiro valor\n");
scanf("%f",&c);

printf(" digite o valor do quarto numero\n");
scanf("%f",&d);

  result =(a+b+c+d)/4;
  printf ("a media aritmedica desses valores é:\n%f",result);

}*/

/* EXERCICIO 30
int main()
{

    float r,d,result;
    
    printf("digite um valor que vai ser lido como real:\n");
    scanf("%f",&r);
    
    result=r/4,97;
    printf("esse valor convertido para dolar é:%f\n",result);
    
}
*/


/*
int main() EXERCICIO 31
{
    int result,num,a,s;
    printf("digite um numero inteiro:\n");
    scanf("%d",&num);
    result=(num-1);
    
    printf("o antecessor desse numero é:\n%d ",result);
    result=num+1;
    printf("o sucessor desse numero é\n%d",result);
    
}
*/


/*
int main() EXERCICIO 32
{
    int num, result,result2;
    printf("digite um numero inteiro:\n");
    scanf("%d",&num);
    
    result=(num+1)*3;
    
    
    printf("a soma do sucessor de seu triplo é:%d",result);
    
    result2=(num-1)*2;
    
    printf("o antecessor de seu dobro é:%d",result2);
  */  
  
  /*
     int main() EXERCICIO 33
     { 
         float qua,result;
     printf("digite o tamanho de um lado de um quadrado:\n");
     scanf("%f",&qua);
     
    result= qua*qua;
    printf("a area desse quadrado é:\n%f",result);
     }
*/    


/*
    int main() EXERCICIO 34
    {
        float result,cir;
        printf("digite o valor do raio de um circulo:\n");
        scanf("%f",&cir);
        result=3.141592*cir*cir;
        
        printf(" a area do circulo correspondente é:\n%f",result);
        
    }
    */
    
    
    /*
int main() EXERCICIO 35
{
     
    int num1, num2, num3;
    float hipotenusa;
    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);
    printf("Insira o segundo valor: ");
    scanf("%d", &num2);
    hipotenusa = sqrt((num1* num1) + (num2* num2));
    printf("A hipotenusa dos valores eh = %.2f", hipotenusa);
    printf("\n\n");
    
}
*/


/*
int main() EXERCICIO 36
{
    
int altura = 4;
    printf("A altura do cilindro e: 4");
    int raio = 2;
    printf("\nO raio do cilindro e: 2");
    float volume = 3.14 * (raio*raio) * altura;
    printf("\nO volume do cilindro eh: %f" , volume);
}
/*
    /*
    int main () EXERCICIO 37
    {
        int valor,result;
        printf("digite o valor de um produto:\n");
        scanf("%d",&valor);
        result=valor*0.12;
        printf("o valor com desconto é:\n%d",result);
    }
    */
    
    /*
    int main()EXERCICIO 38
    {
        
        int valor,result;
    printf("digite o salario do funcionario:\n");
    scanf("%d",&valor);
    result=(valor*0.25)+valor;
    printf(" o salario com o aumento é:%d",result);
    }
    */
    /* EXERCICIO 39
    int main() {
    float valor = 780.000;
    printf("O valor total eh:R$%.3f", valor );
    float gan1, gan2, desc2, gan3, desc3;
    gan1=  valor * 0.46;
    printf("\nPrimeiro ganhador recebe:R$%.3f", gan1);
    gan2=  valor * 0.32;
    printf("\nPrimeiro ganhador recebe:R$%.3f", gan2);
    gan3=  valor * 0.22;
    printf("\nPrimeiro ganhador recebe:R$%.3f", gan3);
    printf("\n\n");
    system("pause");
    return 0;
}
    
    */
    /*
    int main() { EXERCICIO 40
    float dias;
    printf("\nQuantos dias o encanador trabalhou? ");
    scanf("%f" , &dias);
    float sal = 30.00;
    float ir, salfinal;
    ir = sal * 0.08;
    salfinal = sal - ir;
    printf("\nO encanador recebera: R$%.2f" , salfinal * dias);
    printf("\n\n");
    system("pause");
    return 0;
}
    */
/* EXERCICIO 41
int main() {
    float horadia = 5.50;
    printf("Voce recebe por hora: R$%.2f", horadia);
    float horames;
    printf("\nQuantas horas voce trabalhou esse mes: ");
    scanf("%f", &horames);
    float hrstrab = horadia * horames;
    float bonus, salfim;
    bonus = hrstrab * 0.10;
    salfim = hrstrab + bonus;
    printf("Voce recebera esse mes: R$%.2f", salfim);
    
    ;
    return 0;
}
  */  
  /*    EXERCICIO 42
   int main() { 
    float salb;
    printf("Insira seu salario: R$");
    scanf("%f", salb);
    float gratificacao, imposto, saltot;
    gratificacao = salb * 0.05;
    imposto = salb * 0.07;
    saltot = salb + gratificacao - imposto;
    printf("\nSalario a receber eh: R$%.2f", saltot);
   
    
    return 0;
}
    */
    
    /* EXERCICIO 43
    int main() {
    float vlrtot;

    printf("Qual o valor total? ");
    scanf("%f", &vlrtot);

    float des10, vlrapagar;
    des10 = vlrtot * 0.10;
    vlrapagar = vlrtot - des10;
    printf("\nTotal a pagar com desconto de 10%: R$%.2f" , vlrapagar);
    float parc3;
    parc3= vlrtot / 3;
    printf("\nTotal do parcelamento em 3x sem juros: R$%.2f", parc3);
    float comissao;
    comissao= vlrapagar * 0.05;
    printf("\nComissao venda a vista: R$%.2f", comissao);
    float comissao2;
    comissao2= vlrtot * 0.05;
    printf("\nComissao venda parcelada: R$%.2f", comissao2);
    }
    */
    
    /* EXERCICIO 44
    int main() {
    float degrau, altura, qtd;
    printf("Insira a altura do degrau em centimetros: ");
    scanf("%f", &degrau);
    printf("Qual altura deseja alcancar em metros:");
    scanf("%f", &altura);
    qtd =  (degrau*100) / altura;
    printf("\nA quantidade de degraus para alcancar a altura eh:%.0f" , qtd);
    return 0;
}*/
    /*EXERCICIO 45
    int main {
    char letra;
    printf("Digite uma letra minuscula: ");
    scanf("%c", &letra);
    letra = toupper(letra);
    printf("\nLetra em maiusculo: %c " , letra);
    
}*/
/* EXERCICIO 46
int main() {
   int num, num1, num2, num3;
   printf("Digite um numero inteiro de 3 digitos positivo: ");
   scanf("%d", &num);
   if (num > 10) {
     num1 = num%10;
	   num = num/10;
	   num2 = num%10;
	   num = num/10;
	   num3=num%10;
	   num=num/10;
   }
   printf("%d%d%d\n", num1, num2, num3);
   
}*/

/* EXERCICIO 47
int main() {
   int num1 = 1 , num2 = 2 , num3 = 3 , num4 = 4;
   printf("Numero inteiro de 4 digitos : %d%d%d%d " , num1, num2, num3, num4);
   printf("\n%d\n%d\n%d\n%d\n", num1, num2, num3);
   system("pause");
   return 0;
}
*/

/*
int main() { EXERCICIO 48
   int horas, minutos, segundos;
   printf("Digite os segundos: ");
   scanf("%d" , &segundos);
   horas = segundos / 3600;
   minutos = (segundos -(horas*3600))/60;
   segundos = segundos - (horas*3600)-(minutos*60);
   printf("%dh: %dm: %ds: ", horas, minutos, segundos);
   printf("\n");
   system("pause");
   return 0;
}
*/
/*  EXERCICIO 49
int main() {
   int h= 15, m =30, s=10;
   printf("A hora inicial eh: %d:%d:%d", h, m, s);
   int duracao = 10800;
   printf("\nA hora de duracao da experiencia em segundos eh: %d", duracao);
   int horas, minutos, segundos;
   horas = duracao / 3600;
   minutos = (duracao-(horas*3600))/60;
   segundos = duracao - (horas*3600)-(minutos*60);
   int hf, mf, sf;
   hf= h + horas;
   mf= m + minutos;
   sf= s + segundos;
   printf("\nA experiencia terminara as: %d:%d:%d", hf, mf, sf );
*/
/* EXERCICIO 50
int main() {
    int idade, ano_atual, ano_nasc;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Insira em que ano estamos: ");
    scanf("%d", &ano_atual);
    ano_nasc = ano_atual - idade;
    printf("Voce nasceu em: %d", ano_nasc);
    printf("\n");
    system("pause");
    return 0;
}
*/
/* EXERCICIO 51
int main() {
    float x = 0;
    float y = 0;
    float R = 0;
    printf ("Digite a coordenada x \n");
    scanf ("%f", &x);
    printf ("Digite a coordenada y \n");
    scanf ("%f", &y);
    R=sqrt(pow(x,2)+pow(y,2)); //pow(base, expoente) pra elevar ao quadrado e sqrt() é raíz quadrada
    printf("A distancia e: %f \n", R);
    fflush(stdin);
    getchar();
    return 0;
}
*/
/*EXERCICIO 52
nt main() {
    float amg1, amg2, amg3, vlrarrecadado;
    printf("\nValor aposta amigo 1: ");
    scanf("%f", &amg1);
    printf("\nValor aposta amigo 2: ");
    scanf("%f", &amg2);
    printf("\nValor aposta amigo 3: ");
    scanf("%f", &amg3);
    vlrarrecadado = amg1 + amg2 + amg3;
    printf("\nValor arrecadado para aposta: %.2f" , vlrarrecadado);
    float premio = 980.000;
    printf("\nO valor do premio eh: %.3f" , premio);
    float pct1, pct2, pct3;
    pct1 = (amg1 * 100)/vlrarrecadado;
    pct2 = (amg2 * 100)/vlrarrecadado;
    pct3 = (amg3 * 100)/vlrarrecadado;
    printf("\nAmigo 1 apostou: %.2f porcento do total arrecadado.", pct1);
    printf("\nAmigo 2 apostou: %.2f porcento do total arrecadado.", pct2);
    printf("\nAmigo 3 apostou: %.2f porcento do total arrecadado.", pct3);
    printf("\nAmigo 1 recebera: R$%.2f.", premio * pct1/100);
    printf("\nAmigo 2 recebera: R$%.2f.", premio * pct2/100);
    printf("\nAmigo 3 recebera: R$%.2f.", premio * pct3/100);
    return 0;
}
*/
/* EXERCICIO 53
int main() {
    float largura, comprimento, preco, total;
    printf("\nQual a largura do terreno: ");
    scanf("%f", &largura);
    printf("\nQual o comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("\nQual o preco do terreno: R$");
    scanf("%f", &preco);
    total = (comprimento * largura * preco);
    printf("\nVoce gastara para cercar o terreno: R$%.2f", total);
    return 0;
}*/
