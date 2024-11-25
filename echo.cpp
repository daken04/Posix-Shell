#include "headers.h"

void echo(vector<string> args)
{
    for (int i = 1; i < args.size(); i++)
    {
        cout << args[i] << ' ';
    }
    cout << endl;
}