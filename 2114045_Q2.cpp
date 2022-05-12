#include <iostream>

using namespace std;

int getHouseCategory ();
int main()
{
	int category, total, i=1, j=5, choice;
	int semi_detached = 4, terraced = 5;

	
	while (total > 0){
		category = getHouseCategory();
			
		if (category == 1){
			if (semi_detached==0){
				cout << "\n\nSemi-Detached House is sold out, Terraced house?" << endl;
				cout << "\n\n1. Yes 2. No  Your choice ";
				cin >> choice;
				if(choice == 1){
					category = 2;			
				}
		
				else if (choice == 2){
					cout << "\n\nNew house project development will be started early next year.\n\n";		
				}
				else 
					cout << "Invalid choice";
				}
				
				while (semi_detached > 0){
					cout << endl << "Semi-Detached House. House number: " << i << endl;
					semi_detached--;
					i++;
					break;
				}	
			}	
			
	
	if (category == 2){
		if (terraced == 0 ){
			cout << "\n\nSemi-Detached House is sold out, Terraced house?" << endl;
			cout << "\n\n1. Yes 2. No  Your choice ";
			cin >> choice;
			
			if(choice == 1){
				category = 1;
			}
			
			else if (choice == 2){
				cout << "\n\nNew house project development will be started early next year.\n\n";
			}
			else 
				cout << "Invalid choice";
			}
				
		while(terraced > 0 ){
			cout << endl << "Terraced House. House number: " << j << endl;
			terraced--;
			j++;
			break;
		}
	}



	
	total = semi_detached + terraced;

	}
	
	cout << "\n\nThe house is now sold out." ;
	
return 0;
}

int getHouseCategory ()
{	
	int category;
	do {
		cout << endl << "Please enter 1 for Semi-Detached house " << endl;
		cout << "Please enter 2 for Terraced house" << endl;
		cout << "House category:";
		cin >> category;
		
	}while (category != 1 && category != 2);
	
	return category;
}

