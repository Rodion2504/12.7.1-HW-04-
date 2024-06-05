#include "main.h"
#include "chek.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int k = 3;
	string str1 = "123123123"; 
	string str2 = "QwertyQwerty";
	string str3 = "AbcAbcAbcabc";
	int len1 = str1.length();
	int len2 = str2.length();
	int len3 = str3.length();



	cout << "1 = " << len1 << ", 2 = " << len2 << ", 3 = " << len2 << " <- все тесты здесь" << endl; 

	if (isKperiodic(str1, len1, k)) cout << "==> 1 является периодическим \n" << endl; else cout << "==> 1 не является периодическим \n" << endl; 
	if (isKperiodic(str2, len2, k)) cout << "==> 2 является периодическим \n" << endl; else cout << "==> 2 не является периодическим \n" << endl;
	if (isKperiodic(str3, len3, k)) cout << "==> 3 является периодическим \n" << endl; else cout << "==> 3 не является периодическим \n" << endl;

	return 0;
}