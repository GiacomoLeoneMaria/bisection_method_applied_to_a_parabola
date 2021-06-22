#include <iostream>
#include <cstdlib>
#include"FunzioneBase.h"
#include"Bisezione.h"
#include"Parabola.h"

using namespace std;

int main(int argc, char**argv ){

	if (argc<4){
		cerr << " devi darmi: "<< argv[0] <<", <min>, <max>, <precision> " << endl;
	return -1;
	}

	double a=atof(argv[1]);
	double b=atof(argv[2]);
	double c=atof(argv[3]);

	FunzioneBase *f= new Parabola(3.,5.,-2.);
	Bisezione B(a,b,c);
	B.CercaZeri(a,b,f);

return 0;

}
