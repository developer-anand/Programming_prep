//Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.
#include<iostream>
#include<string>
using namespace std;
int main()
{	int m, n;
//cin>>n;
	char str[1000];
	cin >> str;
	int i = 0;
	for (  i = 0; str[i + 1] != '\0'; i++)
	{
		m = str[i + 1] - str[i];
		cout << str[i] << m;
	}

	cout << str[i];


	return 0;
}

All we need to do is just traverse the whole string and for every two adjacent characters just calculate the ascii among them. We will print the characters and the difference between with characters

Required Code is given below :


#include <iostream>
#include <string>
	using namespace std;

int main() {
	char str[1000];
	int nstr[2000];
	cin >> str;
	int i = 1;
	cout << str[0];
	while (str[i] != '\0') {
		nstr[i] = int(str[i]) - int(str[i - 1]);
		cout << nstr[i] << str[i];
		i++;
	}
	return 0;
}
Lang - Java

public static String diff_ascii(String str) {

	String ans = "";

	for (int i = 0; i < str.length() - 1; i++) {

		ans += str.charAt(i);
		int diff = str.charAt(i + 1) - str.charAt(i);
		ans += diff;
		ans += str.charAt(i + 1);
	}
