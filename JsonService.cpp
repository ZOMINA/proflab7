#include <iostream>
#include "JsonService.h"
#include "json.hpp"
using nlohmann::json;
Weather JsonService::getWeather(std::string s)
{
    std::ifstream fin(s);
    if (!fin)
        throw exception("error");

    json j;
    j = json::parse(fin);
    std::string city = j["name"]; //  Киров
    double lon = j["coord"]["lon"]; // 49.6601
    double lat = j["coord"]["lat"]; // 58.5966  
    double temperature = j["main"]["temp"]; // 5.69
    std::vector<json> l = j["weather"].get<std::vector<json>>();
    std::string weather = (l[0])["main"]; // дождь
    double windSpeed = j["wind"]["speed"]; // 4.27
    int clouds = j["clouds"]["all"]; // 100
    return Weather(city,lon,lat,temperature,weather,windSpeed,clouds);
}
