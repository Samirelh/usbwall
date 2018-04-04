/**
 *\file stat.h
 *\brief Containing functions and struct to get or set stats variables
 */

/**
 *\ struct variable_stat define a stat variable
 *\ variable_stat.name for the name of the stat variable
 *\ vairable_stat.val for the value of the stat variable
 */
typedef struct variable_stat {
	char* name;
	const char* value;
} t_variable_stat;

/**
 *\ brief set a value to a stat variable
 *\ The function will allow the necessare memory of the value to set
*/
void set_stat_value(t_variable_stat* my_var, const int value);

/**
 *\ brief set a name to a stat variable
 *\ The function will allow the necessare memory of the name to set
*/
void set_stat_name(t_variable_stat* my_var, char* name_var);

/**
 *\ brief get a value of a stat variable
 *\ The function will return the value of stat variable
*/
__attribute__((const)) const char* get_stat(t_variable_stat my_var);


/**
 *\Init stat variables
*/
t_variable_stat* USB_COUNT;
