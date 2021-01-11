// Original author: Kadir Lofca
// https://github.com/lofcakadir
// CodingProjects -> reverseString: This project will take a string and reverse it so that every character in order is placed in their opposite counterparts.

#include <iostream>
#include <string>

using namespace std;

// Called when swapping two characters in a string.
void swapChars(string& inString, int index1, int index2) {

	// Hold on to one of the chars because once it is changed we won't know what it was previously.
	char memorizedIndex = inString[index1];

	// Change the first index to the second one.
	inString[index1] = inString[index2];

	// Now since the first index is changed, we can use our memorized index instead to replace the second character.
	inString[index2] = memorizedIndex;
}

// Called to reverse a string.
void reverseString(string& inString)
{
	// Get the number of elements/characters in the string.
	int n = inString.length();

	// We will count from the beginning to the middle while swapping the equivelant char on the opposite end.
	for (int i = 0; i < n / 2; i++) {

		// Swap the chars.
		swapChars(inString, i, (n - i - 1));
	}
}

// Main body.
int main()
{
	// Create example string to reverse.
	string exampleString = "hannah";	// Replace string if not amused.

	// Call our reverse string function.
	reverseString(exampleString);

	// Print out the result!
	cout << exampleString;

	return 1;
}


