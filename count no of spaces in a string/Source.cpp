#include<iostream>
#include"string"

using namespace std;
int main() {
	char str[20];
	int spaces=0;
	cout << "enter string \n";
	cin.ignore();
	cin.getline(str, 20);
	for (int i = 0; i <= str[i]; i++) {
		if (str[i] == ' ')
			spaces++;
	}
	cout << "no of spaces = " << spaces;
	return 0;

}