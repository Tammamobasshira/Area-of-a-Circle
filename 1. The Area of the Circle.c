
/*Area of the Circle
  Circumference of the Circle*/
#include <stdio.h>
#define pi 3.1416
void main()

    {
        float radius, area, circumference;
            printf ("Enter Your Radius Value: ");
        scanf ("%f", & radius);
        area = pi * radius * radius;
        circumference = 2 * pi * radius;
        printf ("Area of the Circle is %f\n", area);
        printf ("Area of the Circumference is %f\n", circumference);
    }
