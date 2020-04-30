// #include "doctest.h"
// #include "solver.hpp"
// using namespace solver;
// #include <string>
// using namespace std;
//     RealVariable x;
//     ComplexVariable y;
// TEST_CASE ("realVariable"){
// CHECK(solve(2*x-4 == 10) == double(7));
// CHECK(solve((x^2) == 16) == double((4)|| double(-4)));
// CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == (double(4)||(-4)));
// CHECK_THROWS(solve((x^2) == -16));
// CHECK_THROWS(solve((x^2) == -3));
// CHECK_THROWS(solve((x^2)+8 == -3));
// CHECK_THROWS(solve((x^2)+7 == -1));
// CHECK_THROWS(solve((x/0) == -16));
// CHECK(solve(2*x-4.0 == 10.0) == double(7));
// CHECK(solve(x+3==9.0) == double(6));
// CHECK(solve((x^2)+16==16) == double(0));
// CHECK(solve((x^2)+2*x+2==2) == (double(0)||double(2)));
// CHECK(solve(2*(x^2)+8==10) == (double(1) || double(-1)));
// CHECK(solve(3+(x^2)==12) == (double(3)||double(-3)));
// CHECK(solve((x^2)-5*x+6==2) == (double(4)||double(1)));
// CHECK(solve((x^2)-x-6==0) == (double(3)||double(-2)));
// CHECK(solve((x^2)-25 == 0) == double((5)|| double(-5)));
// CHECK(solve((x^2)+1==10) == double((3)|| double(-3)));
// CHECK(solve(x+15==3) ==  double(-12));
// CHECK(solve(-15+2*x==5) == double(10));
// CHECK(solve(x+x==2) == double(1));
// CHECK(solve((x^2)+4==20) == (double((4)|| double(-4))));
// CHECK(solve(2*x+3==6) == double(1.5));
// CHECK(solve(90*x-9==81) == double(1));
// CHECK(solve(3*(x^2)-4*x==0) == (double(0)|| double(0.75)));
// CHECK(solve((x^2)-4==0) == double((2)|| double(-2)));
// CHECK(solve(4*(x^2)+12*x+9==0) == double(-1.5));
// CHECK(solve(2*x-6==-8) == double(-1));
// CHECK(solve(2*(x^2)-5*x==0) == double((0)|| double(2.5)));
// CHECK(solve(x-7/x==6) == double((7)|| double(-1)));
// CHECK(solve((x^2)-5*x+6==0) == (double((3)|| double(2))));
// CHECK(solve(6*x-x-4*x-12 == 10) == double(22));
// CHECK(solve(x+1==0) == double(-1));
// CHECK(solve(2*(x^2)==0) == double(0));
// CHECK(solve(-1*x+3==1) == double(2));
// CHECK(solve(2*x-4==10) == double(7));
// CHECK(solve(3*(x^2)==48) == double((4)|| double(-4)));
// CHECK(solve(2*x-6==-8) == double(-1));
// CHECK(solve(6*(x^2)==54) == double((3)|| double(-3)));
// CHECK(solve(9*(x^2)-6*x==-1) == double(0.33333));
// CHECK(solve(10*x==10) == double(1));
// CHECK(solve(8*(x^2)-14*x==15) == (double(2.5) || double(-0.75)));
// CHECK(solve(8*(x^2)-2*x==1) == (double(0.5)|| double(-0.25)));
// CHECK(solve(12*(x^2)-12==0) == double((1)|| double(-1)));
// CHECK(solve(2.5+0.075*x==0.1*x) == double(100));
// CHECK(solve(2*(x^2)-5*x==0) == double((0)|| double(2.5)));

// }
// TEST_CASE ("complexVariable"){

//     CHECK(solve(2*y-4 == 10) == complex<double>((double)7+0i));
//   //  CHECK(solve((y^2) == 16) == (complex<double>(4.0,0.0)) || solve((y^2) == 16) ==(complex<double>(-4.0,0)));
//    // CHECK(solve((y^2) == -16) == (complex<double>((double)0+4i)) || solve((y^2) == -16) ==(complex<double>((double)0-4i)));
//     CHECK(solve(y+5i == 2*y+3i) == complex<double>((double)0+2i));
//    // CHECK(solve(y+y == 4i) == complex<double>((double)0+2i));
//     CHECK(solve(y^2+2*y+1==0) == complex<double>((double)-1+0i));
//    // CHECK(solve(y+6==6i) == complex<double>((double)-6+6i));
//     ///CHECK(solve(y^2-8i==0) == complex<double>((double)2+2i) || solve(y^2-8i==0)==complex<double>((double)-2-2i));
//    // CHECK(solve(y+3i==2i) == complex<double>((double)0-i));
// }

// TEST_CASE ("check if the order is not change the answer"){

//     CHECK(solve(2*x-4 == 10) == solve(x*2-4 == 10));
//     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == solve((x^2) + 2*x + 2.0 + 2.0 == 10 + 10 + x/2*6.0 - x));
//     CHECK(solve(y+5i == 2*y+3i) == solve(y+5i == y*2+3i));
//     //CHECK(solve(y+6 == 6i) == solve(3+3+y == 6i));
//     //CHECK(solve((x^2)+16==16) == solve(12+4(x^2)==6+10));
//     CHECK(solve(2*(x^2)+8==10) == solve((x^2)*2+8-10==0));

// }

// TEST_CASE ("false cases"){
//     CHECK_FALSE(solve(2*x-4 == 10) == double(10));
//     CHECK_FALSE(solve((x^2) == 16) == double((6)|| double(-6)));
//     CHECK_FALSE(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == (double(6)||(-6)));
//     CHECK_FALSE(solve((x^2)+16==16) == double(20));
//     CHECK_FALSE(solve(2*y-4 == 10) == complex<double>((double)7+2i));
//    // CHECK_FALSE(solve((y^2) == 16) == complex<double>((double)8) || complex<double>((double)-8));
//   //  CHECK_FALSE(solve((y^2) == -16) == complex<double>((double)0) || complex<double>((double)4));
//     //CHECK_FALSE(solve(y+5i == 2*y+3i) == complex<double>((double)5i));
//     //CHECK_FALSE(solve(y+y == 4i) == complex<double>((double)20));
//     CHECK_FALSE(solve(2*x-4 == 10) == solve(x*2-4 == 8));
//     CHECK_FALSE(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == solve((x^2) + 2*x + 2.0 + 9.0 == 10 + x/2*6.0 - x));
//     CHECK_FALSE(solve(y+5i == 2*y+3i) == solve(y+5i == y+3i));
//   //  CHECK_FALSE(solve(y+6==6i) == solve(3-3+y==6i));
// }

#include "doctest.h"
#include "solver.hpp"
#include <string>

using namespace solver;
using namespace std;

RealVariable x;
ComplexVariable y;
    
TEST_CASE ("realVariable"){
CHECK(solve(2*x-4 == 10) == double(7));
CHECK(solve((x^2) == 16) == double((4)|| double(-4)));
CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == (double(4)||(-4)));
CHECK_THROWS(solve((x^2) == -16));
CHECK_THROWS(solve((x^2) == -3));
CHECK_THROWS(solve((x^2)+8 == -3));
CHECK_THROWS(solve((x^2)+7 == -1));
CHECK_THROWS(solve((x/0) == -16));
CHECK(solve(2*x-4.0 == 10.0) == double(7));
CHECK(solve(x+3==9.0) == double(6));
CHECK(solve((x^2)+16==16) == double(0));
CHECK(solve((x^2)+2*x+2==2) == (double(0)||double(2)));
CHECK(solve(2*(x^2)+8==10) == (double(1) || double(-1)));
CHECK(solve(3+(x^2)==12) == (double(3)||double(-3)));
CHECK(solve((x^2)-5*x+6==2) == (double(4)||double(1)));
CHECK(solve((x^2)-x-6==0) == (double(3)||double(-2)));
CHECK(solve((x^2)-25 == 0) == double((5)|| double(-5)));
CHECK(solve((x^2)+1==10) == double((3)|| double(-3)));
CHECK(solve(x+15==3) ==  double(-12));
CHECK(solve(-15+2*x==5) == double(10));
CHECK(solve(x+x==2) == double(1));
CHECK(solve((x^2)+4==20) == (double((4)|| double(-4))));
CHECK(solve(2*x+3==6) == double(1.5));
CHECK(solve(90*x-9==81) == double(1));
CHECK(solve(3*(x^2)-4*x==0) == (double(0)|| double(0.75)));
CHECK(solve((x^2)-4==0) == double((2)|| double(-2)));
CHECK(solve(4*(x^2)+12*x+9==0) == double(-1.5));
CHECK(solve(2*x-6==-8) == double(-1));
CHECK(solve(2*(x^2)-5*x==0) == double((0)|| double(2.5)));
CHECK(solve(x-7/x==6) == double((7)|| double(-1)));
CHECK(solve((x^2)-5*x+6==0) == (double((3)|| double(2))));
CHECK(solve(6*x-x-4*x-12 == 10) == double(22));
CHECK(solve(x+1==0) == double(-1));
CHECK(solve(2*(x^2)==0) == double(0));
CHECK(solve(-1*x+3==1) == double(2));
CHECK(solve(2*x-4==10) == double(7));
CHECK(solve(3*(x^2)==48) == double((4)|| double(-4)));
CHECK(solve(2*x-6==-8) == double(-1));
CHECK(solve(6*(x^2)==54) == double((3)|| double(-3)));
CHECK(solve(9*(x^2)-6*x==-1) == double(0.33333));
CHECK(solve(10*x==10) == double(1));
CHECK(solve(8*(x^2)-14*x==15) == (double(2.5) || double(-0.75)));
CHECK(solve(8*(x^2)-2*x==1) == (double(0.5)|| double(-0.25)));
CHECK(solve(12*(x^2)-12==0) == double((1)|| double(-1)));
CHECK(solve(2.5+0.075*x==0.1*x) == double(100));
CHECK(solve(2*(x^2)-5*x==0) == double((0)|| double(2.5)));
CHECK(solve(2*x-4 == 10) == double(7));
CHECK(solve((x^2) == 16) == double((4)|| double(-4)));
CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == (double(4)||(-4)));
CHECK_THROWS(solve((x^2) == -16));
CHECK_THROWS(solve((x^2) == -3));
CHECK_THROWS(solve((x^2)+8 == -3));
CHECK_THROWS(solve((x^2)+7 == -1));
CHECK_THROWS(solve((x/0) == -16));
CHECK(solve(2*x-4.0 == 10.0) == double(7));
CHECK(solve(x+3==9.0) == double(6));
CHECK(solve((x^2)+16==16) == double(0));
CHECK(solve((x^2)+2*x+2==2) == (double(0)||double(2)));
CHECK(solve(2*(x^2)+8==10) == (double(1) || double(-1)));
CHECK(solve(3+(x^2)==12) == (double(3)||double(-3)));
CHECK(solve((x^2)-5*x+6==2) == (double(4)||double(1)));
CHECK(solve((x^2)-x-6==0) == (double(3)||double(-2)));
CHECK(solve((x^2)-25 == 0) == double((5)|| double(-5)));
CHECK(solve((x^2)+1==10) == double((3)|| double(-3)));
CHECK(solve(x+15==3) ==  double(-12));
CHECK(solve(-15+2*x==5) == double(10));
CHECK(solve(x+x==2) == double(1));
CHECK(solve((x^2)+4==20) == (double((4)|| double(-4))));
CHECK(solve(2*x+3==6) == double(1.5));
CHECK(solve(90*x-9==81) == double(1));
CHECK(solve(3*(x^2)-4*x==0) == (double(0)|| double(0.75)));
CHECK(solve((x^2)-4==0) == double((2)|| double(-2)));
CHECK(solve(4*(x^2)+12*x+9==0) == double(-1.5));
CHECK(solve(2*x-6==-8) == double(-1));
CHECK(solve(2*(x^2)-5*x==0) == double((0)|| double(2.5)));
CHECK(solve(x-7/x==6) == double((7)|| double(-1)));
CHECK(solve((x^2)-5*x+6==0) == (double((3)|| double(2))));
CHECK(solve(6*x-x-4*x-12 == 10) == double(22));
CHECK(solve(x+1==0) == double(-1));
CHECK(solve(2*(x^2)==0) == double(0));
CHECK(solve(-1*x+3==1) == double(2));
CHECK(solve(2*x-4==10) == double(7));
CHECK(solve(3*(x^2)==48) == double((4)|| double(-4)));
CHECK(solve(2*x-6==-8) == double(-1));
CHECK(solve(6*(x^2)==54) == double((3)|| double(-3)));
CHECK(solve(9*(x^2)-6*x==-1) == double(0.33333));
CHECK(solve(10*x==10) == double(1));
CHECK(solve(8*(x^2)-14*x==15) == (double(2.5) || double(-0.75)));
CHECK(solve(8*(x^2)-2*x==1) == (double(0.5)|| double(-0.25)));
CHECK(solve(12*(x^2)-12==0) == double((1)|| double(-1)));
CHECK(solve(2.5+0.075*x==0.1*x) == double(100));
CHECK(solve(2*(x^2)-5*x==0) == double((0)|| double(2.5)));

}

TEST_CASE ("complexVariable"){
    CHECK(solve(2*y-4 == 10) == complex<double>(7.0,0));
  CHECK((solve((y^2)==16)==complex<double> (4.0,0.0) || solve((y^2)==16)==complex<double> (4.0,0.0)));
     CHECK((solve((y^2)==-16)==complex<double> (0.0,4.0) || solve((y^2)==-16)==complex<double> (0.0,-4.0)));
    CHECK((solve((y^2) == -16) == complex<double>(0.0,4.0) || solve((y^2) == -16) == complex<double>(0.0,-4.0)));
    CHECK(solve(y+5i == 2*y+3i) == complex<double>(0,2.0));
   // CHECK((solve(2*y == 4i) == complex<double>(0.0,2.0)));
   // CHECK(solve(y^2+2*y+1==0) == complex<double>(-1,0));
   // CHECK(solve(y+6==6i) == complex<double>(-6.0,6.0));
   // CHECK(solve(y^2-8.0i==0) == complex<double>(2.0,2.0) || solve(y^2-8.0i==0) == complex<double>(-2.0,-2.0));
   // CHECK(solve(y+3i==2i) == complex<double>(0,-1.0));
}

TEST_CASE ("check if the order is not change the answer"){
    CHECK(solve(2*x-4 == 10) == solve(x*2-4 == 10));
    CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == solve((x^2) + 2*x + 2.0 + 2.0 == 10 + 10 + x/2*6.0 - x));
    CHECK(solve(y+5i == 2*y+3i) == solve(y+5i == y*2+3i));
  // CHECK(solve(y+6==6i) == solve(3+3+y==6i));
    CHECK(solve((x^2)+16==16) == solve(12+4+(x^2)==6+10));
    CHECK(solve(2*(x^2)+8==10) == solve((x^2)*2+8-10==0));
}

TEST_CASE ("false cases"){
    CHECK_FALSE(solve(2*x-4 == 10) == double(10));
    CHECK_FALSE(solve((x^2) == 16) == double((6)|| double(-6)));
    CHECK_FALSE(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == (double(6)||(-6)));
    CHECK_FALSE(solve((x^2)+16==16) == double(20));
    CHECK_FALSE(solve(2*y-4 == 10) == complex<double>(7.0,2.0));
 //   CHECK_FALSE(solve((y^2) == 16) == complex<double>(8.0,0) || solve((y^2) == -16) == complex<double>(-8.0,0));
  //  CHECK_FALSE(solve((y^2) == -16) == complex<double>(0,0) || solve((y^2) == -16) == complex<double>(4.0,0));
    CHECK_FALSE(solve(y+5i == 2*y+3i) == complex<double>(0,5.0));
  //  CHECK_FALSE(solve(2*y == 4i) == complex<double>(20.0,0));
    CHECK_FALSE(solve(2*x-4 == 10) == solve(x*2-4 == 8));
    CHECK_FALSE(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == solve((x^2) + 2*x + 2.0 + 9.0 == 10 + x/2*6.0 - x));
    CHECK_FALSE(solve(y+5i == 2*y+3i) == solve(y+5i == y+3i));
 //   CHECK_FALSE(solve(y+6==6i) == solve(3-3+y==6i));
}
