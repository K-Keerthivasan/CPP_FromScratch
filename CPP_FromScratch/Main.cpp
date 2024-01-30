//The purpose of this rep is to create set up for entire logic in cpp and how to setup everything and exploring things in cpp
 //! 
#include <iostream>


//Some Global Variables
int globalInt = 10;

//Function Prototypes
void printHelloWorld();  
void intFunctionWParameter(int a, int b); 
int someFunction1();
void returnFunction(int value);
int sampleIntFunction();



//The Main Function
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

	intFunctionWParameter(10, 20); // Calling the parameters in the function

	int newinput;
	 
	std:: cin>> newinput;
	printf("The value of new input is %d \n", newinput);




	returnFunction(someFunction1()); //Calling the function inside the function with same data type

		return 0;
}


void printHelloWorld()
{
	std::cout << "Hello World" << '\n';
}


void intFunctionWParameter(int a, int b)
{
	std::cout << a << '\n';
	std::cout << b << '\n';
}

int someFunction1()
{
	std::cout << "This is some function 1" << '\n';
	int input;
	std::cin >> input;

	return input;
}

void returnFunction(int value)
{
	printf("This is the value of the int times 2  %d\n", value * 2);
}

int sampleIntFunction()
{

	int someVariable;

	someVariable = 10;

	std::cout << someVariable << '\n';

	someVariable = 20;

	std::cout << someVariable << '\n';

	std::cout << std::endl;

	return someVariable;
}
