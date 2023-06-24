#include <iostream>
#include "../config/config.hpp"
using namespace std;

#ifdef USE_MYMATH
  #include "../mylib/mymath.hpp"
#else
  #include <math.h>
#endif

int main(int argc,char *argv[])
{
	if(argc<3)
	{
		cout<<"Usage:"<<argv[0]<<endl;
		return 1;
	}
	double base =atof(argv[1]);
	int exponent=atoi(argv[2]);

	#ifdef USE_MYMATH
		cout <<"mymath's result:"<<power(base,exponent)<<endl;
	#else 
	    cout <<"standard-math's result:"<<pow(base,exponent)<<endl;
	#endif 
	
	return 0;
}