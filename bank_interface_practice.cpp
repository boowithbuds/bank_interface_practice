#include <iostream>

int main()
{

    int balance = 100, option;

    do
    {
        system("cls");
        int deposit, withdraw;
        std::cout << "#######BANK MENU#######\n";
        std::cout << "\nCURRENT BALANCE: " << balance << "$ \n";
        std::cout << "\nPlease choose an option:\n";
        std::cout << "\n1.- Deposit money:\n";
        std::cout << "\n2.- Get money:\n";
        std::cout << "\n3.- Exit\n";
        std::cout << "\nOption number: \n";
        std::cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            std::cout << "\nHow much money are you going to deposit?\n";
            std::cin >> deposit;
            balance += deposit;
            std::cout << "Money deposited successfully:\n";
            std::cout << "You have: " << balance << "$ in the bank\n";
            break;
        case 2:
            std::cout << "\nHow much money do you want to withdraw?\n";
            std::cin >> withdraw;

            if (withdraw <= balance)
            {
                balance -= withdraw;
                std::cout << "\nYou have: " << balance << "$ in the bank\n";
            }
            else
            {
                std::cout << "\nOPERATION NOT PERFORMED, not enough money!\n";
            }
            system("pause");

        default:
            break;
        }
    } while (option != 3);

    std::cout << "Bye\n";
    system("pause");
    return 0;
}