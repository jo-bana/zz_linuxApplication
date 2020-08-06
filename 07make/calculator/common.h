#ifndef _COMMON_H_
#define _COMMON_H_

#define MAX_STR 1024
enum status
{
	OK,
	COMMAND_ERROR,
	NOT_NUMBER,
	OPERATOR_UNSUPPORT,
	DIV_ZERO_ERROR,
	SAVING_ERROR,
	ERROR,
};

extern const char operator_system[MAX_STR];

#endif