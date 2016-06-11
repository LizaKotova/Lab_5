#include <stdio.h>
#include <math.h>
#include "kv.h"

int main()
{
    double a, b, c;

    printf("wedite koeffizient 1\n");
    scanf("%lf", &a);

    printf("wedite koeffizient 2\n");
    scanf("%lf", &b);

    printf("wedite koeffizient 3\n");
    scanf("%lf", &c);
    
    double x1, x2;
	
	int result = kv(a, b, c, &x1, &x2);
	
	if (result == FOUND_2_ROOT){
		printf ("x1=%lf\n", x1);
		printf ("x2=%lf\n", x2);
	}	
			
	if (result == FOUND_1_ROOT)
        printf ("x1=%lf\n", x1);
        
    if (result == ROOT_NOT_FOUND)
        printf ("ROOT_NOT_FOUND");	
	
	if (result == INVALUD_ARGUMENTS)
        printf ("INVALUD_ARGUMENTS");
	
	return 0;
	
}