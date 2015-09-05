#include <stdio.h>
// This code is to print nth prime number.
// While creating an alorithm we understood, that we should first ask a user to enter an integer
// which will be the ordinal number or wanted prime number we want to print out.
int isPrime(int number); // with this function we will check if the number is prime or not.
int prime(int n); // print function should calculate our result according to the isPrime function

int main (void) // and then main function should call for print function in order to display our result
{
   int n; // declare an integer
   printf("Enter the ordinal number of prime number you want to print out.\n"); // ask user for an input
   scanf("%d", &n); // scan the input
   int result; // declare the value for calling the prime function
   
   result=prime(n); // call for prime function
   printf("(%d)PRIME is: %d\n", n, result); // display, print the result
   
   return 0;	// return to the main function
}
int isPrime(int number)  // declare the isPrime function
{
	
	int counter=2; // declare the value of counter that will be used in for loop function
    if (number <= 1) 
	return 0; // zero and one are not prime
    
    for (counter=2; counter<=number-1; counter++)  // declare the foor loop function
	{
        if (number%counter == 0) // put a condition, if the number is prime finish with loop and return 1
		return 1;
	
    }
    return 1;
}
int prime (int n) // declare the prime funtion
{
	int orderOfPrime=0; // declare the value and initialize it to 0
	int currentPrimeNumber; // declare the integer
	int counter; // declare the value for counter, that will be used in next for loop function
	
	for(counter=2; orderOfPrime!=n; counter++) // for loop funtion with counter initilized to 2 
	// and should be checked if it prime
	{
		
		if(isPrime(counter)) // if it is prime
		{
			orderOfPrime++; // increment the value of orderOfPrime
			currentPrimeNumber = counter; // assign the value of counter to currentPrimeNumber
			
		
		}
	} 
    
	return currentPrimeNumber; // if the value of orderOfPrime is equal to n, return to currentPrimeNumber
	
}
