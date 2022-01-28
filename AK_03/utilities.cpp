# include "utilities.h"
# include "std_lib_facilities.h"

int randomWithLimits(int limMin, int limMax){
    return  (rand() % (limMax + 1 - limMin) + limMin);
}