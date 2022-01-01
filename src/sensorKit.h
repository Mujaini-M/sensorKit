#ifndef sensorKit_h
#define sensorKit_h
#include <vector>
#include "Particle.h"
using namespace std;

class sensorKit
{
  public:

    sensorKit(int acc);
    double mean(double SR);
    double standard_deviation(double SR);
    double median(double SR);

  private:

    
    vector<double> mean_vec;
    vector<double> sd_vec;
    vector<double> median_vec;
    
    double meanV {0};
    double sdV {0};
    double medianV {0};
 
};

#endif