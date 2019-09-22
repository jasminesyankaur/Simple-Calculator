#include <iostream> 
using namespace std; 

enum options {SUM = 1, MEAN = 2, MINIMUM = 3, MAXIMUM = 4, EXIT = 5};					//Declaring an enum variable for user to either compoute the sum, mean, min, max or exit

int main () 
{ 
	int choice;											//Declaring an int to store the users answer to what option in the menu they would like to use
	float num1, num, num2, num3, num4, num5, num6;							//Declaring floating numbers to store users entries 
	float min;											//Declaring a float in order to store the min number 								
	float max;											//Declaring a float to store the max number
	const float N=6; 										//Declaring a constant = 6 because their are 6 numbers 
	int i;												//Declaring an int i in order to use the for loop  
	options yourChoice;										//Using enum to create a new type called yourChoice to store users answer 
	float answer;											//Declaring a float to store the final answer after performing computation 

	do 												//Using a do-while loop to reprint menu 
	{	


	 cout << "+-----------------------------------------------------+|" << endl;
         cout << "|      Computer Science and Engineering                |" << endl;
         cout << "|        CSCE 1030 - Computer Science I                |" << endl;			//name , email, euid, class and dept. 
         cout << "|  Jasmine Kaur     jk0573    jasminekaur@my.unt.edu   |" << endl;
         cout << "|+----------------------------------------------------+|" << endl;



	cout << "+----------------------------------------------+" << endl;
	cout <<	"+******************* M E N U ******************+" << endl;
	cout << "| 1. Compute sum of 6 floating-point numbers   |" << endl; 
	cout <<	"| 2. Compute mean of 6 floating-point numbers  |" << endl;
	cout <<	"| 3. Compute min of 6 floating-point numbers   |" << endl;				//Printing menu for user to pick what they would like to do 
	cout <<	"| 4. Compute max of 6 floating-point numbers   |" << endl; 
	cout <<	"| 5. Exit                                      |" << endl;
	cout << "+**********************************************+" << endl;

	cin >> choice; 											//Storing users answer in choice 

	yourChoice = static_cast<options>(choice);							//using static cast to use my enum as the controlling expression for switch function 



	switch (yourChoice) 										//using switch function to evaluate users input 
	{
	case SUM: 											//Case sum 
		cout << "Enter number 1: ";
		cin >> num1;
		cout << "Enter number 2: ";
		cin >> num2;
		cout << "Enter number 3: ";								//asking for and storing users answer to get values for the 6 numbers 
		cin >> num3;
		cout << "Enter number 4: ";
		cin >> num4;
		cout << "Enter number 5: ";
		cin >> num5;
		cout << "Enter number 6: ";
		cin >> num6;

		answer = num1 + num2 + num3 + num4 + num5 +  num6; 					//computing the addition and storing in asnwer 

		cout << "The sum of the 6 numbers is: " << answer << endl;				//outputting users final answer 
		break; 
	case MEAN:											//Case mean 
		cout << "Enter number 1: ";
                cin >> num1;
                cout << "Enter number 2: ";
                cin >> num2;
                cout << "Enter number 3: ";								//asking for and storing users answer for the 6 numbers 
                cin >> num3;
                cout << "Enter number 4: ";
                cin >> num4;
                cout << "Enter number 5: ";
                cin >> num5;
                cout << "Enter number 6: ";
                cin >> num6;
		 
		answer =((num1 + num2 + num3 + num4 + num5 + num6)/(6));				//computing the average and storing in answer 

		cout << "The mean of the 6 numbers is: " << answer << endl; 				//outputting users answer 
		break;
	case MINIMUM:											//Case minimum 
		cout << "Enter number: ";
                cin >> num;										//Asing user for number and storing the number 
		min = num;										//storing that number as the current minimum 
		
		for(i=1; i < 6; i++)									//using a for loop to determine minimum number 
		{
                cout << "Enter number: ";								//asking user for the rest of the numbers and storing them 
                cin >> num;
			if (num < min)									//if the new number is less than the inital it will replace it and become the new minimum
			{
				min = num;
			}
		}
		cout << "The minimum number of the 6 is: " << min << endl; 				//outputting the minimum number 
		break;
	case MAXIMUM:											//Case maximum 
		cout << "Enter number: ";			
		cin >> num;										//asking for and storing user's input 
		max = num;										//storing the number as the current max 

		for (i = 1; i < 6; i++)									//using a for loop to determine maximum number 
		{
		cout << "Enter number: ";								//asking for and storing the rest of the numbers 
		cin >> num;

			if (num > max)									//if the new number is greater than the previous entry it will be stored as the new max
			{
				max = num;
			}
		}
		cout << "The maximum number of the 6 is: " << max << endl; 				//outputting the max number 
		break;
	case EXIT:											//Case exit 
		cout << "Thank you for using this program! Have a great day!" << endl; 			//if user enters 5 they will exit the program 
		break;

	default:
		cout << "You have entered an invalid option, please try again." << endl; 		//if user enters a number other than 1-5 then they will be asked to enter a new number 
	}
	} while (yourChoice != 5);									//if the user enters 5 it will allow them to exit the program 
return 0; 
}
