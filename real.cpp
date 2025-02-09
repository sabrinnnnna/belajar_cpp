#include <iostream>
using namespace std;

int main(){
int items = 50;
double cost_per_item = 9.993424242;
double total_cost = items * cost_per_item;
char currency = '$';

/*
To Do:
1. Print cost_per_item with precision like the value
2. Print total_cost with precision like the calculator
*/

// Print variables
cout << "Number of items: " << items << "\n";
cout << "Cost per item: " << cost_per_item << "" << currency << "\n";
cout << "Total cost = " << total_cost << "" << currency << "\n";
return 0;
}