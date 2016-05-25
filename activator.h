#ifndef ACTIVATOR_H
#define ACTIVATOR_H
#include <sstream>
#include <string>
#include <cctype>
using std::stringsteam;
using std::string;

class Activator {
  public:
    /**
     * getPrime
     * Returns a prime number in the series of primes
     */
    unsigned int getPrime(unsigned int whichPrime);

    /**
     * sumTheDigits
     * Returns the sum of the digits in a value reduced to a single digit
     */ 
    unsigned int sumTheDigits(unsigned int value);
  private:
};

#include "activator.cpp"
#endif