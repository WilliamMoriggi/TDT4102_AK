#include "Matrix.h"
#include <assert.h>
#include <iostream>

Matrix::Matrix(int nRows, int nColumns){
    //assert(nRows >0, nColumns >0);
    R = nRows;
    C = nColumns;
    matrix = create_matrix(R, C);
}

double** Matrix::create_matrix(int rows, int columns) {
    double** matrix = new double*[rows];
    for(int i = 0; i < rows; i++) {
        matrix[i] = new double[columns]{};
    }
    return matrix;
}

double Matrix::get(int row, int col) const{
    return matrix[row][col];
}

void Matrix::set(int row, int col, double value){
    matrix[row][col] = value;
}

int Matrix::getRows() const{
    return R;
}

int Matrix::getColumns() const{
    return C;
}

double** Matrix::getMatrix(){
    return matrix;
}


Matrix::Matrix(const Matrix& rhs) : Matrix{rhs.getRows(), rhs.getColumns()}{
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            this->matrix[i][j] = rhs.matrix[i][j];
        }
    }
}

Matrix& Matrix::operator=(Matrix rhs){
    std::swap(R, rhs.R);
    std::swap(C, rhs.C);
    std::swap(matrix, rhs.matrix);
    return *this;
}


std::ostream& operator<<(std::ostream& os, const Matrix& mtrx){
    for(int i = 0; i < mtrx.getRows(); i++){
        for(int j = 0; j < mtrx.getColumns(); j++){
            os << mtrx.matrix[i][j] << " ";
        }
        os << '\n';
    }
    return os;
}



