
#include <iostream>
#include "Train.h"

int main()
{
    string st, tdep, tdes;
    float tno;
    cout << "Enter train no: ";
    cin >> tno;
    cout << "Enter departure: ";
    cin >> tdep;
    cout << "Enter destination: ";
    cin >> tdes;
    Train t(tno, tdep, tdes);
    do{
        cout << "Enter the stops or x to end entry: ";
        cin >> st;
        if(st.compare("x") == 0)
        {}
        else
        {
            t.setStops(st);
        }
    } while(st.compare("x") != 0);
    t.display();
    return 0;
}
