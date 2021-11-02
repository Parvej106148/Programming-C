#include<stdio.h>

int main()

{

  int a,b,res;
  char c;

  printf ("Enter any one operator :\n");
  scanf("%c", &c);
  printf ("\n Enter two numbers \n");
  scanf ("\n %d \n %d",&a, &b);
  switch(c)
  {
    case '+': res=a+b;
    printf("\n The plus sum is : %d",res);
    break;

    case '-': res=a-b;
    printf("\n The minus sum is : %d",res);
    break;

    case '*': res=a*b;
    printf("\n The into sum is : %d",res);
    break;

    case '/': res=a/b;
    printf("\n The devided sum is : %d",res);
    break;

    default: printf ("\n Invalid entry");
  }

  return 0;
}



