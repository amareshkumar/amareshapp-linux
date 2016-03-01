#ifndef  MY_UTILITIES_H
#define MY_UTILITIES_H

#include "my_project_app.h"

enum StringValueEnum {
	socailNetwork 			= 1,
	programmingQuestions 	= 2,
	contactMe 				= 3,
	polymorphic 			= 4,
	threading 				= 5,
	getMeOutOfHere 			= 10,
	gc 						= 6,
	social 					= 7,
	overloading 			= 8
};

void my_utility();
bool is_number(char *s);
void user_command_map();
void user_command_map_int();

#endif // MY_UTILITIES_H
