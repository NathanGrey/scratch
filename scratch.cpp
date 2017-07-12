#include <iostream> 
using namespace std;
// Main program
int main ()
{
	// Declaration of integers
	char name;
	int numSiblings = 0, counter = 1, input; 
	bool exit; // Exits the program
	// Program loops until the exit conditonal is met
	do
	{
	cout << "How many brothers and sisters do you have? " << endl;
	cin >> input;
	// This while loop makes the program only accept integer input
      while(1)
      {
       if(cin.fail())
        {
          cin.clear();
          cin.ignore();
          cout << "Invalid input. Enter the number of siblings." << endl; 
          cin >> input;
         }
       if(!cin.fail())
       break;
       }
       	// If the input is a negative integer this prints
		 if (input < 0)
		 {
		 	cout << "How could that be? " << endl; 
		 	exit = true; // Exits the program
		 }
		 // If the input is than 0 this prints
		 else if (input == 0)
		 {
		 	cout << "Oh, you were an only child! " << endl;
		 	exit = true; // Exits the program
         }   
         // If the input is less than or equal to 3 this prints
		 else if (input <= 3 && input > 0)
		 {
		 	cout << "Sounds like a nice size family " << endl;
		 	do 
		 	    {
		 	        counter++;
		 	        numSiblings++;
		 		    cout << "What's the name of your #" << numSiblings << " sibling?" << endl;
		 		    cin >> name;
		 	    }   while (counter <= input);
		 	        {
		 	            exit = true; // Exits the program
		 	        }
		 }	
		 		
		 // If the input is greater than or equal to 4 this prints
		 if (input >= 4)
		 {
		 	cout << "A big family! " << endl;
		 	  do 
		 	    {
		 	        counter++;
		 	        numSiblings++;
		 		    cout << "What's the name of your #" << numSiblings << " sibling?" << endl;
		 		    cin >> name;
		 	    }   while (counter <= input);
		 	        {
		 	            exit = true;
		 	        }
		 }
	}     	 
		 
	while(!exit); // Closes the program
	
		 return 0; 
}
