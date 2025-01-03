#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*To proceed to the main menu of this program enter the actual USSD code of Zamtel(*117#).*/

/*
The scope of these variables is made global because they are to be used everywhere within this program.
And avoid the declaration of the same variable again and again through out the whole program.
*/
int options;
/*To purchase the offer through mobile money use this PIN.*/
const int mobile_money_pin = 1234;

/*list of the function prototype of all the functions within this program.*/
int string_compare(void);
int main_menu(void);
int choice(void);
int payment_method(void);
int validation_func();
int mobile_money_auth(void);
int vibez(void);
int supa_cheza(void);
int ni_yathu(void);
int freedom(void);
int data_offers(void);
int balance(void);
int today_special(void);
int velocity_lite(void);
int buy_4_others(void);

int main()
{

     printf("\t\t\t\tDISCLAIMER! This program is made for education purposes.\n");

    /*calling the string compare function in the main function, to handle the validation of the USSD code*/
    string_compare();

    /*
    This function will only execute if the conditions of the string_compare function are met, else the program won't run.
    It is the starting point of the program, when the user selects an offer this function calls a particular function based on the offer selected
    by the user.
    */
    main_menu();

    return 0;
}

/*This function validates the USSD code entered by the user to the one required by the program.*/
int string_compare()
{

    char ussd0[6] = "*117#";
    char ussd1[6];
    int compare;

    printf("Enter USSD: ");
    scanf("%s", &ussd1);
    system("cls");

    compare = strcmp(ussd0, ussd1);

    if (compare == 0)
    {
        main_menu();
    }
    else
    {
        printf("Connection problem or invalid MMI code.");
        return 1;
    }

    return 0;
}

/*This function is to help the user choose whether to proceed to buy the offer/package.*/
int choice(void)
{
    printf("1)Yes\n");
    printf("2)No\n");

    scanf("%d", &options);
    system("cls");
    if (options == 1)
    {
        payment_method();
    }
    else if (options == 2)
    {
        printf("Subscription cancelled");
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}

/*This function handles the payment method eg mobile money or main account when purchasing the package.*/
int payment_method(void)
{
    printf("Please Select payment method\n");
    printf("1)Main account\n");
    printf("2)Mobile Money\n");

    scanf("%d", &options);
    system("cls");
    if (options == 1)
    {
        validation_func();
    }
    else if (options == 2)
    {
        mobile_money_auth();
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}

/*This function is evoked to display this message when a user purchases the package.*/
int validation_func()
{
    printf("You cannot buy the offer/package due to insufficient fund on your account\n");
    return 0;
}

/*This function validates the PIN entered by the user to that saved within the program.*/
int mobile_money_auth(void)
{

    printf("please input your Mobile Money PIN\n");
    scanf("%d", &options);
    system("cls");
    if (options == mobile_money_pin)
    {
        printf("\nYou cannot buy the offer/package due to insufficient fund on your account\n");
        return 0;
    }
    else if (options != mobile_money_pin)
    {
        printf("The username or PIN entered is wrong.\n");
        return 1;
    }

    return 0;
}

/*This function displays the program's main menu offers.*/
int main_menu()
{

    printf("The Best Offers In Town: \n");

    printf("1)Vibez\n");
    printf("2)Supa Cheza\n");
    printf("3)Ni Yathu\n");
    printf("4)All-net-Freedom\n");
    printf("5)Data Offers\n");
    printf("6)Balance\n");
    printf("7)today's special\n");
    printf("8)Velocity Lite\n");
    printf("9)Buy4Other\n");

    scanf("%d", &options);
    system("cls");
    if (options == 1)
    {
        vibez();
    }
    else if (options == 2)
    {
        supa_cheza();
    }
    else if (options == 3)
    {
        ni_yathu();
    }
    else if (options == 4)
    {
        freedom();
    }
    else if (options == 5)
    {
        data_offers();
    }
    else if (options == 6)
    {
        balance();
    }
    else if (options == 7)
    {
        today_special();
    }
    else if (options == 8)
    {
        velocity_lite();
    }
    else if (options == 9)
    {
        buy_4_others();
    }
    else
    {
        printf("invalid input");
        return 1;
    }

    return 0;
}

/*
Below are the functions that take over when the user selects an option from main_menu function.
They mimick the original Zamtel progam by evoking other functions within this program to handle tasks.
*/
int vibez()
{

    printf("1)K5-880MB-24Hours\n");
    printf("2)K15-2.5GB+WTFI-7Days\n");
    printf("3)K110-15GB+WTFI-30 Days\n");
    printf("4)K5-30Mins, 35sms, 120mb\n");
    printf("5)K10-65Mins, 80sms, 220mb\n");
    printf("Press 00 for main menu\n");

    scanf("%d", &options);
    system("cls");
    switch (options)
    {

    /*subscription plan number 1*/
    case 1:
        printf("Are you sure you want to subscribe to 880MB-24Hours for K5\n");
        choice();
        break;
    /*subscription plan number 2*/
    case 2:
        printf("Are you sure you want to subscribe to 2.5GB + WTFI-7Days for K15\n");
        choice();
        break;
    /*subscription plan number 3*/
    case 3:
        printf("Are you sure you want to subscribe to 15GB 30Days for K110\n");
        choice();
        break;
    /*subscription offer number 4*/
    case 4:
        printf("Are you sure you want to subscribe to 30MINS, 35SMS, 120MB for K5\n");
        choice();
        break;
        /*subscription offer number 5*/
    case 5:
        printf("Are you sure you want to subscribe to 65MINS, 80SMS, 220MB for K10\n");
        choice();
        break;
        /*back to main menu*/
    case 00:
        main_menu();
        break;
        /*If a typing error is encountered this meassage is diplayed*/
    default:
        printf("Invalid input");
        return 1;
    }
    return 0;
}

int supa_cheza()
{

    printf("Welcome to Supa Cheza:\n");
    printf("1.Supa Cheza Voice\n");
    printf("2.Supa Cheza data\n");

    scanf("%d", &options);
    system("cls");
    switch (options)
    {
    /*Supa-cheza-voice main menu*/
    case 1:
        printf("SUPA Cheza\n");
        printf("1)Daily\n");
        printf("2)Weekly\n");
        printf("3)Monthly\n");
        printf("4)Balance\n");
        printf("99)Main Menu\n");

        scanf("%d", &options);
        system("cls");
        /*The first if, else if statements contains the offers under supa-cheza-voice e.g Daily, Weekly etc.*/
        if (options == 1)
        {
            printf("1.Get 30 OnNet Mins for 24Hrs @ K1\n");
            printf("2.Get 26 OnNet Mins for 24Hrs @ K2\n");
            printf("3.Get 41 OnNet Mins for 24Hrs @ K3\n");
            printf("99)Main Menu\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1 || options == 2 || options == 3)
            {
                payment_method();
            }
            else if (options == 99)
            {
                supa_cheza();
            }
            else
            {
                system("cls");
                printf("Invalid input");
            }
        }
        else if (options == 2)
        {
            printf("1.Get 44 OnNet Mins for 7Days @ K5\n");
            printf("2.Get 90 OnNet Mins for 7Days @ K10\n");
            printf("99)Main Menu\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1 || options == 2)
            {
                payment_method();
            }
            else if (options == 99)
            {
                supa_cheza();
            }
            else
            {
                system("cls");
                printf("Invalid input");
            }
        }
        else if (options == 3)
        {
            printf("1.Get 1200 OnNet Mins for 30Days @ K100\n");
            printf("99)Main Menu\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1)
            {
                payment_method();
            }
            else if (options == 99)
            {
                supa_cheza();
            }
            else
            {
                system("cls");
                printf("Invalid input");
            }
        }
        else if (options == 4)
        {
            printf("Thank you for using Zamtel");
        }
        else if (options == 99)
        {
            supa_cheza();
        }
        else
        {
            system("cls");
            printf("Invalid input");
        }
        break;
    /*supa-cheza-data main menu*/
    case 2:
        system("cls");
        printf("SUPA Cheza\n");
        printf("1)Daily\n");
        printf("2)Weekly\n");
        printf("3)Monthly\n");
        printf("4)Deal of the Day\n");
        printf("5)Balance\n");
        printf("99)Main Menu\n");

        scanf("%d", &options);
        system("cls");
        /*The first if, else if statements contains the offers under supa-cheza-voice e.g Daily, Weekly etc.*/
        if (options == 1)
        {
            printf("1.Get 100MB Data for 24Hrs @ K1\n");
            printf("99)Main Menu\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1)
            {
                payment_method();
            }
            else if (options == 99)
            {
                supa_cheza();
            }
            else
            {
                system("cls");
                printf("Invalid input");
            }
        }
        else if (options == 2)
        {
            printf("1.Get 850MB Data for 7Days @ K5\n");
            printf("2.Get 2.5GB Data for 7Days @ K10\n");
            printf("3.Get 6.5GB Data for 7Days @ K25\n");
            printf("99)Main Menu\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1 || options == 2 || options == 3)
            {
                payment_method();
            }
            else if (options == 99)
            {
                supa_cheza();
            }
            else
            {
                system("cls");
                printf("Invalid input");
            }
        }
        else if (options == 3)
        {
            printf("1.Get 17GB Data for 30Days @ K100\n");
            printf("2.Get 30GB Data for 30Days @ K150\n");
            printf("99)Main Menu\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1 || options == 2)
            {
                payment_method();
            }
            else if (options == 99)
            {
                supa_cheza();
            }
            else
            {
                system("cls");
                printf("Invalid input");
            }
        }
        else if (options == 4)
        {
            printf("1.Get 6GB Data for 3Days @ K20\n");
            printf("2.Get 3.5GB Data for 3Days @ K10\n");
            printf("99)Main Menu\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1 || options == 2)
            {
                payment_method();
            }
            else if (options == 99)
            {
                supa_cheza();
            }
            else
            {
                system("cls");
                printf("Invalid input");
            }
        }
        else if (options == 5)
        {
            printf("Thank you for using Zamtel");
        }
        else if (options == 99)
        {
            supa_cheza();
        }
        else
        {
            system("cls");
            printf("Invalid input");
        }
        break;
    /*This condition is executed when the user enters an invalid input i.e a character out of range.*/
    default:
        system("cls");
        printf("Invalid input");
    }
    return 0;
}

 /*Ni Yathu main menu*/
int ni_yathu()
{

    printf("Choose option(Ni Yathu offers)\n");
    printf("1)Daily offers\n");
    printf("2)weekly offers\n");
    printf("3)Monthly offers\n");
    printf("4)Ni Yathu Data\n");
    printf("00)Main Menu\n");

    scanf("%d", &options);
    system("cls");
    switch (options)
    {
    case 1:
        printf("1)K2-13Mins, 120sms\n");
        printf("2)K5-35Mins, 250sms, 40mb\n");
        printf("3)K10-75Mins, 250sms, 30mb\n");
        printf("99)back\n");

        scanf("%d", &options);
        system("cls");
        if (options == 1)
        {
            printf("Are you sure you want to subscribe to 13mins, 120sms for K2\n");
            choice();
        }
        else if (options == 2)
        {
            printf("Are you sure you want to subscribe to 35mins, 250sms, 40mb for K5\n");
            choice();
        }
        else if (options == 3)
        {
            printf("Are you sure you want to subscribe to 75mins, 250sms, 30mb for K10\n");
            choice();
        }
        else if (options == 99)
        {
            ni_yathu();
        }
        else
        {
            printf("Invalid input");
        }
        break;
    case 2:
        printf("1)K5-35Mins, 120sms, 20mb\n");
        printf("2)K10-70Mins, 220sms, 80mb\n");
        printf("3)K20-150Mins, 300sms, 100mb\n");
        printf("4)K30-220Mins, 400sms, 150mb\n");
        printf("5)K50-350Mins, 800sms, 400mb\n");
        printf("99)back\n");

        scanf("%d", &options);
        system("cls");
        if (options == 1)
        {
            printf("Are you sure you want to subscribe to 35mins, 120sms, 20mb for K5\n");
            choice();
        }
        else if (options == 2)
        {
            printf("Are you sure you want to subscribe to 70mins, 220sms, 80mb for K10\n");
            choice();
        }
        else if (options == 3)
        {
            printf("Are you sure you want to subscribe to 150mins, 300sms, 100mb for K20\n");
            choice();
        }
        else if (options == 4)
        {
            printf("Are you sure you want to subscribe to 220mins, 400sms, 150mb for K30\n");
            choice();
        }
        else if (options == 5)
        {
            printf("Are you sure you want to subscribe to 350mins, 800sms, 400mb for K50\n");
            choice();
        }
        else if (options == 99)
        {
            ni_yathu();
        }
        else
        {
            printf("Invalid input");
        }
        break;
    case 3:
        printf("1)K50-350Mins, 500sms, 300mb\n");
        printf("2)K75-550Mins, 750sms, 700mb\n");
        printf("3)K100-850Mins, 1000sms, 1gb\n");
        printf("4)K150-1250Mins, 1000sms, 1.2gb\n");
        printf("99)back\n");

        scanf("%d", &options);
        system("cls");
        if (options == 1)
        {
            printf("Are you sure you want to subscribe to 350mins, 500sms, 300mb for K50\n");
            choice();
        }
        else if (options == 2)
        {
            printf("Are you sure you want to subscribe to 550mins, 750sms, 700mb for K75\n");
            choice();
        }
        else if (options == 3)
        {
            printf("Are you sure you want to subscribe to 850mins, 1000sms, 1gb for K100\n");
            choice();
        }
        else if (options == 4)
        {
            printf("Are you sure you want to subscribe to 1250mins, 1000sms, 1.2gb for K150\n");
            choice();
        }
        else if (options == 99)
        {
            ni_yathu();
        }
        else
        {
            printf("Invalid input");
        }
        break;
    case 4:
        printf("1)K5-1GB, 3Days\n");
        printf("2)K15-2GB, 7Days\n");
        printf("3)K20-5GB, 7Days\n");
        printf("4)K30-11GB, 7Days\n");
        printf("Press 00 for main menu\n");

        scanf("%d", &options);
        system("cls");
        if (options == 1)
        {
            printf("Are you sure you want to subscribe to 1GB, 3Days for K5\n");
            choice();
        }
        else if (options == 2)
        {
            printf("Are you sure you want to subscribe to 2GB, 7Days for K10\n");
            choice();
        }
        else if (options == 3)
        {
            printf("Are you sure you want to subscribe to 5GB, 7Days for K20\n");
            choice();
        }
        else if (options == 4)
        {
            printf("Are you sure you want to subscribe to 11GB, 7Days for K30\n");
            choice();
        }
        else if (options == 00)
        {
            ni_yathu();
        }
        else
        {
            printf("Invalid input");
        }
        break;
    case 00:
        main_menu();
        break;
    default:
        printf("Invalid input");
    }
    return 0;
}

/*freedom main menu*/
int freedom()
{

    printf("Choose option(All-net Freedom offers)\n");
    printf("1)Freedom offers\n");
    printf("2)All Network offers\n");
    printf("3)Buy4Other_Mins\n");
    printf("00)Main Menu\n");

    scanf("%d", &options);
    system("cls");
    switch (options)
    {
    case 1:
        printf("All Network Offers\n");
        printf("1)Daily offers\n");
        printf("2)weekly offers\n");
        printf("3)Monthly offers\n");
        printf("4)Freedom Data\n");
        printf("00)Back\n");

        scanf("%d", &options);
        system("cls");
        if (options == 1)
        {
            printf("1)K3-15mins, 15sms, 15mb\n");
            printf("2)K5-28mins, 30sms, 30mb\n");
            printf("99)back\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1)
            {
                printf("Are you sure you want to subscribe to 15mins, 15sms, 15mb for K3\n");
                choice();
            }
            else if (options == 2)
            {
                printf("Are you sure you want to subscribe to 28mins, 30sms, 30mb for K5\n");
                choice();
            }
            else if (options == 99)
            {
                freedom();
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if (options == 2)
        {
            printf("1)K3-20mins, 50sms, 50mb\n");
            printf("2)K5-55mins, 60sms, 60mb\n");
            printf("3)K15-100mins, 100sms, 100mb\n");
            printf("99)back\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1)
            {
                printf("Are you sure you want to subscribe to 15mins, 15sms, 15mb for K3\n");
                choice();
            }
            else if (options == 2)
            {
                printf("Are you sure you want to subscribe to 55mins, 60sms, 60mb for K5\n");
                choice();
            }
            else if (options == 3)
            {
                printf("Are you sure you want to subscribe to 100mins, 100sms, 100mb for K15\n");
                choice();
            }
            else if (options == 99)
            {
                freedom();
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if (options == 3)
        {
            printf("1)K50-200mins, 100sms, 100mb\n");
            printf("2)K100-450mins, 150sms, 150mb\n");
            printf("3)K200-500mins, 200sms, 15gb\n");
            printf("99)back\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1)
            {
                printf("Are you sure you want to subscribe to 200mins, 100sms, 100mb for K50\n");
                choice();
            }
            else if (options == 2)
            {
                printf("Are you sure you want to subscribe to 450mins, 150sms, 150mb for K100\n");
                choice();
            }
            else if (options == 3)
            {
                printf("Are you sure you want to subscribe to 500mins, 200sms, 15gb for K200\n");
                choice();
            }
            else if (options == 99)
            {
                freedom();
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if (options == 4)
        {
            printf("1)K5-1GB, 3Days\n");
            printf("2)K15-2GB, 7Days\n");
            printf("3)K25-5GB, 7Days\n");
            printf("99)back\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1)
            {
                printf("Are you sure you want to subscribe to 1GB, 3Days for K5\n");
                choice();
            }
            else if (options == 2)
            {
                printf("Are you sure you want to subscribe to 2GB, 7Days for K15\n");
                choice();
            }
            else if (options == 3)
            {
                printf("Are you sure you want to subscribe to 5GB, 7Days for K25\n");
                choice();
            }
            else if (options == 99)
            {
                freedom();
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if (options == 00)
        {
            freedom();
        }
        else
        {
            printf("Invalid input");
        }
        break;
    case 2:
        printf("All Network Offers\n");
        printf("1)Daily offers\n");
        printf("2)weekly offers\n");
        printf("3)Monthly offers\n");
        printf("00)Back\n");

        scanf("%d", &options);
        system("cls");
        if (options == 1)
        {
            printf("1)K3-15mins, 15sms, 15mb\n");
            printf("2)K5-25mins, 100sms, 15mb\n");
            printf("3)K10-50mins, 100sms, 20mb\n");
            printf("99)back\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1)
            {
                printf("Are you sure you want to subscribe to 15mins, 15sms, 15mb for K3\n");
                choice();
            }
            else if (options == 2)
            {
                printf("Are you sure you want to subscribe to 25mins, 100sms, 15mb for K5\n");
                choice();
            }
            else if (options == 2)
            {
                printf("Are you sure you want to subscribe to 50mins, 100sms, 20mb for K10\n");
                choice();
            }
            else if (options == 99)
            {
                freedom();
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if (options == 2)
        {
            printf("1)K5-17mins, 50sms, 25mb\n");
            printf("2)K10-35mins, 100sms, 50mb\n");
            printf("3)K20-85mins, 200sms, 200mb\n");
            printf("4)K30-140mins, 200sms, 250mb\n");
            printf("99)back\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1)
            {
                printf("Are you sure you want to subscribe to 17mins, 50sms, 25mb for K5\n");
                choice();
            }
            else if (options == 2)
            {
                printf("Are you sure you want to subscribe to 35mins, 100sms, 50mb for K10\n");
                choice();
            }
            else if (options == 3)
            {
                printf("Are you sure you want to subscribe to 85mins, 200sms, 200mb for K20\n");
                choice();
            }
            else if (options == 4)
            {
                printf("Are you sure you want to subscribe to 140mins, 200sms, 200mb for K30\n");
                choice();
            }
            else if (options == 99)
            {
                freedom();
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if (options == 3)
        {
            printf("1)K50-200mins, 250sms, 150mb\n");
            printf("2)K100-460mins, 500sms, 200mb\n");
            printf("3)K150-800mins, 500sms, 250mb\n");
            printf("4)K200-1020mins, 500sms, 300mb\n");
            printf("99)back\n");

            scanf("%d", &options);
            system("cls");
            if (options == 1)
            {
                printf("Are you sure you want to subscribe to 200mins, 250sms, 150mb for K50\n");
                choice();
            }
            else if (options == 2)
            {
                printf("Are you sure you want to subscribe to 460mins, 500sms, 200mb for K100\n");
                choice();
            }
            else if (options == 3)
            {
                printf("Are you sure you want to subscribe to 800mins, 500sms, 250mb for K150\n");
                choice();
            }
            else if (options == 4)
            {
                printf("Are you sure you want to subscribe to 1020mins, 500sms, 300mb for K200\n");
                choice();
            }
            else if (options == 99)
            {
                freedom();
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if (options == 00)
        {
            freedom();
        }
        else
        {
            printf("Invalid input");
        }
        break;
    case 3:
        printf("Your are not eligible for this service!\n");
        break;
    case 00:
        main_menu();
    default:
        printf("Invalid input");
    }
    return 0;
}

/*Data offers main menu*/
int data_offers()
{
    printf("The Best Offers in Town:\n");
    printf("1.SupaCheza Data\n");
    printf("2.Mobile Data\n");
    printf("3.Velocity\n");
    printf("4.ZamtelHome\n");
    printf("5.Buy4Other\n");
    printf("6.Balance\n");
    printf("7.Other Bundles\n");

    scanf("%d", &options);
    system("cls");
    switch (options)
    {
    case 1:
        supa_cheza();
        break;
    case 2:
        printf("You are not eligible for this offer!");
        break;
    case 3:
        printf("You are not eligible for this offer!");
        break;
    case 4:
        printf("You are not eligible for this offer!");
        break;
    case 5:
        printf("You are not eligible for this offer!");
        break;
    case 6:
        balance();
        break;
    default:
        printf("Invalid input");
    }

    return 0;
}

/*Balance check function main menu*/
int balance()
{

    printf("Please select\n");
    printf("1)Check balance\n");
    printf("2)Specify Account\n");

    scanf("%d", &options);
    system("cls");
    switch (options)
    {
    case 1:
        printf("Zamtel Message\n");
        printf("Your balance is K0.00002. Get Greedom of choice, call all networks at the same rate dial *117# and select option 3 NOW!");
    case 2:
        printf("You are not eligible for this service!");
        return 1;
    }
    return 0;
}

/*Today special main menu*/
int today_special()
{

    printf("1)K5-1GB, 3 Days\n");
    printf("2)K10-55 Mins, 60sms, 90mb\n");
    printf("3)K15-2GB, 7 Days\n");
    printf("4)K25-5GB, 7 Days\n");
    printf("5)K10-5GB Night Bundles\n");
    printf("6)K20-12GB 3 Night Bundles\n");
    printf("Press 00 for main menu\n");

    scanf("%d", &options);
    switch (options)
    {
    case 1:
        system("cls");
        printf("Are you sure you want to subscribe to 1GB, 3Days for K5\n");
        choice();
        break;
    case 2:
        system("cls");
        printf("Are you sure you want to subscribe to 55Mins, 60sms, 90mb for K10\n");
        choice();
        break;
    case 3:
        system("cls");
        printf("Are you sure you want to subscribe to 2GB, 7Days for K15\n");
        choice();
        break;
    case 4:
        system("cls");
        printf("Are you sure you want to subscribe to 5GB, 3Days for K5\n");
        choice();
        break;
    case 5:
        system("cls");
        printf("Are you sure you want to subscribe to 5GB, Valid to use (00:01AM to 04:59AM) for K10\n");
        choice();
        break;
    case 6:
        system("cls");
        printf("Are you sure you want to subscribe to 12GB, Valid to use (00:01AM to 04:59AM) for K20\n");
        choice();
        break;
    case 00:
        system("cls");
        main_menu();
        break;
    default:
        printf("Invalid input");
    }
    return 0;
}

/*Velocity lite main menu*/
int velocity_lite()
{
    printf("This package is not available in your area!");
    return 0;
}

/*Buy for others main menu function.*/
int buy_4_others()
{
    printf("Your are not eligible for this service!");
    return 0;
}
