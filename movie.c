# include<stdio.h>
# include<Windows.h>

//Displaying available movies
void display()
{
    printf("#########################\n");
    printf("     CURRENT MOVIES      \n");
    printf("#########################\n");
    printf("1.Inception\n2.Pushpa\n3.Annabella\n4.Hentai\nEnter your choice => ");
}

void Inception()
{
    //SuperMario movie option 1
    int ticketVal;
    printf("Welcome to the Inception movie sir !!\n");
    printf("What ticket do you want ?\n1.Premium Ticket\n2.Normal Ticket\n");
    scanf("%d",&ticketVal);
    //Switching over ticket type
    switch(ticketVal)
    {
        case 1:
            printf("Have your tickets, Your total will be Rs. 450\n");
            break;
        case 2:
            printf("Have your tickets, Your total will be Rs. 250\n");
            break;
        default:
            printf("Get out. No tickets for you!\n");
    }
    
}

void Pushpa()
{
    //Movie 2 john wick
    int ticketVal;
    printf("Welcome to the Pushpa movie sir !!\n");
    printf("What ticket do you want ?\n1.Premium Ticket\n2.Normal Ticket\n");
    scanf("%d",&ticketVal);
    //again same thing
    switch(ticketVal)
    {
        case 1:
            printf("Have your tickets, Your total will be Rs. 550\n");
            break;
        case 2:
            printf("Have your tickets, Your total will be Rs. 450\n");
            break;
        default:
            printf("Get out. No tickets for you!\n");
    }
}

void Annabella()
{
    //Movie 3
    int ticketVal;
    printf("Welcome to the Annabella sir !!\n");
    printf("What ticket do you want ?\n1.Premium Ticket\n2.Normal Ticket\n");
    scanf("%d",&ticketVal);
    switch(ticketVal)
    {
        case 1:
            printf("Have your tickets, Your total will be Rs. 950\n");
            break;
        case 2:
            printf("Have your tickets, Your total will be Rs. 650\n");
            break;
        default:
            printf("Get out. No tickets for you!\n");
    }
}

void Hentai()
{
    //Movie 4
    int ticketVal;
    printf("Welcome to the Hentai movie sir !!\n");
    printf("What ticket do you want ?\n1.Premium Ticket\n2.Normal Ticket\n");
    scanf("%d",&ticketVal);
    switch(ticketVal)
    {
        case 1:
            printf("Have your tickets, Your total will be Rs. 350\n");
            break;
        case 2:
            printf("Have your tickets, Your total will be Rs. 150\n");
            break;
        default:
            printf("Get out. No tickets for you!\n");
    }
}


int main(int argc, char const *argv[])
{
    int userChoice;
    display();
    //Asking for users choice
    scanf("%d",&userChoice);
    switch(userChoice)
    {
        //Switching over given movie number
        case 1:
            Inception();
            break;
        case 2:
            Pushpa();
            break;
        case 3:
            Annabella();
            break;
        case 4:
            Hentai();
            break;
        //If number not available movie not available
        default:
            printf("Your desired movie isn't airing right now. Come back later!\n");
    }      
    printf("MOVIE STARTS.....\n");
    Sleep(6000);
    printf("MOVIE About to end...\n");
    Sleep(4000);
    printf("MOVIE HAS FINISHED!!!\nGOODBYE!!!\n");
    //Code ends
    return 0;
}
