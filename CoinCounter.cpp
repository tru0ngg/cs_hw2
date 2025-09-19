#include <iostream>
#include <iomanip>
using namespace std;

int main(){
        int pennies, nickels, dimes, quarters;

        cout << "How many pennies, nickels, dimes, and quarters do you have?" << endl;
        cin >> pennies >> nickels >> dimes >> quarters;
        if (pennies < 0 || pennies > 100 || nickels < 0 || nickels > 100 || dimes < 0 || dimes > 100 || quarters < 0 || quarters > 100) {
                return 0;
        }
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
        if (dollars == 0 && cents == 1){
                cout << "In total you have 1 cent ($0.01)." << endl;
        } else if (dollars == 0 && cents != 1) {
                cout << "In total you have " << cents << " cents ($" << fixed << setprecision(2) << (total_cents / 100.0) << ")." << endl;
        } else if (dollars == 1 && cents == 1){
                cout << "In total you have 1 dollar and 1 cent ($1.01)." << endl;
        } else if (dollars == 1 && cents != 1){
                cout << "In total you have 1 dollar and " << cents << " cents ($"  << fixed << setprecision(2) << (total_cents / 100.0) << ")." << endl;
        }
        else {
                cout << "In total you have " << dollars << " dollars and " << cents << " cents ($" << fixed << setprecision(2) << (total_cents / 100.0) << ")." << endl;
        }
        return 0;
}
