#include <iostream>
#include <string>

using namespace std;

const double GBP_GENERAL = 0.8729;
const double GBP_BUY = 0.8600;
const double GBP_SELL = 0.9220;

const double USD_GENERAL = 1.1793;
const double USD_BUY = 1.1460;
const double USD_SELL = 1.2340;

const double INR_GENERAL = 104.6918;
const double INR_BUY = 101.3862;
const double INR_SELL = 107.8546;

int main() {
    int choice;
    while (true) {
        cout << "\n1. Compare currency\n";
        cout << "2. Sell currency\n";
        cout << "3. Buy currency\n";
        cout << "4. Exit\n";
        cin >> choice;

        if (choice == 4) {
            break;
        }
    }


    return 0;
}

void mainMenu() {
    int choice;


    switch (choice) {
        case 1: {
            break;
        }

        case 2: {
            break;
        }

        case 3: {
            break;
        }

        case 4: {
            break;
        }

    }

}