#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char *name = "GitIsFun";
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    cout << "String length is : " << count << endl;
    cout << "New BUGFIX " <<endl ;
}