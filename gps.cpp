#include "gps.hpp"
#include <iostream>
#include <string>

GPS ::GPS(double lati, double longi)
{
    if (lati >= -90 && lati <= 90)
    {
        if (longi >= -180 && longi <= 180)
        {
           this->latitude = lati;
           this->longitude = longi;
        }
        else
        {

            throw std ::invalid_argument("a longitude is valid, if it is between -180 and 180 ! \n");
        }
    }
    else
    {

        throw std ::invalid_argument("a latitude is valid, if it is between -90 and 90 ! \n");
    }
}

GPS :: ~GPS(){
    
    std :: cout << "Last Position : "<<latitude<<" , "<<longitude<<'\n';
    abort();
}