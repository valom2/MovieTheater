#include <iostream>
using namespace std;

int main()
{
    int place[8][9];

    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            place[i][j] = 0;
            cout << place[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}