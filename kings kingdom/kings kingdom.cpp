// kings kingdom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "banner.h"
#include "taxes.h"


// Global variables above the int main

int userinput;
int sex = 0;
bool dialogue = false;
bool Newgame = false;
bool Gameon = true;
bool Menu = true;
int banner = true;



int main()
{
    while (Gameon == true)
    {
        
        if (Menu == true)
        {

            std::cout << "------------\n";
            std::cout << "------------\n";
            std::cout << "------------\n";
            std::cout << "Welcome to King`s kingdom ---\n";
            std::cout << "------------\n";
            std::cout << "------------\n";
            std::cout << "------------\n";
            std::cout << "------------\n";

            std::cout << "Please do full screen for optimal experience\n";
            std::cout << "------------\n";



            std::cout << "press 1 to continue\n";
            std::cout << "press 2 to see credits\n";
            std::cout << "press 3 to exit\n";
        }
        Banner(true);
            std::cin >> userinput;

            if (userinput == 3)
            {
                Menu = false;
                std::cout << "You have exited the game\n";
                return(0);
            }
            else if (userinput == 2)
            {
                Menu = false;
                SHORT keyState = GetKeyState(VK_SPACE);
                std::cout << "Design by Alexander Borge \n";
                std::cout << "story by Alexander Borge \n";
                std::cout << "music by Alexander Borge \n";
                std::cout << "sound by Alexander Borge \n";
                std::cout << "Press Enter to continue \n";
                system("pause");
                Menu = true;
               

            }
            else if (userinput == 1)
            {
                Menu = false;
                bool Newgame = true;
                std::cout << "You have Started a new game\n";
                std::cout << "Your gold is: \n";
                std::cout << Gold << std::endl;
                std::cout << "Your total gold is: \n";
                std::cout << TotalGold << std::endl;
                system("pause");

                // Set reputation to fair and good according to the standards in the game... 100 should be fair and part of good
                reputation = 100;
                
                std::cout << "Your kingdom is going well, you just started fresh a new month after spending all you \n";
                std::cout << "got on new upgrades... you await taxes and new income shortly... \n";
                system("pause");
                std::cout << "a squire enters your throne room: `My lord, the newest tax reports have just arrived. Your tax income from your kingdom is 100 000 gold and your people favours you as fair \n";
                system("pause");
                Taxes();


            }
    }




        if (dialogue = true)
        {
        }

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
