#include <iostream> 

using namespace std;

int main ()
{
	char name;
	int numSiblings = 0, input;
	bool exit;

	do{
	
		cout << "How many brothers and sisters do you have? " << endl;
		cin >> input;

		 if (input < 0)
		 {
		 	cout << "How could that be? " << endl; 
		 }
		 else if (input == 0)
		 {
		 	cout << "Oh, you were an only child! " << endl;
        }   
		 else if (input <= 3 && input > 0)
		 {
		 	cout << "Sounds like a nice size family " << endl;
		 	
		 	if (numSiblings <= input)
		 	{   
		 	    do
		 	    {
		 	        numSiblings++;
		 	        cout << "Whats the name of your #" << numSiblings << " sibling?" << endl;
		 		    cin >> name;
		 	    } while (numSiblings <= input);
		 	    
		 	}	
		 		
		 
		  if (input >= 4)
		 {
		 	cout << "A big family! " << endl;
		 	if (numSiblings >= input);
		 	{   do 
		 	    {
		 	        numSiblings++;
		 		    cout << "What's the name of your #" << numSiblings << " sibling?" << endl;
		 		    cin >> name;
		 	    }   while (numSiblings >= input);
		 	     	 
		 
	while(!exit);
	
		 return 0;
}
