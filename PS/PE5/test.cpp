/*

James McDonald, Chakrya Ros
PE5
Test case for Rectangle.h/cpp

-One error found when passing a p1 > p2 when contructing rectangle.

*/

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "Rectangle.h"


TEST_CASE ( "Factorials are computed", "[factorial]") {
  REQUIRE( Factorial(1) == 1 );
  REQUIRE( Factorial(2) == 2 );
  REQUIRE( Factorial(3) == 6 );
  REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE ( "A rectangle is created and its functions tested") {
  
  Point ll = {0,0};
  Point ur = {3,2};
  
  Point wayright = {10,10};
  Point uur = {5,5};
  
  Rectangle rect(ll,ur);
  Rectangle rect2(ll,uur);
  Rectangle rect3(uur,wayright);  
  int i = 0;
  Point p1_out;
  Point p2_out;
  bool test_bool;
  
  SECTION("Test width getter"){
    
    i = rect.GetWidth();
    
    REQUIRE(i == 3);
    
  }
  
  SECTION("Test height getter"){
    
    i = rect.GetHeight();
    
    REQUIRE(i == 2);
    
  }
  
  SECTION("Test overlap function is true"){
    
    test_bool = rect.Overlaps(rect2);
    
    REQUIRE(test_bool == true);
    
  }
  
  SECTION("Test overlap function is false"){
    
    test_bool = rect.Overlaps(rect3);
    
    REQUIRE(test_bool == false);
    
  }
  
  SECTION("Test area calculator function"){
    
    i = rect3.CalculateArea();
    
    REQUIRE(i == 25);
    
  }
  
  SECTION("Test expand function"){
    
    rect3.Expand();
    p1_out = rect3.get_p1();
    p2_out = rect3.get_p2();
    
    REQUIRE(p1_out.x == 4);
    REQUIRE(p1_out.y == 4);
    REQUIRE(p2_out.x == 11);
    REQUIRE(p2_out.y == 11);
    
  }
  
  SECTION("Test shrink function"){
    
    rect3.Shrink();
    p1_out = rect3.get_p1();
    p2_out = rect3.get_p2();
    
    REQUIRE(p1_out.x == 6);
    REQUIRE(p1_out.y == 6);
    REQUIRE(p2_out.x == 9);
    REQUIRE(p2_out.y == 9);
    
  }
  
}

