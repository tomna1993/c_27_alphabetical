#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool check_string(string anystring);

int main(void)
{
	// Get string from user
	string user_String = get_string("Give a string with lowercase letters: ");

	// Print Yes or No
	if(check_string(user_String))
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}

// Check if all the characters are lowercase and in alphabetical order
bool check_string(string anystring)
{
	// Iterate through the string, we should stop 
	for(int i = 0, length = strlen(anystring) - 1; i < length; i++)	
	{
		if (anystring[i] < 'a' || (anystring[i] > anystring[i+1]))
		{
			return false;
		}
	}
	return true;
}