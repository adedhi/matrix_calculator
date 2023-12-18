#ifndef MATRIX_H
#define MATRIX_H

#define MAX_SIZE 4 // This program accepts square matrices of dimensions 2x2, 3x3, or 4x4

typedef struct{
    int size;
    double values[MAX_SIZE][MAX_SIZE];
} Matrix;

void getMatrix(Matrix *matrix);

void initializeMatrix(Matrix *matrix, int size); // Called after creating a Matrix and setting its size

int setSize(Matrix *matrix, int size);

int setValue(Matrix *matrix, int i, int j, double value);

int getSize(Matrix matrix);

double getValue(Matrix matrix, int i, int j);

void printMatrix(Matrix matrix);

void printInputMatrix(Matrix matrix, int next_position);

void printInverseMatrix(Matrix A, Matrix I);

double getDeterminant(Matrix matrix);

Matrix copyMatrix(Matrix originalMatrix, Matrix *newMatrix);

Matrix getREF(Matrix matrix);

Matrix getRREF(Matrix matrix);

Matrix getInverse(Matrix matrix);

#endif