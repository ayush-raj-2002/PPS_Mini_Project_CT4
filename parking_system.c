#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int menu();
void bus();
void car();
void bike_or_cycle();
void delete();
void status();
int nob=0,noc=0,noboc=0,amt=0,tcount=0;
void main()
{
    while(1)
    {
        system("cls");
        switch(menu())
        {
            case 1:
            bus();
            break;
            case 2:
            car();
            break;
            case 3:
            bike_or_cycle();
            break;
            case 4:
            status();
            break;
            case 5:
            delete();
            break;
            case 6:
            printf("Thank You");
            exit(0);
            default :
            printf("\nInvalid Choice");
        }
        getch();
    }
}
int menu()
{
    int ch;
    printf("enter 1 for Bus\n");
    printf("enter 2 for Car\n");
    printf("enter 3 for Bike or Cycle\n");
    printf("enter 4 to Show Status\n");
    printf("enter 5 to Delete Data\n");
    printf("enter 6 to EXIT\n");
    printf("\nENTER YOUR CHOICE : ");
    scanf("%d",&ch);
    return ch;
}
void status()
{
    printf("\nTotal no. of bus = %d",nob);
    printf("\nTotal no. of car = %d",noc);
    printf("\nTotal no. of bike or cycles = %d",noboc);
    printf("\nTotal no. of vehicles parked = %d",tcount);
    printf("\nTotal amount collected = %d",amt);
}
void bus()
{
    nob++;
    amt+=50;
    tcount++;
    printf("***Your entry was successful***\n");
}
void car()
{
    noc++;
    amt+=30;
    tcount++;
    printf("***Your entry was successful***\n");
}
void bike_or_cycle()
{
    noboc++;
    amt+=10;
    tcount++;
    printf("***Your entry was successful***\n");
}
void delete()
{
    nob=0;
    noc=0;
    noboc=0;
    amt=0;
    tcount=0;
}
