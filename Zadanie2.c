#include <stdio.h>
#include <math.h>

int main() {
	
  	float a, b, c, delta;
  	float x1, x2;
	printf("Wprowadz a: ");
	scanf("%f",&a);
	printf("Wprowadz b: ");
	scanf("%f",&b);
	printf("Wprowadz c: ");
	scanf("%f",&c);
	delta=b*b-4*a*c;
	if( delta>0)
	{
        x1=(-b-sqrt(delta))/2*a;
        x2=(-b+sqrt(delta))/2*a;
        printf("x1=%f   x2=%f\n", x1, x2);
    }
  else if(delta==0)
  {
       x1=(-b)/2*a;
       printf("x=%f\n", x1);
  }
  else
  printf("brak pierwiastkow\n");
  return 0;
}
	
