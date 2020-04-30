#include "solver.hpp"

using namespace solver;
//using solver::solve, solver::RealVariable, solver::ComplexVariable;

    RealVariable& solver:: operator^(const double &num, RealVariable &re){
        //RealVariable x;
        return re;
    }
     RealVariable& solver:: operator^(RealVariable &re,const double &num){
      return re;
    }
     RealVariable& solver:: operator^( RealVariable &re1,  RealVariable &re2){
         return re1;
    }
     RealVariable& solver:: operator+(RealVariable &re,const double &num){
         return re;
     }
     RealVariable& solver:: operator+(const double &num, RealVariable &re){
         return re;
    }
     RealVariable& solver:: operator+(RealVariable &re1, RealVariable &re2){
         return re1;
    }
     RealVariable& solver:: operator*(const double &num,  RealVariable &re){
         return re;
    }
     RealVariable& solver:: operator*( RealVariable &re, const double &num){
        return re;
    }
     RealVariable& solver:: operator*( RealVariable &re1,  RealVariable &re2){
        return re1;
    }
     RealVariable& solver:: operator-(const double &num,  RealVariable &re){
        return re;
    }
     RealVariable& solver:: operator-( RealVariable &re, const double &num){
        return re;
    }
     RealVariable& solver:: operator-( RealVariable &re1,  RealVariable &re2){
          return re1;
    }
     RealVariable& solver:: operator/(const double &num,  RealVariable &re){
         return re;
    }
     RealVariable& solver:: operator/( RealVariable &re, const double &num){
       return re;
    }
     RealVariable& solver:: operator/( RealVariable &re1,  RealVariable &re2){
       return re1;
    }
     RealVariable& solver:: operator==(const double &num,  RealVariable &re){
         return re;
    }
     RealVariable& solver:: operator==( RealVariable &re, const double &num){
      return re;
    }
     RealVariable& solver:: operator==( RealVariable &re1,  RealVariable &re2){
        return re1;
    }
    double solver:: solve(RealVariable &re){
        double d;
        return d;
    }

    // RealVariable:: std::ostream& operator<<(std::ostream os, const RealVariable &re){

   // }

   ////////////////////////ComplexVariable///////////////////////////////
  
   ComplexVariable& solver:: operator^( ComplexVariable &co,const double &num){
       return co;
   }
    ComplexVariable& solver:: operator^(const double &num,  ComplexVariable &co){
        return co;
    }
    ComplexVariable& solver:: operator^( ComplexVariable &co1, ComplexVariable &co2){
        return co1;
    }
    ComplexVariable& solver:: operator+(ComplexVariable &co,const double &num){
        return co;
    }
     ComplexVariable& solver:: operator+(const double &num , ComplexVariable &co){
         return co;
    }
     ComplexVariable& solver:: operator+(ComplexVariable &co1, ComplexVariable &co2){
         return co1;
    }
    ComplexVariable& solver:: operator+(ComplexVariable &co,const std::complex<double> &c){
        return co;
    }
    ComplexVariable& solver:: operator+(const std::complex<double> &c,ComplexVariable &co){
        return co;
    }
    ComplexVariable& solver:: operator*(const double &num,  ComplexVariable &co){
        return co;
    }
    ComplexVariable& solver:: operator*( ComplexVariable &co, const double &num){
        return co;
    }
     ComplexVariable& solver:: operator*( ComplexVariable&co1,  ComplexVariable &co2){
        return co1;
    }
     ComplexVariable& solver:: operator-(const double &num,  ComplexVariable &co){return co;}
     ComplexVariable& solver:: operator-( ComplexVariable &co,const double &num){return co;}
     ComplexVariable& solver:: operator-( ComplexVariable &co1,  ComplexVariable &co2){return co1;}
     ComplexVariable& solver:: operator/(const double &num,  ComplexVariable &co){return co;}
     ComplexVariable& solver:: operator/(  ComplexVariable &co, const double &num){return co;}
     ComplexVariable& solver:: operator/( ComplexVariable &co1,  ComplexVariable &co2){return co1;}
     ComplexVariable& solver:: operator==(const double &num,  ComplexVariable &co){return co;}
     ComplexVariable& solver:: operator==( ComplexVariable &co, const double &num){return co;}
     ComplexVariable& solver:: operator==( ComplexVariable &co1,  ComplexVariable &co2){return co1;}
    ComplexVariable& solver:: operator==(ComplexVariable &co, std::complex<double> &c){
        return co;
      }
    ComplexVariable& solver:: operator==(std::complex<double> &c,ComplexVariable &co){
        return co;
    }
    // std::ostream& operator<<(std::ostream os, const RealVariable &re);
    std::complex<double> solver:: solve(ComplexVariable &co){
        std::complex<double> c;
        return c;
    }