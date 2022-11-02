/*
 * File: 0 is _prime_number.c
 * Auth: sam tech
 */

#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible-Checks if a nujmber is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the nujmber is divisible - 0.
 * If the number is not divisible - 1.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
}
