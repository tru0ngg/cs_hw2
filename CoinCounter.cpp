
#include <iostream>
using namespace std;

int main(){
        int pennies, nickels, dimes, quarters;

        cout << "How many pennies, nickels, dimes, and quarters do you have? " << endl;
        cin >> pennies >> nickels >> dimes >> quarters;
        if (pennies == 1){
                cout << "You have 1 penny, ";
        }
        else {
                cout << "You have " << pennies << " pennies, ";
        }

        if (nickels == 1){
                cout << "1 nickel, ";
        } else {
                cout << nickels << " nickels, ";
        }

        if (dimes == 1){
                cout <<"1 dime, and ";
        }
        else {
                cout << dimes << " dimes, and ";
        }

        if (quarters == 1){
                cout <<"1 quarter. " << endl;
        }
        else {
                cout << quarters << " quarters." << endl;
        }
        int total_cents = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25);
        int dollars = total_cents / 100;
        int cents = total_cents % 100;
        string total = to_string(dollars) + "." + to_string(cents);
        if (dollars < 1 && cents == 1){
                cout << "In total you have " << cents << " cent ($" << total << ")." << endl;
        } else if (dollars < 1 && cents > 1) {
                cout << "In total you have " << cents << " cents ($" << total << ")." << endl;
        }
        else if (dollars == 1 && cents == 0){
                cout << "In total you have " << dollars << " dollar and " << cents << " cents ($" << total << ")." << endl;
        }
        else if (cents == 0){
                cout << "In total you have " << dollars << " dollars and " << cents << " cents ($" << total << ")." << endl;
        }
        else if (dollars == 1){
                cout << "In total you have " << dollars << " dollar and " << cents << " cents ($" << total << ")." << endl;
        }
        else {
                cout << "In total you have " << dollars << " dollars and " << cents << " cents ($" << total << ")." << endl;
        }
        return 0;
}
