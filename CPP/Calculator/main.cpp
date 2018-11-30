
#include <iostream>
#include <cstdlib> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
float addition(float num1, float num2)
{
    return num1 + num2;
}
float subtraction(float num1, float num2)
{
    return num1 - num2;
}
float multiplication(float num1, float num2)
{
    return num1 * num2;
}
float division(float num1, float num2)
{
    return num1 / num2;
} 

int main() 
{
    float num1;
    float num2;
    int choice;
    
    start:
    
    cout << "" << endl;
    cout << "What would you like to do? \n \n 1= Addition \n 2= Subtraction \n 3= Multiplication \n 4= Division \n 5= Exit \n" << endl;
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n" << endl;
    cout << "choice:     ";
    cin >> choice;
   
    if(choice==1)
   
    {
    cout << "" << endl;
    //Addition
    cout << "ADDITION. \n \nEnter the numbers you would like to add. \n \nNumber1:       ";
    cin >> num1;
    cout << "\n";
    cout << "Number2:       ";
    cin >> num2;
    cout << "\n";
    cout << "Answer =       " << addition(num1, num2) << endl;
    goto start;
    }

    else
   
    if(choice==2)
   
    {
    cout << "" << endl;
    //Subtraction
    cout << "SUBTRACTION. \n \nEnter the numbers you would like to subtract. \n \nNumber1:       ";
    cin >> num1;
    cout << "\n";
    cout << "Number2:       ";
    cin >> num2;
    cout << "\n";
    cout << "Answer =       " << subtraction(num1, num2) << endl;
    goto start;
    }
	    else
	    {
	        
	    if(choice==3)
	   
	    {
	    cout << "" << endl;
	    //Multiplication
	    cout << "MULTIPLICATION. \n \nEnter the numbers you would like to multiply. \n \nNumber1:       ";
	    cin >> num1;
	    cout << "\n";
	    cout << "Number2:       ";
	    cin >> num2;
	    cout << "\n";
	    cout << "Answer =       " << multiplication(num1, num2) << endl;
	    goto start;
	    }
		    else
		    {
		        
		    if(choice==4)
		   
		    {
		    cout << "" << endl;
		    //Division
		    cout << "DIVISION. \n \nEnter the numbers you would like to divide. \n \nNumber1:       ";
		    cin >> num1;
		    cout << "\n";
		    cout << "Number2:       ";
		    cin >> num2;
		    cout << "\n";
		    if(num2==0)
		    	{
		    		cout << "\nAnswer is undefined (0) not allowed\n";
		    		goto start;
				}
				else
				{
					cout << "Answer =       " << division(num1, num2) << endl;
		    		goto start;
				}
		    
			}
				else
				{
				if(choice==5)
				{
					exit(0);
				}
					else
					{
						cout << "You must select a number between 1 and 5. \n";
						goto start;
					}
					
				}
			}
		}
    return 0;
}


