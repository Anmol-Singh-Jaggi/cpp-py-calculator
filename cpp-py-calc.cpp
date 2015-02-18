#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout << "Enter the expression to evaluate\n";
	string x;
	getline( cin, x );
	string command = "python -c \"print(" + x + "\")";  // Assuming Python 3
	system( command.c_str() );
}
