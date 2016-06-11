#include "kv.h"

int kv(double a,  double b,  double c, double *i, double *o)
{
	if ((a == 0) || ((a == 0) && (b == 0)) || ((a == 0) && (b == 0) && (c == 0)))
		return INVALUD_ARGUMENTS;		
		
	double d = b * b - 4 * a * c;
	
    if (d == 0) {
    	*i = -b / (2 * a);
    	return  FOUND_1_ROOT; 
	}
		
    if (d > 0) {
    	*i = (-b - sqrt(d)) / 2 * a;
    	*o = (-b + sqrt(d)) / 2 * a;	
   		return FOUND_2_ROOT;
    }

    if (d < 0)
        return ROOT_NOT_FOUND;
}