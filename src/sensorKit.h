#ifndef sensorKit_h
#define sensorKit_h
#include <vector>
#include "Particle.h"
using namespace std;

class sensorKit
{
  public:

    sensorKit(int acc);
    double mean(double SR); //function prototype used to define the function before it used 
    double standard_deviation(double SR);//can be written as double standard_deviation(double); without the variable cuz
    double median(double SR);//in this stage the compiler needs to know the data types only.

  private:

    
    vector<double> mean_vec;
    vector<double> sd_vec;
    vector<double> median_vec;
    
    double meanV {0};
    double sdV {0};
    double medianV {0};
 
};

#endif