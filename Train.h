#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Train {

public:
    // constructors
	// default constructor
    Train();
    Train(float a, string b, string c);
    // Modifiers
	// these modify object attributes
	void setStops(string x);
    void setCar(float z);
    void setDTime(float q);
    void setATime(float w);

	// Accessors
    // these will not change attributes:
	void display();

private:
	float No, Car, DTime, ATime, temp;
    string Dep, Des;
    string Stops[7];
    int size = 0;
};


