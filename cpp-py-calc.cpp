#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
	cout << "Enter the expression to evaluate\n";
	string expression;
	getline( cin, expression );

	// Craft the command string
	string command;
	command += "python -c ";
	// Assuming Python 3
	command +=  "\"print(" + expression + ")\"";

	// Execute the command
	system( command.c_str() );
}
