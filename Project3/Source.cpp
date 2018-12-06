#include <stdio.h>
#include <iostream>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int sh;
	int flag;
	flag = 0;
	printf("Старт");
	printf("Your choise: 1)for kids\n, 2)I don`t know\n, 3)interesting\n");
	scanf_s("%d", &sh);
	switch (sh)
	{
	case 1:
		 {
		  printf("Begin with Scrath, then Python\n");
		 }
	case 2: 
	     { 
		  printf("Begin with Python\n");
	     }
	case 3:
	    {
		 printf("intetresting\n");
		 printf("Do you have idea for million?\n");
		 printf("1)Nope, only wanna begin\n 2)Yes\n");
		 if (flag == 1)
		 {
			 printf("I like learning");
		 }
	}    if (flag == 2)
	      {
		   printf()
 	     }
	default:
		break;
	}



	system("pause");
}

