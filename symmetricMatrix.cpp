#include <iostream>

using namespace std;

int main(){
    int rows = 3, columns = 3;
    int matrix[rows][columns] = {{9,8,7}, {6,5,4}, {3,2,1}};

    int isSymmetric = 1;

    for(int i = 0; i< rows; i++){
        for(int j = 0 ; j <columns; j++){
            if(matrix[i][j] != matrix[j][i]){
                isSymmetric = -1;
            }
        }
    }

    if(isSymmetric == 1){
        cout << "Matrices are symmetric" <<  endl;
    }
    else{
        cout << "Matrices are not symmetric" <<  endl;
    }
}