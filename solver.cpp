#include "solver.hpp"

using namespace solver;

//constructors

    RealVariable::RealVariable()
    {
        this->a = 0;
        this->b = 1;
        this->c = 0;
    }
    RealVariable::RealVariable(double a , double b , double c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

//operators

    RealVariable& solver:: operator^(RealVariable &re,const double &num){
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1;
        if(num == 0)
        {
            ans.a = 0;
            ans.b = 0;
            ans.c = 1;
        }
        if(num == 1)
        {
            ans = re;
        }
        if(num == 2)
        {
            if(re.a != 0)
            {
                throw("the degree can't be more then 2");
            }
            if(re.b != 0)
            {
                ans.a = (re.b)*(re.b);
                ans.b = 2*re.b*re.c;
                ans.c = (re.c)*(re.c);
                return ans;
            }
            ans.a = 0;
            ans.b = 0;
            ans.c = (re.c)*(re.c);
        }
        return ans;
    }
    RealVariable& solver:: operator^(const double &num, RealVariable &re){
        return re;
    }
    RealVariable& solver:: operator^( RealVariable &re1,  RealVariable &re2){
        return re1;
    }
    RealVariable& solver:: operator+(RealVariable &re,const double &num){
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1;
        ans.a = re.a;
        ans.b = re.b;
        ans.c = re.c + num;
        return ans;
     }
    RealVariable& solver:: operator+(const double &num, RealVariable &re){
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1;
        ans = re + num;
        return ans;
    }
    RealVariable& solver:: operator+(RealVariable &re1, RealVariable &re2){
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1; 
        ans.a = re1.a + re2.a;
        ans.b = re1.b + re2.b;
        ans.c = re1.c + re2.c;
        return ans;
    }
    RealVariable& solver:: operator*( RealVariable &re, const double &num){
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1;
        ans.a = re.a * num;
        ans.b = re.b * num;
        ans.c = re.c * num;
        return ans;
    }
    RealVariable& solver:: operator*(const double &num,  RealVariable &re){
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1;
        ans = re * num;
        return ans;
    }
    RealVariable& solver:: operator*( RealVariable &re1,  RealVariable &re2){
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1;
        if(re1.a != 0 && re2.a != 0) throw ("the degree can't be more then 2");
        if(re1.a != 0)
        {
            if(re2.a != 0 || re2.b != 0)
            {
                throw("the degree can't be more then 2");
            }else
            {
                ans.a = re1.a * re2.c;
                ans.b = re1.b * re2.c;
                ans.c = re1.c * re2.c;
                return ans;
            }
        }
        else
        {
            if(re2.a != 0)
            {
                if(re1.b !=0)
                {
                    throw("the degree can't be more then 2");
                }
                ans.a = re2.a * re1.c;
                ans.b = re2.b * re1.c;
                ans.c = re2.c * re1.c;
                return ans;
            }else
            {
                if(re2.b == 0)
                {
                    ans.a = 0;
                    ans.b = re1.b * re2.c;
                    ans.c = re1.c * re2.c;
                    return ans;
                }
                if(re1.b == 0)
                {
                    ans.a = 0;
                    ans.b = re2.b * re1.c;
                    ans.c = re2.c * re1.c;
                    return ans;
                }
            }
           ans.a = 0;
           ans.b = 0;
           ans.c = re1.c * re2.c; 
        }
        return ans;
    }
    RealVariable& solver:: operator-( RealVariable &re, const double &num){
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1;
        ans.a = re.a;
        ans.b = re.b;
        ans.c = re.c - num;
        return ans;
    }
    RealVariable& solver:: operator-(const double &num,  RealVariable &re){
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1;
        ans = re - num;
        return ans;
    }
    RealVariable& solver:: operator-( RealVariable &re1,  RealVariable &re2){
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1;
        ans.a = re1.a - re2.a;
        ans.b = re1.b - re2.b;
        ans.c = re1.c - re2.c;
        return ans;
    }
    RealVariable& solver:: operator/( RealVariable &re, const double &num){
        if(num == 0) throw("Error- you can't div with '0'");
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1;
        ans.a = re.a / num;
        ans.b = re.b / num;
        ans.c = re.c / num;
        return ans;
    }
    RealVariable& solver:: operator/(const double &num,  RealVariable &re){
        if(re.a == 0 && re.b == 0 && re.c == 0) throw("Error- you can't div with '0'");
        return re;
    }
    RealVariable& solver:: operator/( RealVariable &re1,  RealVariable &re2){
        return re1;
    }
    RealVariable& solver:: operator==( RealVariable &re, const double &num){
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1;
        ans.a = re.a;
        ans.b = re.b;
        ans.c = re.c - num;
        return ans;
    }
    RealVariable& solver:: operator==(const double &num,  RealVariable &re){
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1;
        ans = re == num;
        return ans;
    }
    RealVariable& solver:: operator==( RealVariable &re1,  RealVariable &re2){
        RealVariable* ans1 = new RealVariable;
        RealVariable& ans = *ans1;
        ans.a = re1.a - re2.a;
        ans.b = re1.b - re2.b;
        ans.c = re1.c - re2.c;
        return ans;
    }
    double solver:: solve(RealVariable &re){
        double d;
        if(re.a == 0)
        {
            if(re.b == 0)
            {
                throw("there is no solution");
            }
            d = (-(re.c))/(re.b);
        }else
        {
            if(re.b == 0)
            {
                if(re.c>0){
                    throw("there is no solution");
                }
                d = sqrt((-(re.c))/(re.a));
            }else
            {
                d = quadratic_equation(re.a , re.b , re.c);
            }  
        }
        
        return d;
    }

    double solver:: quadratic_equation(double a , double b, double c){
        double x1 , x2 , delta;
        
            delta = b * b - 4 * a * c;
            x1=(-b+sqrt(delta))/2*a;
            x2=(-b-sqrt(delta))/2*a;
            return x1;
        
    }

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