#include <complex>
using namespace std;
namespace solver{
    class RealVariable
    { 
    public:
    double a;
    double b;
    double c;

    //constructors

    RealVariable();
    RealVariable(double a , double b , double c);

    //functions

    friend RealVariable& operator^(const double &num, RealVariable &re);
    friend RealVariable& operator^( RealVariable &re, const double &num);
    friend RealVariable& operator^( RealVariable &re1, RealVariable &re2);
    friend RealVariable& operator+(RealVariable &re,const double &num);
    friend RealVariable& operator+(const double &num, RealVariable &re);
    friend RealVariable& operator+(RealVariable &re1, RealVariable &re2);
    friend RealVariable& operator*(const double &num,  RealVariable &re);
    friend RealVariable& operator*( RealVariable &re, const double &num);
    friend RealVariable& operator*( RealVariable &re1,  RealVariable &re2);
    friend RealVariable& operator-(const double &num,  RealVariable &re);
    friend RealVariable& operator-( RealVariable &re, const double &num);
    friend RealVariable& operator-( RealVariable &re1,  RealVariable &re2);
    friend RealVariable& operator/(const double &num,  RealVariable &re);
    friend RealVariable& operator/( RealVariable &re, const double &num);
    friend RealVariable& operator/( RealVariable &re1,  RealVariable &re2);
    friend RealVariable& operator==(const double &num,  RealVariable &re);
    friend RealVariable& operator==( RealVariable &re, const double &num);
    friend RealVariable& operator==( RealVariable &re1,  RealVariable &re2);
    

    };

    class ComplexVariable
    {
    public:
    complex<double> a;
    complex<double> b;
    complex<double> c;

    //constructors

    ComplexVariable();
    ComplexVariable(complex<double> a, complex<double> b, complex<double> c);

    //functions

    friend ComplexVariable& operator^( ComplexVariable &co,const double &num);
    friend ComplexVariable& operator^(const double &num,  ComplexVariable &co);
    friend ComplexVariable& operator^( ComplexVariable &co1, ComplexVariable &co2);
    friend ComplexVariable& operator+(ComplexVariable &co,const double &num);
    friend ComplexVariable& operator+(const double &num , ComplexVariable &co);
    friend ComplexVariable& operator+(ComplexVariable &co1, ComplexVariable &co2);
    friend ComplexVariable& operator+(ComplexVariable &co,const std::complex<double> &c);
    friend ComplexVariable& operator+(const std::complex<double> &c,ComplexVariable &co);
    friend ComplexVariable& operator*(const double &num,  ComplexVariable &co);
    friend ComplexVariable& operator*( ComplexVariable &co, const double &num);
    friend ComplexVariable& operator*( ComplexVariable&co1,  ComplexVariable &co2);
    friend ComplexVariable& operator-(const double &num,  ComplexVariable &co);
    friend ComplexVariable& operator-( ComplexVariable &co,const double &num);
    friend ComplexVariable& operator-( ComplexVariable &co1,  ComplexVariable &co2);
    friend ComplexVariable& operator-(ComplexVariable &co,const std::complex<double> &c);
    friend ComplexVariable& operator-(const std::complex<double> &c,ComplexVariable &co);
    friend ComplexVariable& operator/(const double &num,  ComplexVariable &co);
    friend ComplexVariable& operator/(  ComplexVariable &co, const double &num);
    friend ComplexVariable& operator/( ComplexVariable &co1,  ComplexVariable &co2);
    friend ComplexVariable& operator==(const double &num,  ComplexVariable &co);
    friend ComplexVariable& operator==( ComplexVariable &co, const double &num);
    friend ComplexVariable& operator==( ComplexVariable &co1,  ComplexVariable &co2);
    friend ComplexVariable& operator==(ComplexVariable &co, std::complex<double> &c);
    friend ComplexVariable& operator==(std::complex<double> &c,ComplexVariable &co);
    };

complex<double> solve(ComplexVariable &co);
double solve(RealVariable &re);
double quadratic_equation_real(double a , double b, double c);
complex<double> quadratic_equation_comp(complex<double> a , complex<double> b, complex<double> c);
};