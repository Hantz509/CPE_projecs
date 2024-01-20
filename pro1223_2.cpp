#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int ary[9];
    string var[9] = {"x^8", "x^7", "x^6", "x^5", "x^4", "x^3", "x^2", "x", ""};
    while (cin >> ary[0])
    {
            bool allzero = true;
            int flag = 0;
        for (int i = 1 ; i < 9 ; i++)
            cin >> ary[i];
        
        for (int i = 0 ; i < 9 ; i++)
        {
            if (ary[i] == 0)
                continue;
            
            allzero = false;
        
            if (flag == 0)
            {

                if (ary[i] > 1 || ary[i] < -1)
                 cout << ary[i] << var[i];
                else if (ary[i] == 1 && i != 8)
                    cout << var[i];
                else if (ary[i] == -1 && i != 8)
                    cout << "-" << var[i];
                else if ( i == 8)
                    cout << ary[i];

                flag =1;
                continue;
            }
            else
            {
                cout << " " ;

                if (ary[i] > 0)
                    cout << "+ ";
                else if (ary[i] < 0)
                    cout << "- ";

                if ((ary[i] > 1 || ary[i] < -1) && i != 8)
                        cout << abs (ary[i]) << var[i];
                else if ((ary[i] == -1 || ary[i] ==  1) && i != 8)
                        cout << var[i];
                else if (i == 8)
                    cout << abs (ary[i]);
                
            }
            
        }

        if (allzero)
            cout << 0;
        cout << endl;
    }
}