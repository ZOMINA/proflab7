#include "Weather.h"
#include "Service.h"
#include "json.hpp"
#include "JsonService.h"
#include <iostream>
#include "Service.h"
#include "Weather.h"
#include "XmlService.h"
int main()
{
    JsonService js;
    Weather w = js.getWeather("weather.json");
    return 0;

    XmlService xs;
    Weather w = xs.getWeather("weather.xml");

}

