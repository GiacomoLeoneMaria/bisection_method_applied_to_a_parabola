#include"Bisezione.h"
#include"Segno.h"
#include"FunzioneBase.h"
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
	
Bisezione::Bisezione(){
	m_min=0;
	m_max=0;
	m_precision=0;
}

Bisezione::Bisezione(double a, double b, double c){
	m_min=a;
	m_max=b;
	m_precision=c;
}

Bisezione::~Bisezione(){
}

double Bisezione::CercaZeri(double a, double b, const FunzioneBase *f){

	if (a>b){
	double tmp=a;
	a=b;
	b=tmp;
	}

	double mid;
	int cifre=-log10(m_precision);
	
	do {
		mid=(b+a)/2;
		double fMid=f->Eval(mid);
		double fMax=f->Eval(b);
		double fMin=f->Eval(a);
		int z= sign(fMax)*sign(fMid);

		if (fMid=0){
			cout << fixed << " zero has coordinate x in: " << setprecision(cifre) << mid << endl;
			return 0;
		}
		if (z<0){
			a=mid;
		}
		else{ 
			b=mid;
		}
		
	}
	while ((b-a)>m_precision);
	
	cout << fixed;
	cout << setprecision(cifre) << " zero has coordinate x in: " << mid << endl; 

}
