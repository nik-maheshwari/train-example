#include "Train.h"
#include <vector>
using namespace std;

Train::Train(){
    No = 1234;
    Car = 4;
    DTime = 13.00;
    ATime = 15.00;
    Dep = "Dublin";
    Des = "Galway";
}

Train::Train(float a, string b, string c){
    No = a;
    Car = 4;
    DTime = 13.00;
    ATime = 15.00;
    Dep = b;
    Des = c;
    //Stops.push_back("Blackrock");
    //Stops.push_back("Connelly");
}

void Train::setCar(float z){
    Car = z;
}

void Train::setDTime(float q){
    DTime = q;
}

void Train::setATime(float w){
    ATime = w;
}

void Train::setStops(string x){

//cout << size << endl;
if(size > 6)
    cout << "Error, too many stops" << endl;
else
    Stops[size++] = x;
}

void Train::display(){
cout << "Train Number:" << No << endl << "Departure Point:" << Dep << endl;
cout << "Destination:" << Des << endl;
cout << "Stops on journey ";
for(int i = 0; i < size; i++)
    {
        cout << Stops[i] << " ";
    }
}
