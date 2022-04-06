#include <iostream>
#include "Matrix.hpp"
#include "doctest.h"
#include "vector"

using namespace std;
using namespace zich;

TEST_CASE("GOOD ONES"){
    bool Test;
    vector<double> v1= {0,0,0,0,0,0};
    vector<double> v2= {1,1,1,1,1,1};
    vector<double> v3= {1,4,5,6,9,8};
    CHECK_EQ(Matrix(v1,4,4)+Matrix(v2,4,4),Matrix({1,1,1,1,1,1},4,4));
    CHECK_EQ(Matrix(v1,4,4)+Matrix(v3,4,4),Matrix({1,4,5,6,9,8},4,4));
    CHECK_EQ(Matrix(v2,4,4)+Matrix(v3,4,4),Matrix({2,5,6,7,10,9},4,4));
    CHECK_EQ(Matrix(v2,2,2)-Matrix(v1,2,2),Matrix({1,1,1,1,1,1},2,2));
    CHECK_EQ(Matrix(v3,2,2)-Matrix(v1,2,2),Matrix({1,4,5,6,9,8},2,2));
    CHECK_EQ(Matrix(v3,2,2)-Matrix(v2,2,2),Matrix({0,3,4,5,8,7},2,2));
    CHECK_EQ(Matrix(v1,4,4)+Matrix(v1,4,4),Matrix({0,0,0,0,0,0},4,4));
    CHECK_EQ(Matrix(v2,4,4)+Matrix(v2,4,4),Matrix({2,2,2,2,2,2},4,4));
    CHECK_EQ(Matrix(v3,4,4)+Matrix(v3,4,4),Matrix({2,8,10,12,18,16},4,4));
    CHECK_EQ(Matrix(v1,4,4)*Matrix(v1,4,4),Matrix({0,0,0,0,0,0},4,4));
    CHECK_EQ(Matrix(v2,4,4)*Matrix(v2,4,4),Matrix({1,1,1,1,1,1},4,4));
    CHECK_EQ(Matrix(v3,4,4)*Matrix(v3,4,4),Matrix({1,16,23,36,81,64},4,4));
    CHECK_NE(Matrix(v1,4,4)+Matrix(v2,4,4),Matrix({1,8,1,19,1,1},4,4));
    CHECK_NE(Matrix(v1,4,4)+Matrix(v3,4,4),Matrix({7,4,5,6,9,8},4,4));
    CHECK_NE(Matrix(v2,4,4)+Matrix(v3,4,4),Matrix({8,5,6,7,10,9},4,4));
    CHECK_NE(Matrix(v2,2,2)-Matrix(v1,2,2),Matrix({1,1,1,1,1,3},2,2));
    CHECK_NE(Matrix(v3,2,2)-Matrix(v1,2,2),Matrix({1,4,5,19,9,8},2,2));
    CHECK_NE(Matrix(v3,2,2)-Matrix(v2,2,2),Matrix({0,3,8,5,8,7},2,2));
    CHECK_NE(Matrix(v1,4,4)+Matrix(v1,4,4),Matrix({0,0,6,0,0,0},4,4));
    CHECK_NE(Matrix(v2,4,4)+Matrix(v2,4,4),Matrix({2,2,2,2,2,6},4,4));
    CHECK_NE(Matrix(v3,4,4)+Matrix(v3,4,4),Matrix({2,8,10,12,13,16},4,4));
    

    




    

}