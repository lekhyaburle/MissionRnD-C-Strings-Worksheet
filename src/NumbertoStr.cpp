/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

#include<math.h>
void number_to_str(float number, char *str, int afterdecimal)
{
	int j = 0;
	if (number < 0)
	{
		str[j] = '-';
		j++;
		number = -number;
	}
	double b = 10;
	int i = (int)number;
	int a = i;
	float f = (float)(number - i);
	int k = (int)(f*(pow(b, afterdecimal)));
	int p = k;
	int c = 0, l;
	while (i > 0)
	{
		c++;
		i = i / 10;
	}
	i = a;
	c--;
	while (i > 0)
	{
		str[j] = (i / pow(b, c)) + '0'; l = pow(b, c);
		i = i %l;
		c--;
		j++;
	}
	if (k == 0 || afterdecimal == 0){
		str[j] = '\0';
	}
	str[j] = '.';
	j++;

	c = 0;
	while (k > 0)
	{
		c++;
		k = k / 10;
	}
	c--;
	k = p;
	while (k > 0)
	{
		
		str[j] = (k / pow(b, c)) + '0';
		l = pow(b, c);
		k = k %l;
		c--;
		j++;
	}
	str[j] = '\0';
}
