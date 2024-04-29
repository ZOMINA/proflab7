
#include <iostream>
#include "Service.h"
#include "Weather.h"
#include "XmlService.h"
int main()
{
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");

}

