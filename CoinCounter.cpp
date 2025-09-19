#include <iostream>
using namespace std;

int main(){
        int pennies;
        int nickels;
        int dimes;
        int quarters;

        cout << "How many pennies, nickels, dimes, and quarters do you have? " << endl;
        cin >> pennies >> nickles >> dimes >> quarters;
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
                cout <<"1 dime, ";
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
        int cents = total_cents - (dollars * 100);
        float total = dollars + (cents / 100.0);
        if (dollars < 1){
                cout << "In total you have " << cents << " cents ($" << total << ")." << endl;
        } else if (cents == 0){
                cout << "In total you have " << dollars << " dollars and " << cents << " cents ($" << total << ".00)." << endl;
        }
        else {
                cout << "In total you have " << dollars << " dollars and " << cents << " cents ($" << total << ")." << endl;
        }
        return 0;
}
