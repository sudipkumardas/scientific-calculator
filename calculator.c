#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float a,b,result,kal,cel,fer;
int y,i,x,n,v,w,u,f,z,r1,c1,r2,c2,j,k,op1,op2,cnv,trigo,choice,m,p[15][15],q[15][15],r[15][15],sum=0;
printf("\n Press 1 for simple calculator");
printf("\n Press 2 for scientific calculator");
printf("\n Press 3 for temperature conversion");
printf("\n Press 4 to find the value of simple trigonometric functions");
printf("\n Press 5 for fibonacci series");
printf("\n Enter choice: ");
scanf("%d",&choice);
if(choice==1)
{
printf("\n Press 1 for addition");
printf("\n Press 2 for subtruction");
printf("\n Press 3 for multiplication");
printf("\n Press 4 for division");
printf("\n Enter choice: ");
scanf("%d",&op1);
switch(op1)
{
case 1 :
{
printf("ADDITION");
printf("\n Enter 1st number: ");
scanf("%f",&a);
printf("\n Enter 2nd number: ");
scanf("%f",&b);
printf("\n %.2f+%.2f = %.2f",a,b,a+b);
break;
}
case 2 :
{
printf("SUBTRUCTION");
printf("\n Enter 1st number: ");
scanf("%f",&a);
printf("\n Enter 2nd number: ");
scanf("%f",&b);
printf("\n %.2f-%.2f = %.2f",a,b,a-b);
break;
}
case 3 :
{
printf("MULTIPLICATION");
printf("\n Enter 1st number: ");
scanf("%f",&a);
printf("\n Enter 2nd number: ");
scanf("%f",&b);
printf("\n %.2f×%.2f = %.2f",a,b,a*b);
break;
}
case 4 :
{
printf("DIVISION");
printf("\n Enter 1st number: ");
scanf("%f",&a);
printf("\n Enter 2nd number: ");
scanf("%f",&b);
printf("\n %.2f/%.2f = %.2f",a,b,a/b);
break;
}
default:
{
printf("INVALID ENTRY");
}
}
}
else if(choice==2)
{
printf("\n Press 1 for addition");
printf("\n Press 2 for subtruction");
printf("\n Press 3 for multiplication");
printf("\n Press 4 for division");
printf("\n Press 5 to find square");
printf("\n Press 6 to find cube");
printf("\n Press 7 to find any power");
printf("\n Press 8 to find square root");
printf("\n Press 9 to find cube root");
printf("\n Press 10 to find inverse i.e., 1/x");
printf("\n Press 11 to find factorial");
printf("\n Press 12 to find value of exponential");
printf("\n Press 13 to find value of natural log");
printf("\n Press 14 to find value of log base 10");
printf("\n Press 15 to find value of log to base a");
printf("\n Press 16 to find combination i.e., nCr");
printf("\n Press 17 to solve matrix problems");
printf("\n Enter choice: ");
scanf("%d",&op2);
switch(op2)
{
case 1 :
{
printf("ADDITION");
printf("\n Enter 1st number: ");
scanf("%f",&a);
printf("\n Enter 2nd number: ");
scanf("%f",&b);
printf("\n %.2f+%.2f = %.2f",a,b,a+b);
break;
}
case 2 :
{
printf("SUBTRUCTION");
printf("\n Enter 1st number: ");
scanf("%f",&a);
printf("\n Enter 2nd number: ");
scanf("%f",&b);
printf("\n %.2f-%.2f = %.2f",a,b,a-b);
break;
}
case 3 :
{
printf("MULTIPLICATION");
printf("\n Enter 1st number: ");
scanf("%f",&a);
printf("\n Enter 2nd number: ");
scanf("%f",&b);
printf("\n %.2f×%.2f = %.2f",a,b,a*b);
break;
}
case 4 :
{
printf("DIVISION");
printf("\n Enter 1st number: ");
scanf("%f",&a);
printf("\n Enter 2nd number: ");
scanf("%f",&b);
printf("\n %.2f/%.2f = %.2f",a,b,a/b);
break;
}
case 5 :
{
printf("SQUARE");
printf("\n Enter the number to be squared: ");
scanf("%f",&a);
result=pow(a,2);
printf("\n %.2f^2 = %.2f",a,result);
break;
}
case 6 :
{
printf("CUBE");
printf("\n Enter the number whose cube to be found: ");
scanf("%f",&a);
result=pow(a,3);
printf("\n %.2f^3 = %.2f",a,result);
break;
}
case 7 :
{
printf("POWER");
printf("\n Enter base: ");
scanf("%f",&a);
printf("\n Enter power: ");
scanf("%f",&b);
result=pow(a,b);
printf("\n (%.2f)^%.2f = %.2f",a,b,result);
break;
}
case 8 :
{
printf("SQUARE ROOT");
printf("\n Enter the number whose square root to be found: ");
scanf("%f",&a);
result=sqrt(a);
printf("\n √%.2f = %.2f",a,result);
break;
}
case 9:
{
printf("CUBE ROOT");
printf("\n Enter the number whose cube root is to be found: ");
scanf("%f",&a);
result=cbrt(a);
printf("(%.2f)^1/3=%.2f",a,result);
break;
}
case 10 :
{
printf("INVERSE");
printf("\n Enter the number whose inverse is to be found i.e., 1/x : ");
scanf("%f",&a);
result=pow(a,-1);
printf("\n 1/%.2f = %.4f",a,result);
break;
}
case 11 :
{
printf("FACTORIAL");
printf("\n Enter the number whose favtorial is to be found: ");
scanf("%d",&x);
y=1;
for(i=1;i<=x;i++)
{
y=y*i;
if(x==0)
{
return(1);
}
}
printf("\n %d",y);
break;
}
case 12:
{
printf("EXPONENTIAL FUNCTION");
printf("\n Enter x: ");
scanf("%f",&a);
result=exp(a);
printf("e^%.2f=%.2f",a,result);
break;
}
case 13:
{
printf("NATURAL LOG");
printf("\n Enter the number whose log is to be found: ");
scanf("%f",&a);
result=log(a);
printf("log(%.2f)=%f",a,result);
break;
}
case 14:
{
printf("LOG TO BASE 10");
printf("\n Enter the number whose log is to be found: ");
scanf("%f",&a);
result=log10(a);
printf("log(%.2f)=%f",a,result);
break;
}
case 15:
{
printf("LOG To BASE a");
printf("\n Enter the base: ");
scanf("%f",&a);
printf("\n Enter the number whose log is to be found: ");
scanf("%f",&b);
result=log(b)/log(a);
printf("%.2f",result);
break;
}
case 16:
{
printf("COMBINATION");
printf("\n Enter n: ");
scanf("%d",&n);
z=1;
for(i=1;i<=n;i++)
{
z=z*i;
}
printf("\n Enter r: ");
scanf("%d",&u);
w=1;
for(i=1;i<=u;i++)
{
w=w*i;
}
v=1;
for(i=1;i<=(n-u);i++)
{
v=v*i;
}
f=z/(w*v);
printf("\n %d",f);
break;
}
case 17:
{
printf("\n Press 1 for matrix adfition");
printf("\n Press 2 for matrix subtruction");
printf("\n Press 3 for multiplication");
printf("\n Enter choice: ");
scanf("%d",&m);
switch(m)
{
case 1:
{
printf("Enter rows & columns of matrix A: ");
scanf("%d%d",&r1,&c1);
printf("Enter rows & columns of matrix B: ");
scanf("%d%d",&r2,&c2);
if((r1==r2)&&(c1==c2))
{
printf("Enter elements of 1st matrix: ");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&p[i][j]);
}
}
printf("Enter elements of 2nd matrix: ");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&q[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
r[i][j]=p[i][j]+q[i][j];
}
}
printf("Resultant Matrix is \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d \t",r[i][j]);
}
printf("\n");
}
}
else
{
printf("Matrix addition is not possible");
}
break;
}
case 2:
{
printf("Enter rows & columns of matrix A: ");
scanf("%d%d",&r1,&c1);
printf("Enter rows & columns of matrix B: ");
scanf("%d%d",&r2,&c2);
if((r1==r2)&&(c1==c2))
{
printf("Enter elements of 1st matrix: ");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&p[i][j]);
}
}
printf("Enter elements of 2nd matrix: ");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&q[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
r[i][j]=p[i][j]-q[i][j];
}
}
printf("Resultant Matrix is \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d \t",r[i][j]);
}
printf("\n");
}
}
else
{
printf("Matrix subtruction is not possible");
}
break;
}
case 3:
{
printf("Enter rows & columns of matrix A: ");
scanf("%d%d",&r1,&c1);
printf("Enter rows & columns of matrix B: ");
scanf("%d%d",&r2,&c2);
if(c1!=r2)
{
printf("Multiplication is not possible");
exit(0);
}
else
{
printf("Multiplication is possible");
}
printf("\n Enter elements of matrix A: ");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&p[i][j]);
}
}
printf("\n Enter elements of matrix B: ");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&q[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
for(k=0;k<r2;k++)
{
sum=sum+p[i][k]*q[k][j];
}
r[i][j]=sum;
sum=0;
}
}
printf("Product of matrix is \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d \t",r[i][j]);
}
printf("\n");
}
break;                     
}
}
break;
}
default :
{
printf("INVALID ENTRY");
}
}
}
else if(choice==3)
{
printf("\n Press 1 to convert kalvin to celcius ");
printf("\n Press 2 to convert kalvin to ferenhiet ");
printf("\n Press 3 to convert celcius to ferenhiet ");
printf("\n Press 4 to convert ferenhiet to celcius ");
printf("\n Press 5 to convert celcius to kalvin ");
printf("\n Press 6 to convert ferenhiet to kalvin ");
scanf("%d",&cnv);
switch(cnv)
{
case 1 :
{
printf("KAlVIN TO CELCIUS");
printf("\n Enter temperature in kalvin: ");
scanf("%f",&kal);
cel=kal-273.16;
printf("\n %.2fK=%.2f°C",kal,cel);
break;
}
case 2 :
{
printf("KALVIN TO FERENHIET");
printf("\n Enter temperature in kalvin: ");
scanf("%f",&kal);
fer=((kal-273.16)*9/5)+32;
printf("\n %.2fK=%.2f°F",kal,fer);
break;
}
case 3 : 
{
printf("CELCIUS TO FERENHIET");
printf("\n Enter temperature in °C: ");
scanf("%f",&cel);
fer=(cel*9/5)+32;
printf("\n %.2f°C=%.2f°F",cel,fer);
break;
}
case 4 :
{
printf("FERENHIET TO CELCIUS");
printf("\n Enter temperature in °F: ");
scanf("%f",&fer);
cel=(fer-32)*5/9;
printf("\n %.2f°C=%.2f°F",fer,cel);
break;
}    
case 5 :
{
printf("CELCIUS TO KALVIN");
printf("\n Enter temperature in °C: ");
scanf("%f",&cel);
kal=273.16+cel;
printf("\n %.2f°C=%.2fK",cel,kal);
break;
}
case 6 :
{
printf("FERENHIET TO KALVIN");
printf("\n Enter temperature in °F: ");
scanf("%f",&fer);
kal=273.16+(fer-32)*5/9;
printf("%.2f°F=%.2fK",fer,kal);
break;
}
default :
{
printf("INVALID ENTRY");
}
}
}
else if(choice==4)
{
printf("\n Press 1 for sine");
printf("\n Press 2 for cosine");
printf("\n Press 3 for tangent");
printf("\n Press 4 for cosec");
printf("\n Press 5 for sec");
printf("\n Press 6 for cot");
printf("\n Enter choice: ");
scanf("%d",&trigo);
switch(trigo)
{
case 1:
{
printf("Enter angle in degree: ");
scanf("%f",&a);
result=sin(a*M_PI/180);
printf("sin(%.2f°)=%.2f",a,result);
break;
}
case 2:
{
printf("Enter angle in degree: ");
scanf("%f",&a);
result=cos(a*M_PI/180);
printf("cos(%.2f°)=%.2f",a,result);
break;
}
case 3:
{
printf("Enter angle in degree: ");
scanf("%f",&a);
result=tan(a*M_PI/180);
printf("tan(%.2f°)=%.2f",a,result);
break;
}
case 4:
{
printf("Enter angle in degree: ");
scanf("%f",&a);
result=1/sin(a*M_PI/180);
printf("cosec(%.2f°)=%.2f",a,result);
break;
}
case 5:
{
printf("Enter angle in degree: ");
scanf("%f",&a);
result=1/cos(a*M_PI/180);
printf("sec(%.2f°)=%.2f",a,result);
break;
}
case 6:
{
printf("Enter angle in degree: ");
scanf("%f",&a);
result=1/tan(a*M_PI/180);
printf("cot(%.2f°)=%.2f",a,result);
break;
}
}
}
else if(choice==5)
{
int fib(int);
printf("FIBONACCI SERIES");
printf("\n Enter the limit for the series: ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
y=fib(i);
printf("%d\t",y);
}
}
else
{
exit(0);
}
getch();
return(0);
}
int fib(int c)
{
if(c==0)
{
return(0);
}
else if(c==1)
{
return(1);
}
else
{
return(fib(c-1)+fib(c-2));
}
}
