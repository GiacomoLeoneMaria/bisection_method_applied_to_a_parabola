#ifndef _Parabola_h_
#define _Parabola_h_
#include"FunzioneBase.h"
#include<cmath>

class Parabola: public FunzioneBase {

	public:

	Parabola();
	Parabola(double a, double b, double c);
	~Parabola();

	virtual double Eval(double x) const {return m_a*pow(x,2)+m_b*x+m_c;}
	
	void setA(double a) {m_a=a;}
	void setB(double b) {m_b=b;}
	void setC(double c) {m_c=c;}

	double getA() const {return m_a;}
	double getB() const {return m_b;}
	double getC() const {return m_c;}

	private:

	double m_a;
	double m_b;
	double m_c;
};

#endif
