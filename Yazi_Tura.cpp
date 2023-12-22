#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

main()
{
	//Turayý saydýr bu þekilde yapabiliriz.
	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	int yt;
	yt=rand()%2+1;
	while(1)
	{
	printf("Yazý Tura atmak için ENTER basýn...");
	getchar();
		if(yt==1)
		{
			printf("Yazý");
		}
		else if(yt==2)
		{
			printf("Tura");
		}
		break;
	}
	getche();
}
