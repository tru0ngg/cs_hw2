#include <iostream>
using namespace std;

int main(){
        int current_max = 0;
        int second_max = 0;
        int count = 0;
        int input;

        while(cin >> input){
                if(input == 0){
                        count++;
                        break;
                }
                count++;
                if (input > current_max){
                        second_max = current_max;
                        current_max = input;
                }
                else if (input > second_max){
                        second_max = input;
                }
        }
        if (count < 2){
                cout << "Max: undefined " << endl;
                cout << "2nd Max: undefined " << endl;
        } else {
                cout << "Max: " << current_max << endl;
                if (second_max == 0){
                        cout << "2nd Max: undefined" << endl;
                } else {
                        cout << "2nd Max: " << second_max << endl;
                }
        }
        return 0;
}
