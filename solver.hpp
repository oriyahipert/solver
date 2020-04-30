#include <complex>
namespace solver{
    class RealVariable
    {
    private:      
    public:
    //RealVariable solve(RealVariable &re);
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
  //  friend std::ostream& operator<<(std::ostream os, const RealVariable &re);
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
double solve(RealVariable &re);
std::complex<double> solve(ComplexVariable &co);
};