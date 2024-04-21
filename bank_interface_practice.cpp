#include <iostream>

int main()
{

    int balance = 100, option;

    do
    {
        system("cls");//CLI screen cleaner
        int deposit, withdraw;//variables
        std::cout << "#######BANK MENU#######\n";//bank menu
        std::cout << "\nCURRENT BALANCE: " << balance << "$ \n";
        std::cout << "\nPlease choose an option:\n";
        std::cout << "\n1.- Deposit money:\n";
        std::cout << "\n2.- Get money:\n";
        std::cout << "\n3.- Exit\n";
        std::cout << "\nOption number: \n";
        std::cin >> option;
        system("cls");

        switch (option)// It will evaluate the value of the option variable
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

            if (withdraw <= balance)// If you want to withdraw less or the same amount you have in balance
            {
                balance -= withdraw;// Subtracting the amount to be withdrawn from the balance
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
