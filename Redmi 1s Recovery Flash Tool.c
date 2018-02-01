#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include<stdlib.h>

void SetColor(int ForgC)

{

     WORD wColor;

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

     CONSOLE_SCREEN_BUFFER_INFO csbi;

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))

     {

          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);

          SetConsoleTextAttribute(hStdOut, wColor);

     }

     return;

}

int main()
{

   int count;
     HANDLE hConsole;
     hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    printf("\t \t*******************************************\n\n");
     system("COLOR 0B");
    printf("\t\t   WELCOME TO REDMI 1S RECOVERY FLASH TOOL \n\n");
    printf("\t \t*******************************************\n\n");
    Sleep(2*1000);


    SetConsoleTextAttribute(hConsole, 7);
    printf("** Make Sure you've installed ADB/Fastboot & Phone's Drivers properly **\n\n** Enable USB Debugging on your phone. \n  You can do so from Settings > Developer Options.\n\n** (If Developer Options option doesn't appear, go to Settings > About Phone and tap the Build Number field 7 times.)\n\n");

    Sleep(2*1000);

    SetConsoleTextAttribute(hConsole, 23);
    printf("----------------------------------------------------------\n\n");
    Sleep(2*1000);

    SetConsoleTextAttribute(hConsole, 12);
    printf("~~NOW CONNECT YOUR PHONE TO PC VIA USB CABLE~~\n  | Press Enter if connected |\n\n");
    getch();
    Sleep(2*1000);
    SetConsoleTextAttribute(hConsole, 42);
    system("adb devices");
    SetConsoleTextAttribute(hConsole, 31);
    printf("~~  Now a message will appear on you phone : ALLOW USB DEBUGGING ?  ~~\n");
    Sleep(1000);
    printf(" \t CHECK TICK BOX { Allow always from this computer } \n");
    Sleep(2*1000);
    printf(" \t { PRESS OK } \n\n");
    Sleep(3*1000);
    printf("  | Press Enter if Done |\n\n");
    getch();
    Sleep(1000);
    SetConsoleTextAttribute(hConsole, 23);
    printf("----------------------------------------------------------\n\n");
    Sleep(1000);
    SetConsoleTextAttribute(hConsole, 14);
    printf("~~NOW YOUR PHONE WiLL REBOOT TO FASTBOOT MODE~~\n | Press Enter to Continue |\n\n");
    getch();
    system("adb reboot bootloader");
    printf("  > Now your phone is rebooting into Fastboot Mode!\n\n");
    Sleep(3*1000);
    printf("  > Press -ENTER- if it successfully reboots to Fastboot Mode\n\n");
    getch();

    Sleep(1000);




    SetConsoleTextAttribute(hConsole, 23);
    printf("----------------------------------------------------------\n\n");


    int fore=10;
    SetColor(fore);
    printf("List of Recoveries available for Flashing :\n");
    Sleep(1000);


    SetColor(fore);
    printf("\n 1. Stock\n 2. TWRP\n 3. CWM\n 4. Philz Touch\n\n");


    SetConsoleTextAttribute(hConsole, 23);
    printf("----------------------------------------------------------\n\n");

    Sleep(1000);

    int chosenno;
    SetConsoleTextAttribute(hConsole, 30);
    printf("TYPE THE RECOVERY NO {1/2/3/4} & PRESS ENTER TO FLASH IT !\n\n Here :");
    scanf("%d",&chosenno);
    Sleep(1000);
    printf("\n [[ You have chosen : %d ]]\n\n",chosenno);
    Sleep(1000);

    if(chosenno==1)
    {
        SetConsoleTextAttribute(hConsole, 29);
        Sleep(1000);
        printf("[[ You have chosen 'Stock' Recovery for Flashing ]]\n\n");
        Sleep(1000);
        printf(" | Press Enter to Continue |\n\n");
        getch();
        Sleep(1000);
        SetConsoleTextAttribute(hConsole, 42);
        printf(" < Now STOCK Recovery is being flashed > :)\n");
        system("fastboot flash recovery stock.img");
        Sleep(10000);
        SetConsoleTextAttribute(hConsole, 23);
    printf("====================================\n\n");
        SetConsoleTextAttribute(hConsole, 31);
        printf(" || SUCCESSFULLY FLASHED STOCK RECOVERY ||\n");
        SetConsoleTextAttribute(hConsole, 23);
    printf("====================================\n\n");
    }

    else if(chosenno==2)
    {
        SetConsoleTextAttribute(hConsole, 29);
        Sleep(1000);
        printf("[[ You have chosen 'TWRP' Recovery for Flashing ]]\n\n");
        Sleep(1000);
        printf("| Press Enter to Continue |\n\n");
        getch();
        Sleep(1000);
        SetConsoleTextAttribute(hConsole, 42);
        printf("< Now TWRP Recovery is being flashed >:)\n");
        system("fastboot flash recovery twrp.img");
        Sleep(10000);
        SetConsoleTextAttribute(hConsole, 23);
    printf("====================================\n\n");
        SetConsoleTextAttribute(hConsole, 31);
        printf(" || SUCCESSFULLY FLASHED TWRP RECOVERY ||\n");
        SetConsoleTextAttribute(hConsole, 23);
    printf("====================================\n\n");
    }
    else if(chosenno==3)
    {
        SetConsoleTextAttribute(hConsole, 29);
        printf("[[ You have chosen 'CWM' Recovery for Flashing ]]\n\n");
        printf("| Press Enter to Continue |\n\n");
        getch();
        Sleep(1000);
        SetConsoleTextAttribute(hConsole, 42);
        printf("< Now CWM Recovery is being flashed > :)\n");
        system("fastboot flash recovery cwm.img");
        Sleep(10000);
        SetConsoleTextAttribute(hConsole, 23);
    printf("====================================\n\n");
        SetConsoleTextAttribute(hConsole, 31);
        printf(" || SUCCESSFULLY FLASHED CWM RECOVERY ||\n");
        SetConsoleTextAttribute(hConsole, 23);
    printf("====================================\n\n");
    }
    else if(chosenno==4)
    {
        SetConsoleTextAttribute(hConsole, 29);
        printf("[[ You have chosen 'Philz Touch' Recovery for Flashing ]]\n\n");
        printf("|Press Enter to Continue |\n\n");
        getch();
        Sleep(1000);
        SetConsoleTextAttribute(hConsole, 42);
        printf("< Now Philz Touch Recovery is being flashed >:)\n");
        system("fastboot flash recovery philztouch.img");
        Sleep(10000);
        SetConsoleTextAttribute(hConsole, 23);
    printf("====================================\n\n");
        SetConsoleTextAttribute(hConsole, 31);
        printf(" || SUCCESSFULLY FLASHED PHILZ TOUCH RECOVERY ||\n");
        SetConsoleTextAttribute(hConsole, 23);
    printf("====================================\n\n");
    }
    else
    {
        printf("!!You have chosen wrong Number !! Good Luck Next-Time !!");
        Sleep(3000);
        exit(0);
    }


   SetConsoleTextAttribute(hConsole, 23);
    printf("----------------------------------------------------------\n\n");

    SetColor(fore);
    printf("NOW YOU CAN REBOOT TO EITHER :\n");
    Sleep(1000);

    SetColor(fore);
    printf("\n 1. SYSTEM\n 2. RECOVERY \n\n");

   SetConsoleTextAttribute(hConsole, 23);
    printf("----------------------------------------------------------\n\n");

    int chosennoreb;
    SetConsoleTextAttribute(hConsole, 30);
    printf("TYPE THE NO. {1/2} & PRESS ENTER TO REBOOT !\n\n Here : ");
    scanf("%d",&chosennoreb);
    Sleep(1000);
    printf("\n [[ You have chosen : %d ]]\n\n",chosennoreb);
    Sleep(1000);

    if(chosennoreb==1)
    {
        SetConsoleTextAttribute(hConsole, 29);
        printf("[[ You have chosen to Reboot to SYSTEM ]]\n\n");
        printf("|Press Enter to Continue |\n\n");
        getch();
        Sleep(1000);
        SetConsoleTextAttribute(hConsole, 42);
        printf("< Now Reebooting to SYSTEM >:)\n");
        system("adb reboot");
        Sleep(10000);
        SetConsoleTextAttribute(hConsole, 23);
    printf("====================================\n\n");
        SetConsoleTextAttribute(hConsole, 29);
        printf(" | Press Enter if it successfully Reboots to System |\n");
        getch();
        SetConsoleTextAttribute(hConsole, 31);
        printf(" || SUCCESSFULLY REBOOTED TO SYSTEM ||\n");
        SetConsoleTextAttribute(hConsole, 23);
    printf("====================================\n\n");

    }

    else if(chosennoreb==2)
    {
     SetConsoleTextAttribute(hConsole, 29);
        printf("[[ You have chosen to Reboot to RECOVERY ]]\n\n");
        printf("|Press Enter to Continue |\n\n");
        getch();
        Sleep(1000);
        SetConsoleTextAttribute(hConsole, 42);
        printf("< Now Reebooting to RECOVERY >:)\n");
        if(chosenno==1)
        {
            system("fastboot boot stock.img");
        }
        else if(chosenno==2)
        {
            system("fastboot boot twrp.img");
        }
        else if(chosenno==3)
        {
            system("fastboot boot cwm.img");
        }
        else if(chosenno==2)
        {
            system("fastboot boot philztouch.img");
        }
        else
        {
            printf("K bra.");
        }
        Sleep(10000);
        SetConsoleTextAttribute(hConsole, 23);
    printf("====================================\n\n");
        SetConsoleTextAttribute(hConsole, 29);
        printf(" | Press Enter if it successfully Reboots to Recovery |\n");
        getch();
        SetConsoleTextAttribute(hConsole, 31);
        printf(" || SUCCESSFULLY REBOOTED TO RECOVERY ||\n");
        SetConsoleTextAttribute(hConsole, 23);
    printf("====================================\n\n");
    }

   SetConsoleTextAttribute(hConsole, 12);
    printf("~~NOW YOU CAN DISCONNECT YOUR PHONE FROM PC~~\n\n\n\n");

   SetConsoleTextAttribute(hConsole, 15);
   printf("\t \t   *******************************************\t \t\t\n\n");
    printf("\t\t              THANKS FOR USING \t \t\t \t \t \n\n");
    printf("\t\t           facebook.com/GunikthegEEk \t \t\t \t \n\n");
    printf("\t \t   *******************************************\t \t\t\n\n");


    getch();
    Sleep(1000);




}
