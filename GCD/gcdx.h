#ifndef GCDX_H
#define GCDX_H

/**
 * @brief Calculate the greatest common divisor of two integers.
 * Extended version of gcd that returns x, y where ax + by = gcd(a, b)
 * Note: gcd(0, 0) will return 0 and print an error message
 * @param a the first integer
 * @param b the second integer
 * @return the greatest common divisor of a and b
 */

long gcd(long a, long b, long& x, long& y);

#endif
