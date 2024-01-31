#pragma once
#include <iostream>
#define MACRO_TEXT "This is a macro text" //This is a macro text


//This entire class is a collection of function with some basic logic for cpp
//with just the basic data types and functions
class cBasics
{
public:

	cBasics();  // Constructor
	~cBasics(); // Destructor

	//Function Prototypes
	void printHelloWorld();
	void intFunctionWParameter(int a, int b);
	int someFunction1();
	void returnFunction(int value);
	int sampleIntFunction();
	void macroTest();
	void booleanTest();
private:
	bool someBool;
 
};

