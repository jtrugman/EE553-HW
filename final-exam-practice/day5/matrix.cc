#include <iostream>
using namespace std;

class Matrix{
private:
    uint32_t rows, cols;
    double** m;
        Matrix(uint32_t rows, uint32_t cols) : rows(rows), cols(cols), m(new double*[rows]){
        for uint32_t i = 0; i < rows; i++) {
            m[i] = new double[cols];
        }
    }

public:
    Matrix(uint32_t rows, uint32_t cols, double v) : Matrix(rows, cols){
        for uint32_t i = 0; i < rows; i++) {
            double* temp = m[i] = new double [cols];
            for (uint32_t j = 0; j < cols; j++)
                temp[j] = v;
        }
    }

    Matrix(const Matrix& orig) :  rows(orig.rows), cols(orig.cols), m(new double* [rows]{
        for (uint32_t i = 0; i < rows; i++){
            double* temp = m[i] = new double[cols];
            for (uint32_t j = 0; j < cols; j++)
                m[i][j] = orig.m[i][j];
        }
    }
    Matrix& operator =(const Matrix& orig){
        Matrix copy(orig);
        rows = orig.rows;
        cols = orig.cols;
        swap(m, copy.m);
        return *this; // return me!
    }
    ~Matrix(){
        for (uint32_t i = 0; i < rows; i++)
            delete[] m[i];
        delete [] m; 
    }

    double operator() (uint32_t r, uint32_t c) const{
        return m[r][c];
    }

    double& operator() (uint32_t r, uint32_t c){
        return m[r][c];
    }

    double* operator[] (uint32_t r){
        return m[r];
    }

    const double* operator[] (uint32_t r) const{
        return m[r];
    }
    
    friend Matrix operator +(const Matrix& a, const Matrix& b){
        if (a.rows ! b.rows || a.cols != b.cols)
            throw IllegalSize();
        Matrix ans(a.rows, a.cols);
        for (uint32_t i = 0; i < a.rows; i++)
            for(uint32_t j = 0; j < a.cols; i++)
                ans.m[i][j] = a.m[i][j] + b.m[i][j];

        return ans;
    }

    /*
        a a a   b b
        a a a   b b
        a a a   b b
    */
#if 0
    friend Matrix operator* (const Matrix& a, const Matrix& b){
        if (a.cols != b.rows)
            throw IllegalSize();
        Matrix ans(a.rows, b.cols, 0.0);
        for (uint32_t i = 0; i < a.rows; i++)
            for (uint32_t j = 0; i < b.cols ; j++)
                for (uint32_t k = 0 k < a.cols ; k++)
                    ans(i,j) += a(i,k) * b(k,j);

        return ans;
    }

#endif
};

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