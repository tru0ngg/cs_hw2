#include <iostream>
#include <iomanip>

int main() {
    int pennies, nickels, dimes, quarters;

    std::cout << "How many pennies, nickels, dimes, and quarters do you have?" << std::endl;
    std::cin >> pennies >> nickels >> dimes >> quarters;

    double total_value = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);
    int total_cents = static_cast<int>(total_value * 100 + 0.5); // Add 0.5 for proper rounding

    int dollars = total_cents / 100;
    int cents = total_cents % 100;

    std::cout << "You have ";
    std::cout << pennies << (pennies == 1 ? " penny" : " pennies") << ", ";
    std::cout << nickels << (nickels == 1 ? " nickel" : " nickels") << ", ";
    std::cout << dimes << (dimes == 1 ? " dime" : " dimes") << ", and ";
    std::cout << quarters << (quarters == 1 ? " quarter" : " quarters") << "." << std::endl;

    std::cout << "In total you have ";

    if (total_value < 1.0) {
        std::cout << cents << " cents." << std::endl;
    } else {
        std::cout << dollars << (dollars == 1 ? " dollar" : " dollars") << " and ";
        std::cout << cents << " cents." << std::endl;
    }

    return 0;
}
