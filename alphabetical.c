#include <cs50.h>
#include <stdio.h>
#include <string.h>

int check_string(string anystring);

int main(void)
{
	// Get string from user
	string user_String = get_string("Give a string with lowercase letters: ");

	// Print Yes or No
	check_string(user_String);
}

// Check if all the characters are lowercase and in alphabetical order
int check_string(string anystring)
{
	// Iterate through the string, get length of the given string with strlen from string.h library   
	// because we compare the i and i+1 characters in the string we have to loop until the last but one  
	
	for(int i = 0, length = strlen(anystring) - 1; i < length; i++)	
	{
		// if character is not after 'a' and 
		// character i decimal value is bigger then character i+1 (f.e. 'ea' 'e'=101, 'a'=97) 
		if (anystring[i] < 'a' || (anystring[i] > anystring[i+1]))
		{
			printf("No\n");
			return 0;
		}
	}
	
	printf("Yes\n");
	return 0;
}