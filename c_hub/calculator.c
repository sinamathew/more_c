#include "calculator.h"


int add(int num, ...)
{
	if(num)
	{
		int total = 0;
		int i;
		va_list list;
		va_start(list, num_args);

		for(i = 0; i < num_args; i++)
			if(va_arg(list, int))
				total += list;

		va_end(list);

		return (total);
	}
	else
		error();
}

int sub(int big_num, int num)
{
	if(num && big_num)
		return (big_num - num);
	else
		error()
}
