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
                d = quadratic_equation_real(re.a , re.b , re.c);
            }  
        }
        
        return d;
    }

    double solver:: quadratic_equation_real(double a , double b, double c){
        double x1 , x2 , delta;
        
            delta = b * b - 4 * a * c;
            x1=(-b+sqrt(delta))/2*a;
            x2=(-b-sqrt(delta))/2*a;
            return x1;
        
    }

   ////////////////////////ComplexVariable///////////////////////////////
  
    //constructors

    ComplexVariable::ComplexVariable()
    {
        this->a = 0;
        this->b = 1;
        this->c = 0;
    }
    ComplexVariable::ComplexVariable(complex<double> a, complex<double> b, complex<double> c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }


   ComplexVariable& solver:: operator^( ComplexVariable &co,const double &num){
    ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        if(num == 0)
        {
            ans.a.imag(0);
            ans.a.real(0);
            ans.b.imag(0);
            ans.b.real(0);
            ans.c.imag(0);
            ans.c.real(1);
        }
        if(num == 1)
        {
            ans = co;
        }
        if(num == 2)
        {
            if(co.a.imag() != 0 || co.a.real() != 0)
            {
                throw("the degree can't be more then 2");
            }
            if(co.b.imag() != 0 || co.b.real() !=0)
            {
                ans.a.real((co*co).b.real());
                ans.a.imag((co*co).b.imag());
                ans.b.real((co*co).c.real());
                ans.b.imag((co*co).c.imag());
                // ans.a.real((co.b.real())*(co.b.real()));
                // ans.a.imag((co.b.imag())*(co.b.imag()));
                // ans.b.real(2*co.b.real()*co.b.imag()*co.c.real()*co.c.imag());
                // ans.b.imag
                // ans.c = (re.c)*(re.c);
                return ans;
            }
            ans.a = 0;
            ans.b = 0;
            ans.c.imag(co.c.imag()*co.c.imag());
            ans.c.real(co.c.real()*co.c.real());
        }
        return ans;
    }

    ComplexVariable& solver:: operator^(const double &num,  ComplexVariable &co){
        return co;
    }
    ComplexVariable& solver:: operator^( ComplexVariable &co1, ComplexVariable &co2){
        return co1;
    }
    ComplexVariable& solver:: operator+(ComplexVariable &co,const double &num){
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans.a.imag(co.a.imag());
        ans.a.real(co.a.real());
        ans.b.imag(co.b.imag());
        ans.b.real(co.b.real());
        ans.c.imag(co.c.imag());
        ans.c.real(co.c.real() + num);
        return ans;
    }
     ComplexVariable& solver:: operator+(const double &num , ComplexVariable &co){
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans = co + num;
         return ans;
    }
     ComplexVariable& solver:: operator+(ComplexVariable &co1, ComplexVariable &co2){
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans.a.imag(co1.a.imag() + co2.a.imag()) ;
        ans.a.real(co1.a.real() + co2.a.real()) ;
        ans.b.imag(co1.b.imag() + co2.b.imag()) ;
        ans.b.real( co1.b.real() + co2.b.real());
        ans.c.imag(co1.c.imag() + co2.c.imag()) ;
        ans.c.real(co1.c.real() + co2.c.real());
        return ans;
    }
    ComplexVariable& solver:: operator+(ComplexVariable &co,const std::complex<double> &c)
    {
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans.a.imag(co.a.imag());
        ans.a.real(co.a.real());
        ans.b.imag(co.b.imag());
        ans.b.real(co.b.real());
        ans.c.imag(co.c.imag() + c.imag());
        ans.c.real(co.c.real() + c.real());
        return ans;
    }
    ComplexVariable& solver:: operator+(const std::complex<double> &c,ComplexVariable &co)
    {
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans = co + c;
        return ans;
    }
    ComplexVariable& solver:: operator*(const double &num,  ComplexVariable &co){
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans = co *num;
        return ans;
    }
    ComplexVariable& solver:: operator*( ComplexVariable &co, const double &num){
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans.a.imag(co.a.imag() * num);
        ans.a.real(co.a.real() * num);
        ans.b.imag(co.b.imag() * num);
        ans.b.real(co.b.real() * num);
        ans.c.imag( co.c.imag() * num);
        ans.c.real(co.c.real() * num);
        return ans;
    }
     ComplexVariable& solver:: operator*( ComplexVariable&co1,  ComplexVariable &co2){
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        return ans;
    }
     ComplexVariable& solver:: operator-(const double &num,  ComplexVariable &co)
     {
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans = co - num;
        return ans;
     }
     ComplexVariable& solver:: operator-( ComplexVariable &co,const double &num)
     {
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans.a.imag(co.a.imag());
        ans.a.real(co.a.real());
        ans.b.imag(co.b.imag());
        ans.b.real(co.b.real());
        ans.c.imag (co.c.imag());
        ans.c.real(co.c.real() - num);
        return ans;
     }
     ComplexVariable& solver:: operator-( ComplexVariable &co1,  ComplexVariable &co2)
     {
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans.a.imag (co1.a.imag() - co2.a.imag());
        ans.a.real (co1.a.real() - co2.a.real());
        ans.b.imag (co1.b.imag() - co2.b.imag());
        ans.b.real(co1.b.real() - co2.b.real());
        ans.c.imag (co1.c.imag() - co2.c.imag());
        ans.c.real (co1.c.real() - co2.c.real());
        return ans;
     }
    ComplexVariable& solver:: operator-(ComplexVariable &co,const std::complex<double> &c)
    {
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans.a.imag(co.a.imag());
        ans.a.real (co.a.real());
        ans.b.imag (co.b.imag());
        ans.b.real (co.b.real());
        ans.c.imag (co.c.imag() - c.imag());
        ans.c.real (co.c.real() - c.real());
        return ans;
    }
    ComplexVariable& solver:: operator-(const std::complex<double> &c,ComplexVariable &co)
    {
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans = co - c;
        return ans;
    }
    ComplexVariable& solver:: operator/(const double &num,  ComplexVariable &co){return co;}
    ComplexVariable& solver:: operator/(  ComplexVariable &co, const double &num)
    {
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans = co * (1/num);
        return ans;
    }
     ComplexVariable& solver:: operator/( ComplexVariable &co1,  ComplexVariable &co2){return co1;}
     ComplexVariable& solver:: operator==(const double &num,  ComplexVariable &co)
     {
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans = num - co;
        return ans;
     }
     ComplexVariable& solver:: operator==( ComplexVariable &co, const double &num)
     {
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans = co - num;
        return ans;
     }
     ComplexVariable& solver:: operator==( ComplexVariable &co1,  ComplexVariable &co2)
     {
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans = co1 - co2;
        return ans;
     }
    ComplexVariable& solver:: operator==(ComplexVariable &co, std::complex<double> &c){
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans = co - c;
        return ans;
      }
    ComplexVariable& solver:: operator==(std::complex<double> &c,ComplexVariable &co){
        ComplexVariable* ans1 = new ComplexVariable;
        ComplexVariable& ans = *ans1;
        ans = c - co;
        return ans;
    }
    complex<double> solver:: solve(ComplexVariable &co){
        complex<double> ans;
        complex<double> a = co.a;
        complex<double> b = co.b;
        complex<double> c = co.c;
        if(co.a.real() == 0 && co.a.imag() == 0)
        {
            if(co.b.real() == 0 && co.b.real() == 0)
            {
                throw("there is no solution");
            }

            ans = (-(c))/(b);
        }else
        {
            if(b.real() == 0 && b.imag() == 0)
            {
                // if(c.real() > 0){
                //     throw("there is no solution");
                // }
                ans = sqrt((-(c))/(a));
            }else
            {
                ans = quadratic_equation_comp(a , b , c);
            }  
        }
        return ans;
    }

    complex<double> solver:: quadratic_equation_comp(complex<double> a , complex<double> b, complex<double> c)
    {
        complex<double> d = sqrt(pow(b,2)- 4.0*a*c);
        complex<double> r1 = (-b + d)/(2.0*a);
        return r1;
    }