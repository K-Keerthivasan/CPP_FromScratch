//The purpose of this rep is to create set up for entire logic in cpp and how to setup everything and exploring things in cpp
 //! 
#include <iostream>

int globalInt = 10;


void printHelloWorld()
{
	std::cout<<"Hello World"<< '\n';
}

int sampleIntFunction()
{
	
	int someVariable;

	someVariable = 10;

	std::cout<<someVariable<<'\n';

	someVariable = 20;

	std::cout<<someVariable<<'\n';

	std::cout << std::endl;

	return someVariable;
}

int main()
{

	int someVariable = sampleIntFunction();

	printHelloWorld();

	std::cout << "----------------------------------------------------" << "\n";

	sampleIntFunction();

	std::cout << "----------------------------------------------------" << "\n";

	std::cout << "Global variable " << ::globalInt << "\n";
	std::cout << "Local variable "<< someVariable << "\n";
	std::cout << std::endl;

	int newinput;
	 
	std:: cin>> newinput;
	printf("The value of new input is %d", newinput);

		return 0;
}
