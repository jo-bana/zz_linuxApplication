#ifndef _COMMON_H_
#define _COMMON_H_


#define MAX_STR 1024

enum status
{
	OK,
	COMMAND_ERROR,
	NOT_NUMBER,
	OPERATOR_UNSUPPER,
	DIV_ZERO_ERROR,
	ERROR,
	Savings_ERROR,
};

extern const char operator_system[MAX_STR];

#endif
