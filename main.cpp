#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

//variables
const double GBP_GENERAL = 0.8729;
const double GBP_BUY = 0.8600;
const double GBP_SELL = 0.9220;

const double USD_GENERAL = 1.1793;
const double USD_BUY = 1.1460;
const double USD_SELL = 1.2340;

const double INR_GENERAL = 104.6918;
const double INR_BUY = 101.3862;
const double INR_SELL = 107.8546;


//functions
void mainMenu(int choice);
int currencyOptions();
int getNumber();
void compareCurrency();
void buyCurrency();
void sellCurrency();
double getPositiveDouble();



int main() {
    int choice;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "\n1. Compare currency\n";
        cout << "2. Buy currency\n";
        cout << "3. Sell currency\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        choice = getNumber();
        mainMenu(choice);
        if (choice == 4) {
            break;
        }
    }


    return 0;
}

void mainMenu(int choice) {


    switch (choice) {
        case 1: {
            compareCurrency();
            break;
        }

        case 2: {
            buyCurrency();
            break;
        }

        case 3: {
            break;
        }

        case 4: {
            return;
        }

        default:
            cout << "\nInvalid option.\n";

    }

}

int currencyOptions() {
    int choice;

    while (true) {
        cout << "\nSelect currency\n";
        cout << "1. GBP\n";
        cout << "2. USD\n";
        cout << "3. INR\n";
        cout << "Choice: ";
        choice = getNumber();

        if (choice < 1 || choice > 3) {
            cout << "\nInvalid option.\n";
        }
        else {
            break;
        }
    }
    return choice;
}

void compareCurrency() {

    switch (currencyOptions()) {
        case 1: {
            cout << "\n1 EUR = " << GBP_GENERAL<< " GBP\n";
            cout << "1 GBP = " << 1 / GBP_GENERAL << " EUR\n";
            break;
        }
        case 2: {
            cout << "\n1 EUR = " << USD_GENERAL<< " USD\n";
            cout << "1 USD = " << 1 / USD_GENERAL << " EUR\n";
            break;
        }
        case 3: {
            cout << "\n1 EUR = " << INR_GENERAL << " INR\n";
            cout << "1 INR = " << 1 / INR_GENERAL << " EUR\n";
            break;
        }
    }
}

void buyCurrency() {
    int choice = currencyOptions();
    double amount;

    cout << "\nWrite the amount of EUR: ";
    amount = getPositiveDouble();

    switch (choice) {
        case 1: {
            cout << "\n" << amount << " EUR = " << amount * GBP_BUY << " GBP\n";
            break;
        }
        case 2: {
            cout << "\n" << amount <<" EUR = " << amount * USD_BUY << " USD\n";
            break;
        }
        case 3: {
            cout << "\n" << amount <<" EUR = " << amount * INR_BUY << " INR\n";
            break;
        }
    }
}

void sellCurrency() {

}

int getNumber() {
    int number;

    while (!(cin >> number)) {
        cout << "\nPlease enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return number;
}

double getPositiveDouble() {
    double number;

    while (!(cin >> number) || number < 0) {
        cout << "\nPlease enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return number;
}

