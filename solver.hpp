
//using namespace complex
namespace solver{
    class RealVariable
    {
    private:      
    public:
    friend RealVariable operator^(const int &num, const RealVariable &re);
    friend RealVariable operator*(const RealVariable &re, const int &num);
    friend RealVariable operator-(const int &num, const RealVariable &re);
    friend RealVariable operator/(const int &num, const RealVariable &re);
    friend RealVariable operator==(const RealVariable &re1, const RealVariable &re2);
    friend std::ostream& operator<<(std::ostream os, const RealVariable &re);
    };

    class ComplexVariable
    {
    private:
   
    public:
    friend ComplexVariable operator^(const ComplexVariable &co,const int &num);
    friend ComplexVariable operator*(const int &num, const ComplexVariable &co);
    friend ComplexVariable operator-(const int &num, const ComplexVariable &co);
    friend ComplexVariable operator/(const int &num, const ComplexVariable &co);
    friend ComplexVariable operator==(const ComplexVariable &co1, const ComplexVariable &co2);
    friend std::ostream& operator<<(std::ostream os, const RealVariable &re);
 
    };




};