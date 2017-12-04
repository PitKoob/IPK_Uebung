#include <iostream>
#include <string.h>
#include "input.cc"


bool check_parentheses(std::string symbols)
{
	int parenth = 0;
	
	for( unsigned int i = 0; i < symbols.size(); i++)
	{
		if (symbols[i] == '(')
			parenth++;
		if (symbols[i] == ')')
			parenth--;
		if (parenth < 0)
		{
			std::cout << "closing to many parentheses to early" << std::endl;
			return false;
		}
	}
		if (parenth != 0)
		{
			std::cout << "Need to close some parentheses there, buddy" << std::endl;
			return false;
		}	
		else 
			return true;
}

int main()
{	

	std::string str = read_stream(std::cin);
	check_parentheses(str);
	return 0;
}
