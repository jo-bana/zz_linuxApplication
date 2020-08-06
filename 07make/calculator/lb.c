#include <stdio.h>
#include <string.h>
#include "common.h"

enum status checkOperator(char opt)
{
	int i;
	for(i=0;i<(strlen(operator_system));i++)
	{
		if(opt==operator_system[i])
		{
			return OK;
		}
	}
	return OPERATOR_UNSUPPORT;
}
