#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

main()
{
	//Turay� sayd�r bu �ekilde yapabiliriz.
	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	int yt;
	yt=rand()%2+1;
	while(1)
	{
	printf("Yaz� Tura atmak i�in ENTER bas�n...");
	getchar();
		if(yt==1)
		{
			printf("Yaz�");
		}
		else if(yt==2)
		{
			printf("Tura");
		}
		break;
	}
	getche();
}
