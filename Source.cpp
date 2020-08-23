#include<iostream>
#include"Array.h"
using namespace std;
int main() {
	int choice;
	int integer;
	int size;
	cout << "Enter the size of array: ";
	cin >> size;
	Array numbers(size);
	while (true) {
		cout << "\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout << "\t\t\t            ARRAYS MENU             \n";
		cout << "\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout << "\t\t\t             1. Insert              \n";
		cout << "\t\t\t             2. Print               \n";
		cout << "\t\t\t             3. Remove              \n";
		cout << "\t\t\t             4. Search              \n";
		cout << "\t\t\t             5. Sort                \n";
		cout << "\t\t\t             6. Update              \n";
		cout << "\t\t\t             7. EXIT                \n";
		cout << "\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		cout << "Enter your choice:";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Enter an integer you want to insert:";
			cin >> integer;
			numbers.insert(integer);
			break;
		case 2:
			numbers.print();
			break;
		case 3:
			int index;
			cout << "Enter an index you want to remove:";
			cin >> index;
			numbers.removeAt(index);
			break;
		case 4:
			cout << "Enter an integer you want to search:";
			cin >> integer;
			if (numbers.indexOf(integer) != -1)
				cout << "Found at index number " << numbers.indexOf(integer)<<endl;
			else
				cout << "Not found\n";
			break;
		case 5:
			numbers.sort();
			break;
		case 6:
			int newInteger;
			cout << "Enter an integer you want to update:";
			cin >> integer;
			cout << "Enter new value:";
			cin >> newInteger;
			numbers.update(integer, newInteger);
			break;
		case 7:
			exit(-1);
		default:
			cout << "Invalid Option\n";

		}
	}

	system("pause");
	return 0;
}

