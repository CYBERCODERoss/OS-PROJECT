#include <iostream>
#include <string>

class Token
{
public:
	int position;
	bool free;
	bool stacked;
	int iterator;
	bool insideSafeHouse;
	int xCoordinates, yCoordinates;
	bool ended;

	Token();

	bool getFree();

	bool getStacked();

	int getPosition();

	void setPosition(int x);

	void setFree(bool val);
};