// Programme to evaluate matrix addition and subtracrion

#include <iostream>

using namespace std;

int main(){
    int rows = 3, columns = 3;
    int matrix_1[rows][columns] = {{1,2,3},{4,5,6}, {7,8,9}};
    int matrix_2[rows][columns] = {{9,8,7}, {6,5,4}, {3,2,1}};

    int sumMatrix[rows][columns];
    int diffMatrix[rows][columns];
    int prodMatrix[rows][columns];
    int transMatrix[rows][columns];
    int diagonalSum = 0;


    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            sumMatrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            diffMatrix[i][j] = matrix_1[i][j] - matrix_2[i][j];
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            prodMatrix[i][j] = matrix_1[i][j] * matrix_2[i][j];
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            transMatrix[i][j] = matrix_1[j][i];
        }
    }

    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            diagonalSum += matrix_1[j][i];
        }
    }

    
    cout << "Sum matrix is: " << endl;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Difference matrix is: " << endl;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << diffMatrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Product matrix is: " << endl;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << prodMatrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose of matrix 1 is: " << endl;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << transMatrix[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "Diagonal sum of matrix 1 is: " << diagonalSum << endl;


    
    



}