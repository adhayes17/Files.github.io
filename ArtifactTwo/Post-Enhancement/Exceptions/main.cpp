#include <stdio.h>

// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>






struct CustomException : std::exception
{
    const char* what() const throw () {
        return "Custom exception.";
    }
};

bool do_even_more_custom_application_logic()
{

    //This will throw a standard exception

    std::cout << "Running Even More Custom Application Logic." << std::endl;
    throw std::invalid_argument("Exception thrown from do_even_more_custom_application_logic().");

    return true;
}
void do_custom_application_logic()
{
    // TODO: Wrap the call to do_even_more_custom_application_logic()
    //  with an exception handler that catches std::exception, displays
    //  a message and the exception.what(), then continues processing
    std::cout << "Running Custom Application Logic." << std::endl;

    //Wrapped the call that could potentially throw exceptional errors with an exception handler 
    try {

        if (do_even_more_custom_application_logic())
        {
            std::cout << "Even More Custom Application Logic Succeeded." << std::endl;
        }

    }
    // TODO: Throw a custom exception derived from std::exception
    //  and catch it explictly in main

    //This will throw a custom exception and then catch it explicitly in the main function
    catch (std::exception& e)
    {
        std::cout << "EXCEPTION: " << e.what() << std::endl
            << "\t" << "Exception caught by do_custom_application_logic()." << std::endl;
    }

    throw CustomException();
    std::cout << "Leaving Custom Application Logic." << std::endl;

}

float divide(float num, float den)
{
    // TODO: Throw an exception to deal with divide by zero errors using
    //  a standard C++ defined exception

    //This will throw an exception to handle an invalid expression
    if (den == 0)
    {
        throw std::runtime_error("Can't divide by zero!");
    }
    return (num / den);
}

void do_division() noexcept
{
    //  TODO: create an exception handler to capture ONLY the exception thrown
    //  by divide.

    //Created an exception handler to only catch the exceptions thrown by divide

    float numerator = 10.0f;
    float denominator = 0;

    try
    {
        auto result = divide(numerator, denominator);
        std::cout << "divide(" << numerator << ", " << denominator << ") = " << result << std::endl;
    }

    catch (std::runtime_error& e)
    {
        std::cout << "EXCEPTION: " << e.what() << std::endl;
    }

}



int main()
{
    std::cout << "Exceptions Tests!" << std::endl;

    // TODO: Create exception handlers that catch (in this order):
    //  your custom exception
    //  std::exception
    //  uncaught exception 
    //  that wraps the whole main function, and displays a message to the console.
    try
    {
        do_division();
        do_custom_application_logic();
    }

    // Catches exception thrown from do_custom_application_logic()
    catch (CustomException& e)
    {
        std::cout << "EXCEPTION: " << e.what() << std::endl;

    }

    catch (std::exception& e)
    {
        std::cout << "EXCEPTION: " << e.what() << std::endl;

    }

    catch (...)
    {
        std::cout << "EXCEPTION: " << "Uncaught exception." << std::endl;

    }
	
	
	//added enhancement
	//This has multiple catch blocks. The catch block executed will be the one that matches the type of exception sent.
	try
  {
    char * mystring;
    mystring = new char [10];
    if (mystring == NULL) throw "Allocation failure";
    for (int n=0; n<=100; n++)
    {
      if (n>9) throw n;
      mystring[n]='z';
    }
  }
  catch (int i)
  {
    std::cout << "Exception: ";
    std::cout << "index " << i << " is out of range" << std::endl;
  }
  catch (char * str)
  {
    std::cout << "Exception: " << str << std::endl;
  }
  return 0;



  
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
