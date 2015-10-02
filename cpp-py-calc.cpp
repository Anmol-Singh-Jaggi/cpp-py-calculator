#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
	if (argc < 2)
    {
        cout << "Usage:" << endl;
        cout << "./eval expression" <<endl;
        cout << "Please note, eval used above is just a suggested name for the object file" <<endl;
        return 0;
    }

    string expression = "";
    for (int i=1; i<argc; i++)
    {
        expression += argv[i];
    }

    // NOTE: this is literally a hack
    string command = "python -c \"print(" + expression + ")\"";

    system(command.c_str());

    return 0;
}
