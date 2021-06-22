#ifndef _Bisezione_h_
#define _Bisezione_h_
#include"FunzioneBase.h"

class Bisezione {
	
	public:

	Bisezione();
	Bisezione(double a,double b, double c);
	~Bisezione();
	
	virtual double CercaZeri(double a, double b, const FunzioneBase *f);

	void getMin(double a) {m_min=a;}
	void getMax(double b) {m_max=b;}
	void getPrecision(double c) {m_precision=c;}

	double getMin() const {return m_min;}
	double getMax() const {return m_max;}
	double getPrecision() const {return m_precision;}

	private:

	double m_min;
	double m_max;
	double m_precision;
};

#endif 
