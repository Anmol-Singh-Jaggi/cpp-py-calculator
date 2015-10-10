#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    string expression = "";
    if (argc < 2)
    {
        cout << "Enter expression to evaluate: ";
        getline(cin, expression);
    }

    for (int i=1; i<argc; i++)
    {
        expression += argv[i];
    }

    // NOTE: this is literally a hack
    string command = "python -c \'print(" + expression + ")\'";

    system(command.c_str());

    return 0;
}
