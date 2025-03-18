#ifndef GPS_H
#define GPS_H
#include <iostream>
#include <vector>

class GPS{
private :
double latitude;
double longitude;

public :
   
    GPS (double lati , double longi);
    ~GPS();
};
#endif