/* 
MUHAMMAD AL-QARDHAWI BIN AZAHAR
2114045
SECTION 3
*/


#include <iostream>

using namespace std;

int guessNumber (int);

int main()
{
	int num, answer;
	char quit;
	
	do{
	cout << endl << "Select number between 1 -8. \n" << endl;
	
	num = 5;
	
	answer = guessNumber(num);
	
	cout << "Your number is " << answer << "."<< endl << endl;
	
	cout << "press any key to continue or n to quit ";
	cin >> quit;
	
	}while (quit != 'n' && quit != 'N');

return 0;
}

int guessNumber (int num)
{
	int i, answer;
	char guess;
	
	for (i=2 ; i >= 0 ; i--)
	{
		cout << "Is the number < " << num << "? (y/n) : " ;
		cin >> guess ;
	
		if (guess == 'y'){
			num -= i;
			answer = num -1;
		}
	
		else if (guess == 'n'){
			num += i;
			answer = num;
		}
	}
	return answer;
}

