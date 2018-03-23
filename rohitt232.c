#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b;
 char c;
 float d;
 scanf("%d %d",&a,&b);
 scanf("%c",&c);
 d=0;
 switch(c)
 {
  case'%':
   d=a%b;
   break;
  case'/':
    d=a/b;
    break;
  default:
    printf("invalid");
 }
 printf("%f",d);
 getch();
 return 0;
}
