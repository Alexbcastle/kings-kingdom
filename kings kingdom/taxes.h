#pragma once

void Taxes()
{
    int userinput;
    std::cout << "Squire: Do you wish to do any changes my lord? \n";
    std::cout << "1. raise taxes 100% \n";
    std::cout << "2. raise taxes 50% \n";
    std::cout << "3. raise taxes 20% \n";
    std::cout << "4. keep taxes fair and the same \n";
    std::cout << "5. Lower taxes 20% \n";
    std::cout << "6. Lower taxes 50% \n";
    std::cout << "7. Lower taxes 100% \n";
    std::cout << "Please enter your response as a king: \n";
    std::cin >> userinput;

    switch (userinput)
    {
    case 1:
        std::cout << "Squire: Yes my lord, raising the taxes 100% should be causing some anger in the population though mylord. \n";
        reputation -= 100;
        std::cout << "Your reputation is: " << reputation << std::endl;
        break;
    case 2:
        std::cout << "Squire: Yes my lord, raising the taxes 50% should be causing some stress in the population though mylord. \n";
        reputation -= 50;
        std::cout << "Your reputation is: " << reputation << std::endl;
        break;
    case 3:
        std::cout << "Squire: Yes my lord, raising the taxes 20% should be causing mild reactions in the population mylord. \n";
        reputation -= 20;
        std::cout << "Your reputation is: " << reputation << std::endl;
        break;
    case 4:
        std::cout << "Squire: Yes my lord, Keeping the taxes the same should be fair and received with good reactions in the population mylord. \n";
        reputation -= 0;
        std::cout << "Your reputation is: " << reputation << std::endl;
        break;
    case 5:
        std::cout << "Squire: Yes my lord, lowering the taxes 20% should be fair and received with good reactions in the population mylord. \n";
        reputation += 20;
        std::cout << "Your reputation is: " << reputation << std::endl;
        break;
    case 6:
        std::cout << "Squire: Yes my lord, lowering the taxes 50% should be very happily received with good reactions in the population mylord. \n";
        reputation += 50;
        std::cout << "Your reputation is: " << reputation << std::endl;
        break;
    case 7:
        std::cout << "Squire: Yes my lord, lowering the taxes 100% should be causing questions but received with good reactions in the population mylord. \n";
        reputation += 100;
        std::cout << "Your reputation is: " << reputation << std::endl;
        break;

    }

}
