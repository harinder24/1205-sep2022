#include "fraction.h"
#include <iostream>

Fraction::Fraction()
{
	num = 0;
	den = 0;
}

Fraction::Fraction(int n)
{
	num = n;
	den = 0;
}

Fraction::Fraction(int n, int d)
{
	num = n;
	den = d;
}


Fraction::Fraction(Fraction const& pt)
{
	num = pt.num;
	den = pt.den;
}

int Fraction::GetDen()
{
	return den;
}

int Fraction::GetNum()
{
	return num;
}

void Fraction::Set(int n, int d)
{
	this->num = n;
	this->den = d;
}

int Fraction::GreatestCommonFactor(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	return GreatestCommonFactor(b, a % b);
}

int Fraction::LowestCommonDenominator(int a, int b)
{
	int highestInt;
	if (a > b)
	{
		highestInt = a;
	}
	else
	{
		highestInt = b;
	}
	do
	{
		if (highestInt % a == 0 && highestInt % b == 0) {
			return highestInt;
		}
		else
		{
			highestInt++;
		}
	} while (true);
}