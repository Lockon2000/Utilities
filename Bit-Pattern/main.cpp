#include <iostream>

using namespace std;

int main()
{
    int num ;
    int mask ;
    char patt[32];

    while (!cin.fail())
    {
        mask = 1 ;

        cout << "Enter the number: " ;
        cin >> num ;

        cout << num << ":" ;
        for (int i = 0, check ; i < 32 ; ++i, mask <<= 1)
        {
            check = num & mask ;
            if (check != 0)
                patt[31-i] = '1' ;
            else
                patt[31-i] = '0' ;
        }

        for (int i = 0 ; i < 32 ; ++i)
        {
            if (i % 4 == 0)
                cout << ' ' ;

            cout << patt[i];
        }
        cout << '\n' ;
    }


    return 0;
}
