#include <iostream>
#include "stos.h"

int main()
{
	Stos stos;
	for(int i = 1; i <= 50; i++)
	{
		if(i % 3 == i % 5)
			stos.push(i);
	}
	while(!stos.empty())
	{
		stos.pop();
	}
	return 0;
}
