#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Dice 
{
	private:
		int dice;
		int numRolls;
	public:
		Dice(); // constructor
	    ~Dice(); // deconstructor
		int roll(); // memeber function
		void display();
		void reset();
}; 