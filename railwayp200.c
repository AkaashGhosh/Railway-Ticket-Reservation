#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


typedef struct{
        char name[50];
        int train_name;
        int num_of_seats;
        int train_num;

}pd;





void reservation(void);
void viewdetails(void);
void printtickets(char name[],int,int,float);
void specifictrain(int);
float charge(int,int);

int main()
{
        system("cls");
    printf("\t\t|         Train Ticket Reservation System                  |\n");
    printf("\t\t|                By Akash Ghosh                            |\n");
    printf("\t\t|                CSE-46-project200                         |\n");
    printf("\t\t-----------------------------------\n");
    printf("\t\t------------------press any key to continue-----------------\n");
    printf("\t\t------------------------------------------------------------\n");
    getch();
    system("cls");

    int menu_choice, choice_return;
    start:
    system("cls");
    printf("\n-------------------------------------------\n");
    printf("                      Train Reservation System       ");
    printf("\n---------------------------------------------\n");
    printf("\n1>> Reserve A Ticket");
    printf("\n---------------------------------------------\n");
    printf("\n2>> View All Available Train");
    printf("\n------------------------------------------------\n");
    printf("\n3>> Exit");
    printf("\n------------------------------------------------");
    printf("\n\n--->");
    scanf("%d",&menu_choice);
    switch(menu_choice)
    {
    case 1:
        reservation();
        break;
    case 2:
        viewdetails();
        printf("\n\nPress Any to go to Main Menu..");
        getch();
        break;
    case 3:
        return(0);
    default:
        printf("\n Invalid choice");
    }
    goto start;
    return(0);


}


void viewdetails(void)
{
    system("cls");
    printf("\nTrain.No\tTrain Name\tDestinations\t\tFare\t\tTime\n");
    printf("\n511\t\t Train A\tDhaka to Sylhet\t        Tk.300    \t6am");
    printf("\n512\t\t Train B\tDhaka to Cumilla\tTk.300       \t7am");
    printf("\n513\t\t Train C\tSylhet to Dhaka\t\tTk.300      \t3pm");
    printf("\n514\t\t Train D\tChottogram to Sylhet\tTk.300       \t9am");
    printf("\n515\t\t Train E\tDhaka to Rajshahi\t\Tk.300        \t2pm");


}

void reservation(void)
{
    char confirm;
    int i = 0;
    float charges;
    pd passdetails;
    system("cls");


    printf("\nEnter Your Name:> ");
    fflush(stdin);
    gets(passdetails.name);


    printf("\nEnter Number of seats:> ");
    scanf("%d",&passdetails.num_of_seats);
    printf("\n\n>>Press Enter To View Available Train<< ");
    getch();
    system("cls");
    viewdetails();
    printf("\n\nEnter train number:> ");
    start1:
    scanf("%d",&passdetails.train_num);
    if(passdetails.train_num>=511 && passdetails.train_num<=515)
    {

		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);
    }

    else
	{
		printf("\nInvalid bus Number! Enter again--> ");
		goto start1;
	}

	printf("\n\nConfirm Ticket (y/n):>");
	start:
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{
		printf("==================");
		printf("\n Reservation successful\n");
		printf("==================");
		printf("\nPress any key to go back to Main menu");
	}
	else
	{
		if(confirm=='n'){
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start;
		}
	}
    /*fclose(fp);*/
    getch();
}



float charge(int train_num,int num_of_seats)
{
    if (train_num==511)
	{
		return(300.0*num_of_seats);
	}
	if (train_num==512)
	{
		return(300.0*num_of_seats);
	}
	if (train_num==513)
	{
		return(300.0*num_of_seats);
	}
	if (train_num==514)
	{
		return(300.0*num_of_seats);
	}
	if (train_num==515)
	{
		return(300.0*num_of_seats);
	}
}


void printticket(char name[],int num_of_seats,int train_num,float charges)
{
	system("cls");
	printf("-------------------\n");
	printf("\tTICKET\n");
	printf("-------------------\n\n");
	printf("Name:\t\t\t%s",name);
	printf("\nNumber Of Seats:\t%d",num_of_seats);
	printf("\nTrain Number:\t\t%d",train_num);
	specificbus(train_num);
	printf("\nCharges:\t\t%.2f",charges);
}


void specificbus(int train_num)
{

	if (train_num==511)
	{
		printf("\nTrain:\t\t\tTrain A");
		printf("\nDestination:\t\tDhaka to Sylhet");
		printf("\nDeparture:\t\t6am ");
	}
	if (train_num==512)
	{
		printf("\nBus:\t\t\tTrain B");
		printf("\nDestination:\t\tDhaka to Cumilla");
		printf("\nDeparture:\t\t7am");
	}
	if (train_num==513)
	{
		printf("\nBus:\t\t\tTrain C");
		printf("\nDestination:\t\tSylhet to Dhaka");
		printf("\nDeparture:\t\t3pm");
	}
	if (train_num==514)
	{
		printf("\nTrain:\t\t\tTrain D");
		printf("\nDestination:\t\tChottogram to Sylhet");
		printf("\nDeparture:\t\t9am ");
	}
	if (train_num==515)
	{
		printf("\nTrain:\t\t\tTrain E");
		printf("\nDestination:\t\tDhaka to Rajshahi");
		printf("\nDeparture:\t\t2pm");
	}

}
