#include "Matrix.hpp"
#include <iostream>
#include <vector>
using namespace std;
namespace zich{

        Matrix& Matrix::operator+(const zich::Matrix &num1){
            return *this;
        }

        Matrix operator+(const zich::Matrix &num1, const zich::Matrix &num2){
            return num1;  
        }

        Matrix operator+=(const zich::Matrix &num1, const int num2){
            return num1;
        }

        Matrix operator-(const zich::Matrix &num1){
            return num1; 
        }

        Matrix operator-(const zich::Matrix &num1, const zich::Matrix &num2){
            return num1;
        }

        Matrix& zich::Matrix::operator-=(const zich::Matrix &num1){
            return *this;
        }

        bool operator>(const zich::Matrix &num1,const zich::Matrix &num2){
            return true;
        }

        bool operator>=(const zich::Matrix &num1,const zich::Matrix &num2){
            return true;
        }

        bool operator<(const zich::Matrix &num1,const zich::Matrix &num2){
            return true;
        }

        bool operator<=(const zich::Matrix &num1,const zich::Matrix &num2){
            return true;
        }

        bool operator==(const zich::Matrix &num1,const zich::Matrix &num2){
            return true; 
        }

        bool operator!=(const zich::Matrix &num1,const zich::Matrix &num2){
            return true;
        }

        Matrix& Matrix::operator++(){
            return *this;
        }

        Matrix Matrix::operator++(int){
            return Matrix();
        }

        Matrix& Matrix::operator--(){
            return *this;
        }

        Matrix Matrix::operator-- (int){
            return Matrix();
        }

        Matrix Matrix::operator*( const zich::Matrix &num1){
            return num1;
        }

        Matrix operator*(const double n, const zich::Matrix &num1){
            return num1;
        }

        Matrix& Matrix::operator*=(double){
            return *this;
        }

        ostream& operator<<(ostream &os, const zich::Matrix &co){
            return os;
        }

        istream& operator>>(istream &is, zich::Matrix &co){
            return is;
        }
        
};