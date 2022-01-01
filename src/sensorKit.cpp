#include "Particle.h"
#include "sensorKit.h"
#include <cmath>

sensorKit::sensorKit(int acc){
  acc = 1;
}


double sensorKit::mean(double SR){
   mean_vec.push_back(SR);
   for(double each: mean_vec){
       meanV = meanV + each;
   }
   
   return meanV/mean_vec.size();
}


double sensorKit::standard_deviation(double SR){
    sd_vec.push_back(SR);
    double meanSD {0};
    double diff {0};
    for(double each: sd_vec){
        meanSD = meanSD + each;
    }

    for(double each: sd_vec){
        diff = each - meanSD;
        sdV = sdV + pow(diff, 2);
    }

    return sqrt(sdV);
}

double sensorKit::median(double SR){
    median_vec.push_back(SR);

    if(median_vec.size()%2 == 0){
        int index = (median_vec.size()/2) - 1;
        medianV = (median_vec.at(index) + median_vec.at(index+1))/2;
    }
    
    return medianV;
}