// My Name
// Week 8 Demo
#include <iostream>
using namespace std;
struct Day {
    double amount;
    int transaction;
};
void showDay() ;
void showAmounts(double arr[], int size);
void showAmounts(Day arr[], int size);

int main() {
    const int MAX_SIZE = 10;
    int numDays = 7;
    double total = 0;
    
    double amounts[MAX_SIZE] = { 1200, 1800, 900,
    1500, 800, 1100, 1300 };
    
    cout << "Welcome to Store Sales Data Analysis!" << endl;
    //cout << "Day 1 sales: " << amounts[0] << endl;
    //cout << "Day 2 sales: " << amounts[1] << endl;
    /*
    showDay();
    showDay();
    */

   // cout << "Array memory: ~" << sizeof(amounts) << " bytes" << endl;
    double max = amounts[0];
    int transactions[MAX_SIZE] = { 50, 75, 40, 60, 30,
45, 55 };
    for (int i = 0; i < numDays; i++) {
        cout << "Day " << i + 1 << ": $" <<
            amounts[i] << ", " << transactions[i] <<
            " transactions" << endl;
        total += amounts[i];
        
        if (amounts[i] > max) max = amounts[i];
    }
    cout << "Total sales: $" << total << endl;
    cout << "Average sales: $" << total / numDays <<
        endl;
    cout << "Highest sales: $" << max << endl;
    /*
    for (double val : amounts) {
        cout << "$ " << val << " ";
    }
    cout << endl;
    */
    
    cout << "Sales via function: ";
    //showAmounts(amounts, numDays);



    Day sales[MAX_SIZE] = { {1200,50}, {1800,75},
        {900,40}, {1500,60}, {800,30}, {1100,45},
        {1300,55} };
    cout << "Day 2 sales: $" << sales[1].amount << endl;

    return 0;
}

void showDay() {
    static int dayNum = 1; // Persists
    cout << "Showing day " << dayNum << endl;
    dayNum++;
}

void showAmounts(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "$" << arr[i] << " ";
    }
}

void showAmounts(Day arr[], int size) {
     for (int i = 0; i < size; i++) {
         cout << "$" << arr[i].amount << " ";
     }
    cout << endl;
}
