#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int num, i=0, size;
	
	cout<<"Enter the size of your binary number >> ";
	cin >> size;
	
	do{
	cout << "Enter booolean values of 0's and 1's :";
	cin >> num;
	
	i++;
	
	while(num!=1 && num!=0){
	cout << "Invalid Input...";
	i=size;
	break;
	}
	
	}while (i < size);
	
	cout << "The decimal value for the binary number (ordered from left to right)";
	
	
	return 0;
	
}
