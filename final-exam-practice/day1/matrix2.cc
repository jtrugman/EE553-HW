#include <iostream>
using namespace std;

class Matrix{
private:
    uint32_t rows, cols;
    double **m;
    Matrix(uint32_t rows, uint32_t cols) : rows(rows), cols(cols), m(new double*[rows]){
        for (uint32_t i = 0; i < rows; i++)
        m[i] =  new double[cols];
    }
public:
    Matrix(uint32_t rows, uint32_t cols, double val) : Matrix(rows, cols) {
        for (int i = 0; i < rows; i++) {
            double* temp = m[i] = new double [cols];
            for (int j = 0; j < cols; j++)
                temp[j] = val;
        }
    }

    Matrix(const Matrix& orig) :  rows(orig.rows), cols(orig.cols), m(new double*[rows]){
        for (uint32_t i = 0; i < rows; i++){
            double* temp = m[i] = new double [cols];
            for (int j = 0; j < cols; j++)
                m[i][j] = orig.m[i][j];
        }
    }

    Matrix& operator= (Matrix& orig) : rows(orig.rows), cols(orig.cols), m(new double* [rows]){
        Matrix copy(orig);
        swap(m, copy.m);
        rows = orig.rows;
        cols = orig.cols;
        return *this;
    }
}


int main(){
    Matrix a( 4, 3, 0.0);
    a(2,2) = 1.5;
    a[2][1] = 2.5;
    Matrix b( 4, 3, 0.0);
    b(1,2) = 1.2;
    b(0,0) = -1.1;
    Matrix c = a + b;
    cout << c << '\n';

    Matrix d( 3, 2, 1.0); // 4x3 x 3x2 = 4x2 matrix
    Matrix e = a * d;

    cout << e << '\n';

    b = d;
    cout << d << '\n';

}