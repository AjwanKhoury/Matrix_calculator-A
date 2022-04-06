#include <string>
#include <iostream>
#include <vector>
using namespace std;
namespace zich
{

    class Matrix
    {
        private:
            vector<double> matrix; int column,row;
        public:
        //constractors 
        Matrix(){};
        Matrix(vector<double> matrix, unsigned int column, unsigned int row){}
        
        double getRow(){
            return row;
        }

        double getColumn(){
            return column;
        }
        
        Matrix &operator+(const Matrix &num1);
        friend Matrix operator+(const Matrix &num1, const Matrix &num2);
        friend Matrix operator+=(const Matrix &num1, const int num2);
        friend Matrix operator-(const Matrix &num1);
        friend Matrix operator-(const Matrix &num1, const Matrix &num2);
        Matrix &operator-=(const Matrix &num1);
        friend bool operator>(const Matrix &num1,const Matrix &num2);
        friend bool operator>=(const Matrix &num1,const Matrix &num2);
        friend bool operator<(const Matrix &num1,const Matrix &num2);
        friend bool operator<=(const Matrix &num1,const Matrix &num2);
        friend bool operator==(const Matrix &num1,const Matrix &num2);
        friend bool operator!=(const Matrix &num1,const Matrix &num2);
        Matrix &operator++(); 
        Matrix operator++(int);
        Matrix &operator--();
        Matrix operator--(int);
        Matrix operator*(const Matrix &num1);
        friend Matrix operator*(const double n, const Matrix &num1);
        Matrix &operator*=(double);
        friend ostream &operator<<(ostream &os, const Matrix &co);
        friend istream &operator>>(istream &is, Matrix &co);
    };
}