#include <iostream>

using namespace std;

class Matrix {
private:
    int rows, cols;
    double** m;
    Matrix(int rows, int cols) : rows(rows), cols(cols), m(new double* [rows]){
        for (int i = 0; i < rows; i++)
            m[i] = new double[cols];
    }

public:
    // Constuctor
    Matrix(int rows, int cols, double val) : Matrix(rows, cols){
        for (int i = 0; i < rows; i++){
            double* temp = m[i] = new double [cols];
                for (int j = 0; j <  cols; j++)
                    temp[j] = val;
        }  
    }

    // Copy Constructor 
    Matrix(const Matrix& orig) : rows(orig.rows), cols(orig.cols), m(new double* [rows]){
        for (int i = 0; i < orig.rows; i++){
            double* temp = m[i] = new double [cols];
            for (int j = 0; j < orig.cols; j++)
                temp[j] = orig.m[i][j];
        }
    }

    // Operator= Constructor (copy & swap)
    Matrix(const Matrix& orig) : rows(orig.rows), cols(orig.cols), m(new double* [rows]){
        Matrix copy(orig);
        rows = orig.rows;
        cols = orig.cols;
        swap(m, copy.m);
        return *this;
    }

    // Deconstructor
    ~Matrix(){
        for (int i = 0; i < rows; i++)
            delete [] m[i];
        delete [] m;
    }

    friend ostream& operator<< (ostream& s, const Matrix& a){
        for (int i = 0; i < a.rows; i++){
            for (int j = 0; j < a.cols; j++){
                s << a(i,j) << '\t';
            }
            s << '\n';
        }
        return s;
    }

};


int main(){
    Matrix a( 4, 3, 0.0);
    cout << a << '\n';
   
    Matrix b( 4, 3, 0.0);
    cout << b << '\n';


    Matrix d(a); // 4x3 x 3x2 = 4x2 matrix
    cout << d << '\n';

    b = d;

    cout << b << '\n';
}