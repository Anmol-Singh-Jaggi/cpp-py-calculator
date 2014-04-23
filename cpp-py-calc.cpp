#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the expression to evaluate\n";
    string x;
    cin>>x;
    system((string("python -c \"print ")+x+string("\"")).c_str());
}
