#include "main.h"
/**
 * _isalpha - check is params is lowercase and uppercase
 * @c : the charactere to check
 * Return: 1 if charac is lowerse else 0
 */
int _isalpha(int c){
	return ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'));
}
