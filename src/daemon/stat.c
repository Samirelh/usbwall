/**
 *\file stat.c
 *\brief Containing functions to get or set stats variables
 */

#include <stdio.h>
#include <stdlib.h>
#include "stat.h"

/**
 *\ brief set a value to a stat variable
 *\ The function will allow the necessare memory of the value to set
*/

void set_stat_value(t_variable_stat* my_var, const char* value_name){
	my_var->value=malloc(sizeof(value_name));	
	my_var->value=value_name;
}

/**
 *\ brief set a name to a stat variable
 *\ The function will allow the necessare memory of the name to set
*/
void set_stat_name(t_variable_stat* my_var, char* name_var){
	my_var->name=malloc(sizeof(name_var));	
	my_var->name=name_var;
}

/**
 *\ brief get a value of a stat variable
 *\ The function will return the value of stat variable
*/
__attribute__((const)) const char* get_stat(t_variable_stat my_var){
	return my_var.value;
}