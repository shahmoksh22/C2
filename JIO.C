#include<stdio.h>
#include<conio.h>

void main()
{
int a;
clrscr();
printf("Welcome to Jio\n");
printf("For English Press 1, For Gujarati Press 2 : ");
scanf("%d",&a);
if(a!=1 && a!=2)
			{printf("Enter a valid input: ");
			scanf("%d",&a);

			}
clrscr();
switch (a)
{
 case 1:
	printf("Press 1 for Jio Sim Information,\nPress 2 for Jio FiberConnection,\nPress 3 for Jio FI,\nPress 4 for Jio Airfiber\n");
	scanf("%d",&a);
	if(a!=1 && a!=2 && a!=3 && a!=4)
			{printf("Enter a valid input: ");
			scanf("%d",&a);
			}
	clrscr();
	switch(a)
	{
		case 1:
			printf("For Call Related Query press 1\n");
			printf("For Data Related Query press 2\n");
			printf("For Sim Activation press 3\n");
			scanf("%d",&a);
			if(a!=1 && a!=2 && a!=3)
			{printf("Enter a valid input: ");
			scanf("%d",&a);
			}
			clrscr();
				switch(a)
					{
					case 1:
						printf("Your Call is Transfer to Next available Executive");
						break;
					case 2:
						printf("Your Call is Transfer to Next available Executive");
						break;
					case 3:
						printf("Your Sim is Activated\nThanks for Trusting Jio");
						break;
						default:
						printf("Invalid Input");
						break;
					}
			break;
	case 2:
	printf("For Call Related Query press 1\n");
	printf("For Data Related Query press 2\n");
	printf("For wire Broken Problem press 3\n");
	scanf("%d",&a);
	if(a!=1 && a!=2 && a!=3)
			{printf("Enter a valid input: ");
			scanf("%d",&a);
			}
	clrscr();
	switch(a)
		{
		case 1:
			printf("Your Call is Transfer to Next available Executive");
			break;
		case 2:
			printf("Your Call is Transfer to Next available Executive");
			break;
		case 3:
			printf("Your Call is Transfer to Next available Executive");
			break;
		default:
			printf("Invalid Input");
			break;
		}
	break;
	case 3:
		printf("For Call Related Query press 1\n");
			printf("For Data Related Query press 2\n");
			printf("For Sim Activation press 3\n");
			scanf("%d",&a);
			clrscr();
				switch(a)
					{
					case 1:
						printf("Your Call is Transfer to Next available Executive");
						break;
					case 2:
						printf("Your Call is Transfer to Next available Executive");
						break;
					case 3:
						printf("Your Sim is Activated\nThanks for Trusting Jio");
						break;
						default:
			printf("Invalid Input");
			break;
					}
			break;
	 default: printf("Invalid input");
 break;
	case 4:
	printf("For Call Related Query press 1\n");
	printf("For Data Related Query press 2\n");
	printf("For wire Broken Problem press 3\n");
	scanf("%d",&a);
	if(a!=1 && a!=2 && a!=3)
			{printf("Enter a valid input: ");
			scanf("%d",&a);
			}
	clrscr();
	switch(a)
		{
		case 1:
			printf("Your Call is Transfer to Next available Executive");
			break;
		case 2:
			printf("Your Call is Transfer to Next available Executive");
			break;
		case 3:
			printf("Your Call is Transfer to Next available Executive");
			break;
		default:
			printf("Invalid Input");
			break;
		}
	break;
 }
 break;
 case 2:
	printf("Jio Sim Ni Maheti Medava mate 1 dabavo,\nJio Fiber Ni Maheti Medava mate 2 dabavo,\nJio Fi Ni Maheti Medava mate 3 dabavo,\nJio Airfiber Ni Maheti Medava mate 4 dabavo");

	scanf("%d",&a);
	if(a!=1 && a!=2 && a!=3 && a!=4)
			{printf("Enter a valid input: ");
			scanf("%d",&a);
			}
	clrscr();
	switch(a)
	{
		case 1:
			printf("Call karva ma kai problem aavto hoi to 1 dabavo\n");
			printf("Data use karva ma kai problem aavto hoi to 2 dabavo\n");
			printf("Navu Sim Card Chalu Karava mate 3 dabavo\n");
			scanf("%d",&a);
			if(a!=1 && a!=2 && a!=3)
			{printf("Enter a valid input: ");
			scanf("%d",&a);
			}
			clrscr();
				switch(a)
					{
					case 1:
						printf("Tamaro Call aamara upnidhi ne transfer thai rahyo che");
						break;
					case 2:
						printf("Tamaro Call aamara upnidhi ne transfer thai rahyo che");
						break;
					case 3:
						printf("Tamaru Sim Chalu Thai Gayu che\nJio Ne Select Karva aapno aabhar");
						break;
					}
			break;
	case 2:
	printf("Call karva ma kai problem aavto hoi to 1 dabavo\n");
	printf("Data use karva ma kai problem aavto hoi to 2 dabavo\n");
	printf("Tamara Fiber no wire cut thava case ma 3 dabavo\n");
	scanf("%d",&a);
	if(a!=1 && a!=2 && a!=3)
			{printf("Enter a valid input: ");
			scanf("%d",&a);
			}
	clrscr();
	switch(a)
		{
		case 1:
			printf("Tamaro Call aamara upnidhi ne transfer thai rahyo che");
			break;
		case 2:
			printf("Tamaro Call aamara upnidhi ne transfer thai rahyo che");
			break;
		case 3:
			printf("Tamaro Call aamara upnidhi ne transfer thai rahyo che");
			break;
		default:
			printf("Invalid Input");
			break;
		}
	break;
	case 3:
		printf("Call karva ma kai problem aavto hoi to 1 dabavo\n");
			printf("Data use karva ma kai problem aavto hoi to 2 dabavo\n");
			printf("Navu Sim Card Chalu Karava mate 3 dabavo\n");
			scanf("%d",&a);
			if(a!=1 && a!=2 && a!=3)
			{printf("Enter a valid input: ");
			scanf("%d",&a);
			}
			clrscr();
				switch(a)
					{
					case 1:
						printf("Tamaro Call aamara upnidhi ne transfer thai rahyo che");
						break;
					case 2:
						printf("Tamaro Call aamara upnidhi ne transfer thai rahyo che");
						break;
					case 3:
						printf("Tamaru Sim Chalu Thai Gayu che\nJio Ne Select Karva aapno aabhar");
						break;
					}
			break;
	 default: printf("Invalid input");
 break;
	case 4:
	printf("Call karva ma kai problem aavto hoi to 1 dabavo\n");
	printf("Data use karva ma kai problem aavto hoi to 2 dabavo\n");
	printf("Tamara Fiber no wire cut thava case ma 3 dabavo\n");
	scanf("%d",&a);
	if(a!=1 && a!=2 && a!=3)
			{printf("Enter a valid input: ");
			scanf("%d",&a);
			}
	clrscr();
	switch(a)
		{
		case 1:
			printf("Tamaro Call aamara upnidhi ne transfer thai rahyo che");
			break;
		case 2:
			printf("Tamaro Call aamara upnidhi ne transfer thai rahyo che");
			break;
		case 3:
			printf("Tamaro Call aamara upnidhi ne transfer thai rahyo che");
			break;
		default:
			printf("Invalid Input");
			break;
		}
	break;
      }
}

getch();
}

