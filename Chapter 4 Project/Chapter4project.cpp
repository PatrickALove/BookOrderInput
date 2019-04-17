//This is my original work
//This program will be used to get information about a book order
//This will include title, ISBN, Author, Price, and quantity.
#include <iostream>
#include <iomanip>    //header file needed to use stream manipulators
#include <string>    //header file needed to use string objects
using namespace std;

int main() {
	string author; // this is assigning author as a string variable
	string title;
	string ISBN; // assigning the ISBN variable.
	double price; // variable assignment. Used a double so decimals are allowed.
	//The rest of these are variable assignments for various needed variables.
	int quantity;
	double subt;
	double tax;
	int fee;
	double total;
	char genre;

	//Start of the program asking for information from the user.
	cout << "Please enter the Author: " << endl; // The first prompt the user will see.
	getline(cin, author); //getting the info from Chapter 3 page 118 we can use the getline to get the user input and put it into the variable author.
	cout << "Title:" << endl;
	getline(cin, title); //same getline method is used here. This allows for strings to be assigned easily.
	cout << "ISBN:" << endl;
	cin >> ISBN;
	cout << "Price:" << endl;
	cin >> price;
	cout << "Quantity:" << endl;
	cin >> quantity;
	cout << "Is the book Fiction or Non-Fiction? Please enter [F] or [N]" << endl;
	cin >> genre;
	//cout << "Subtotal:" << endl;
	//cin >> subtotal;
	//cout << "Tax:" <<endl;
	//cout << "Fees:" << endl;
	//cout << "Total:" << endl;
	//cin >> total;
	//Here I am going to preform the calculations needed
	if (genre == 'F')
	{
		cout << "Fiction" << endl;
	}
	if (genre == 'N')
	{
		cout << "Non-ficiton" << endl;
	}
	else cout << "You have entered a non-valid character" << endl;
	
	subt = price * quantity;
	tax = subt * .07;
	if (quantity > 5)
	{
		fee = (quantity - 5) * 2;
	}
	else fee = 0;
	
	total = subt + tax + fee;
	cout << "_____________________________________" << endl;
	cout << setprecision(2) << fixed;
	cout << "Invoice" << endl << right << author
		<< endl << title << endl << "ISBN: " << setw(31) << ISBN << endl << "Price: " << right << setw(30) << price << endl << "Quantity: " << setw(27) << quantity
		<< endl << "Subtotal: " << right << setw(27) << subt << endl << "Tax: " << right << setw(32) << tax
		<< endl << "Fees: " << right << setw(31) << fee << endl << "Total: " << right << setw(30) << total;
	cout << endl << "_____________________________________" << endl;
	system("pause");
	return 0;
}