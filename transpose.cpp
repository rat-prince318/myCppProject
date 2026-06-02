#include <iostream>
using namespace std;

void transpose(int A[3][3], int AT[3][3]){
    for(int i = 0; i<3; i++){
        for(int j = 0 ; j<3 ; j++){
            AT[j][i]=A[i][j];
        }
    }
}

void printA(int A[3][3]){
    cout << "[";
    for(int i = 0; i<3; i++){
        cout << "[";
        for(int j = 0 ; j<3 ; j++){
            cout << A[i][j] << ",";
        }
        cout << "]" << endl;
    }
    cout << "]";
}

int main(void){
    int A[3][3] = {{1,2,3} ,{4,5,6},{7,8,9}};
    int AT[3][3];
    transpose(A, AT);
    printA(AT);
    return 0;
}