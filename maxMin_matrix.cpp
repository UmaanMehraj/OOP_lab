#include<iostream>

using namespace std;

int main(){
    int rows = 3, columns = 3;

    int matrix[rows][columns] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int max = matrix[0][0], min = matrix[0][0];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
            }
        }
    }


    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(matrix[i][j] < min){
                min = matrix[i][j];
            }
        }
    }

    cout << "Largest element in matrix is: " << max << endl;
    cout << "Smallest element in matrix is: " << min << endl;

}