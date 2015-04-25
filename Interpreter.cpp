//Author: Mazin Jindeel
//Date: 10/11/2013
//This program takes in a string of ascii characters and outputs the
//brainfuck code required to output the string using brainfuck

//to output to console instead of file, simply uncomment the two cout statements
#include<iostream>
#include<string>
#include<fstream>;
using namespace std;
int main()
{
cout << "Please input a string of characters: \n";
string str;
ofstream file;
file.open("Brainfuck.txt");
getline (cin, str);
int len = str.length();
int chara;

for(int i = 0; i < len; i++)
{
	chara = str[i];
	for (int n = 0; n < chara; n++)
		file << "+";
		//cout << "+";
	file << ".";
	file << "<";
	//cout << ".<";

}
cout << "\ndone\n";
}

