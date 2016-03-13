//============================================================================
// Name        : test_robot.cpp
// Author      : StasLatGTTT
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "robot_class.cpp"
using namespace std;

int main() {
	robot a(5.0,3.0);
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout<<"x="<<a.getX()<<", y="<<a.getY()<<endl;
	return 0;
}
