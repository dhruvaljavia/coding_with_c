#include<string.h>
#include<stdio.h>
#include<math.h>
void main()
{
    float f = 0.1;
    if(f==0.1)
        printf("true");
    else if(f==0.1f)
        printf("false");

        // for floating constants, C standard (C11 i.e. ISO/IEC 9899:2011) has given guideline.
        // As per C11 clause 6.4.4.2, “An unsuffixed floating constant has type double.
        // If suffixed by the letter f or F, it has type float. If suffixed by the letter l or L, it has type long double.“

   int a=65;
   if(a=='A')
    printf("true");
   else
    printf("false");
}
