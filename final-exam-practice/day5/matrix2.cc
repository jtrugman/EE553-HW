#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    double** m;
    Matrix(int rows, int cols) : rows(rows), cols(cols), m(new double* [rows]){
        for (int i = 0; i < rows; i++)  
            m[i] = new double [cols];
    }
public:

    // constructor
    Matrix(int rows, int cols, double val) : Matrix(rows, cols) {
        for (int i = 0; i < rows; i++) {
            double* temp = m[i] = new double [cols];
            for (int j = 0; j < cols; j++)
                temp[j] = val;
        }
    }

    // copy constructor
    Matrix (const Matrix& orig) : rows(orig.rows), cols(orig.cols), m(new double* [rows]) {
        for (int i = 0; i < rows; i++){
            double* temp = m[i] = new double[cols];
            for (int j = 0; j < cols; j++)
                temp[j] = orig.m[i][j];
        }
    }
    // operator =
    Matrix& operator =(const Matrix& orig) {
        Matrix copy(orig);
        rows = orig.rows;
        cols = orig.cols;
        swap(m, copy.m);
        return *this;
    }

    // destructor
    ~Matrix() {
        for (int i = 0; i < rows; i++)
            delete [] m[i];
        delete [] m;
    }

};