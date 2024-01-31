#include "cBasics.h"


cBasics::cBasics()
{
	printHelloWorld();

	std::cout << "----------------------------------------------------" << "\n";

	sampleIntFunction();

	std::cout << "----------------------------------------------------" << "\n";


	intFunctionWParameter(10, 20); // Calling the parameters in the function

	std::cout << "----------------------------------------------------" << "\n";

	returnFunction(someFunction1()); //Calling the function inside the function with same data type

	macroTest();

	std::cout << "----------------------------------------------------" << "\n";

	booleanTest();
}

cBasics::~cBasics()
{

}

 

void cBasics::printHelloWorld()
{
	std::cout << "Hello World" << '\n';
	std::cerr << "THis shit is used to say an error"<<'\n';

}

void cBasics::intFunctionWParameter(int a, int b)
{
	std::cout << a << '\n';
	std::cout << b << '\n';
}


int cBasics::someFunction1()
{
	std::cout << "This is some function 1" << '\n';
	int input;
	std::cin >> input;

	return input;
}

void cBasics::returnFunction(int value)
{
	printf("This is the value of the int times 2  %d\n", value * 2);

}

int cBasics::sampleIntFunction()
{
	int someVariable;

	someVariable = 10;

	std::cout << someVariable << '\n';

	someVariable = 20;

	std::cout << someVariable << '\n';

	std::cout << std::endl;

	return someVariable;
}

void cBasics::macroTest()
{
	std::string macro;
	macro = MACRO_TEXT;
	printf("%s \n", macro.c_str());
}

void cBasics::booleanTest()
{
	bool const someBool = true;
	std::cout << !someBool << '\n';
	std::cout << someBool << '\n';

	if (someBool)
	{
		std::cout << "This is true" << '\n';
	}
 

}
