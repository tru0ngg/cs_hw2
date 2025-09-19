#include <iostream>
using namespace std;

int main(){
        int pennies;
        int nickels;
        int dimes;
        int quarters;

        cout << "How many pennies, nickels, dimes, and quarters do you have? " << endl;
        cin >> pennies >> nickels >> dimes >> quarters;
        cout << "You have ";
        cout << pennies << (pennies == 1 ? " penny" : " pennies") << ", ";
        cout << nickels << (nickels == 1 ? " nickel" : " nickels") << ", ";
        cout << dimes << (dimes == 1 ? " dime" : " dimes") << ", and ";
        cout << quarters << (quarters == 1 ? " quarter" : " quarters") << "." << endl;
        
        int total_cents = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25);
        int dollars = total_cents / 100;
        int cents = total_cents - (dollars * 100);
        float total = dollars + (cents / 100.0);
        
        if (dollars < 1){
                cout << "In total you have " << cents << " cents ($" << total << ")." << endl;
        } else if (dollars == 1 && cents == 0){
                cout << "In total you have " << dollars << " dollar and " << cents << " cents ($" << total << ".00)." << endl;
        }
        else if (cents == 0){
                cout << "In total you have " << dollars << " dollars and " << cents << " cents ($" << total << ".00)." << endl;
        }
        else if (dollars == 1){
                cout << "In total you have " << dollars << " dollar and " << cents << " cents ($" << total << ")." << endl;
        }
        else {
                cout << "In total you have " << dollars << " dollars and " << cents << " cents ($" << total << ")." << endl;
        }
        return 0;
}
