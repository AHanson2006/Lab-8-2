#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {
	string str = "Hello World";
	string str2 = "Hello              World";

	cout << "There are " << countWords(str) << " word(s) in string 1, and " << countWords(str2) << " word(s) in string 2.";
}
int countWords(string str) {
	int wordCount = 1;
	int spaceCount = 0;

	for (int i = 0; i < size(str); i++) {
		if (str[i] == ' ') {
			spaceCount = spaceCount + 1;
			if (spaceCount == 1) {
				wordCount = wordCount + 1;

			}
			else if (str[i] != ' ') {
				spaceCount = 0;
			}
		}
		
	}

	return wordCount;
}