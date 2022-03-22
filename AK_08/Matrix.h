#include <iostream>

class Matrix{
    protected:
        int R;
        int C;
        double** matrix;
        double** create_matrix(int r, int columns);

    public:
        Matrix(int nRows, int nColumns);
        double get(int row, int col) const; 
        void set(int row, int col, double value);
        int getRows() const;
        int getColumns() const;
        double** getMatrix();
        friend std::ostream& operator<<(std::ostream& os, const Matrix& mtrx);
        Matrix(const Matrix & rhs);
        Matrix& operator=(Matrix d);

};