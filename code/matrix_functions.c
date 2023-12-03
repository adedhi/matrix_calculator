#include "matrix.h"

int setSize(Matrix *matrix, int size){
    if((size == 2) || (size == 3) || (size == 4)){
        matrix->size = size;
        return(1);
    } else{
        return(-1);
    }
}

int setValue(Matrix *matrix, int i, int j, double value){
    if(((0 <= i) && (i < getSize(*matrix))) && ((0 <= j) && (j < getSize(*matrix)))){
        matrix->values[i][j] = value;
        matrix->empty_indices[i][j] = 1;
        return(1);
    } else{
        return(-1);
    }
}

int getSize(Matrix matrix){
    return(matrix.size);
}

double getValue(Matrix matrix, int i, int j){
    if(((0 <= i) && (i < getSize(matrix))) && ((0 <= j) && (j < getSize(matrix)))){
        return(matrix.values[i][j]);
    }
}

int isEmpty(Matrix matrix, int i, int j){
    if(((0 <= i) && (i < getSize(matrix))) && ((0 <= j) && (j < getSize(matrix)))){
        return matrix.empty_indices[i][j];
    } else{
        return(-1);
    }
}