/*
 * robot_class.cpp
 *
 *  Created on: Mar 13, 2016
 *      Author: staslatgttt
 */

class robot{
	float x=0,y=0;
	robot();
public:
	robot(float x, float y){
		this->x=x;
		this->y=y;
	}
	~robot(){};
	float getX(){return x;};
	float getY(){return y;};
};


