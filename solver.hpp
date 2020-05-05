#include <complex>
namespace solver{
    class RealVariable
    {
    private:
          
    public:
    double a;
    double b;
    double c;
    RealVariable();
    RealVariable(double a , double b , double c);
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
    private:
   
    public:
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
    friend ComplexVariable& operator/(const double &num,  ComplexVariable &co);
    friend ComplexVariable& operator/(  ComplexVariable &co, const double &num);
    friend ComplexVariable& operator/( ComplexVariable &co1,  ComplexVariable &co2);
    friend ComplexVariable& operator==(const double &num,  ComplexVariable &co);
    friend ComplexVariable& operator==( ComplexVariable &co, const double &num);
    friend ComplexVariable& operator==( ComplexVariable &co1,  ComplexVariable &co2);
    friend ComplexVariable& operator==(ComplexVariable &co, std::complex<double> &c);
    friend ComplexVariable& operator==(std::complex<double> &c,ComplexVariable &co);
  //  friend std::ostream& operator<<(std::ostream os, const RealVariable &re);
 
    };
std::complex<double> solve(ComplexVariable &co);
double solve(RealVariable &re);
double quadratic_equation(double a , double b, double c);
};