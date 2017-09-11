//w.a.p to demonstrate klc using switch case...

#include<stdio.h>
#include<conio.h>

void main()

{
int a,b,s;
clrscr();

printf("a : ");
scanf("%d",&a);

printf("b : ");
scanf("%d",&b);

printf("choose : ");
printf(" \n\n 1) addition \n\n 2)subtraction \n\n 3)multiplication \n\n 4)division \n\n");
scanf("%d",&s);

printf("\n\n");

switch(s)
	{
	case 1 : printf("ans = %d",a+b);
		 break;
	case 2 : printf("ans = %d",a-b);
		 break;
	case 3 : printf("ans = %d",a*b);
		 break;
	case 4 : printf("ans = %d",a/b);
		 break;
	default : printf("invalid choice");
		  break;
	}

getch();
}


