#include<iostream>

using namespace std;


int main(){
    int matrix[2][2] = {{1,2},{4,5}};
    int sum_row_1 = 0, sum_row_2 = 0,sum_col_1 = 0, sum_col_2 = 0;

    for(int i = 0; i < 2; i++){
        sum_row_1 += matrix[0][i];
        sum_row_2 += matrix[1][i];
    }

    cout << "Sum of rows is: " << sum_row_1 << " " << sum_row_2 << endl;
}