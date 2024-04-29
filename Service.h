#pragma once
#include "Weather.h"
#include <string>
using namespace std;
class Service
{
private:
public:
	virtual Weather getWeather(std::string s) = 0;
	virtual ~Service() {
	}
};

