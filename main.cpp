#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

string item1;
int itemQuantity;
bool isMember;
double subtotal;
double subtotal2;

string foodName1;
double unitPrice1;


string foodName2;
double unitPrice2;

string foodName3;
double unitPrice3;

foodName1= "Coffee";
foodName2= "Milk";
foodName3= "Sugar";


unitPrice1 = 2.50;
unitPrice2 = 3.00; 
unitPrice3 = 1.50;


cout << "Welcome to our Coffee Shop! Here are our menu items:" << endl;

cout << foodName1 << " - $" << unitPrice1 << fixed << setprecision(2) << endl;
cout << foodName2 << " - $" << unitPrice2 << fixed << setprecision(2) << endl;
cout << foodName3 << " - $" << unitPrice3 << fixed << setprecision(2) << endl;







cout << "Enter the name of the food item: ";
cin >> item1;
cout << "Enter the quantity of the food item: ";
cin >> itemQuantity;
cout << "Are you a member? (1 for yes, 0 for no): ";
cin >> isMember;


if (item1 == foodName1)
 subtotal = unitPrice1 * itemQuantity;

else if (item1 == foodName2)
 subtotal = unitPrice2 * itemQuantity;

else if (item1 == foodName3)
 subtotal = unitPrice3 * itemQuantity;

else
 cout << "Invalid food item." << endl;



 if(isMember)
 {
    subtotal2 = subtotal *= 0.8; // Apply 20% discount
 }

 if(isMember) {
cout << "Your total is: $" << fixed << setprecision(2) << subtotal2 << endl;
 }
 else {
    cout << "Your total is: $" << fixed << setprecision(2) << subtotal << endl;
 }

}