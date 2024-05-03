#pragma once
#include "Stats.h"
#include "taxes.h"
void Banner(bool on = false)
{



    if (on == true)
    {
        
        std::cout << "Hit key `b` to turn on or off banner. Hit `m` for menu. Hit `T` for taxes. " << std::endl;

        std::cout << "Reputation: " << reputation << std::endl;
        std::cout << "Gold: " << Gold << std::endl;
        std::cout << "Total gold: " << TotalGold << std::endl;

        char ch;
        int flag = 1;
        int flag2 = 2;
        int flag3 = 3;


        while (flag) {
            if (GetKeyState(0x42) & 0x8000) {
                std::cout << "b key pressed" << std::endl;
                flag = 0;
                on = false;
            }
        }
        while (flag2) {
            if (GetKeyState(0x54) & 0x8000) {
                std::cout << "t key pressed" << std::endl;
                flag2 = 0;
                Taxes();
            }
        }


    }
    else if (on == false)
    {
        std::cout << "Banner is off." << std::endl; 
    }
}