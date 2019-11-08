#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cout << "Enter Row of Matrix: ";
    cin >> row;
    cout << "Enter Column of Matrix: ";
    cin >> col;

    int matrix[row+3][col+3];
    cout << "Enter the given matrix: " << endl;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cin >> matrix[i][j];
        }
    }

    int pivot;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(matrix[i][j]!=0){
                pivot=matrix[i][j];
                for(int k=i+1; k<=row; k++){
                    if(matrix[k][j]!=0){
                        int r=matrix[k][j];

                        if(pivot==matrix[k][j]){
                            cout << "R" << k << "' = " << "R" << k << "-" << "R" << i << endl;
                            matrix[k][j]=0;
                            for(int q=j+1; q<=col; q++){
                                if(pivot==matrix[k][j]){
                                    matrix[k][q]=0;
                                }
                                else if(abs(pivot)==abs(matrix[k][j])){
                                    matrix[k][q]=matrix[k][q]*pivot + matrix[i][q]*r;
                                }
                                else{
                                    matrix[k][q]=matrix[k][q]*pivot - matrix[i][q]*r;
                                }
                            }
                        }
                        else if(abs(pivot)==abs(matrix[k][j])){
                            cout << "R" << k << "' = " << "R" << k << "+" << "R" << i << endl;
                            matrix[k][j]=0;
                            for(int q=j+1; q<=col; q++){
                                if(pivot==matrix[k][j]){
                                    matrix[k][q]=matrix[k][q]*pivot + matrix[i][q]*r;
                                }
                                else if(abs(pivot)==abs(matrix[k][j])){
                                    matrix[k][q]=0;
                                }
                                else{
                                    matrix[k][q]=matrix[k][q]*pivot - matrix[i][q]*r;
                                }
                            }
                        }
                        else{
                                bool flag=false;
                            //cout << "R" << k << "' = " << pivot << "R" << k << "-" << matrix[k][j] << "R" << i << endl;
                            cout << "R" << k << "' = " << pivot << "R" << k;
                            if(matrix[k][j]>0){cout << "+"; flag=true;}
                            cout << matrix[k][j] << "R" << i << endl;
                            matrix[k][j]=0;
                            for(int q=j+1; q<=col; q++){
                                if(pivot==matrix[k][j]){
                                    if(flag==true){matrix[k][q]=matrix[k][q]*pivot + matrix[i][q]*r;}
                                    else{matrix[k][q]=0;}
                                }
                                else if(abs(pivot)==abs(matrix[k][j])){
                                    if(flag==true){matrix[k][q]=0;}
                                    else{matrix[k][q]=matrix[k][q]*pivot - matrix[i][q]*r;}
                                }
                                else{
                                    if(flag==true){matrix[k][q]=matrix[k][q]*pivot + matrix[i][q]*r;}
                                    else{matrix[k][q]=matrix[k][q]*pivot - matrix[i][q]*r;}
                                }
                            }
                        }
                    }
                }
// if(abs(pivot)!=abs(matrix[k][j]))
                if(i!=row && j!=col){
                    for(int x=1; x<=row; x++){
                        for(int y=1; y<=col; y++){
                            cout << matrix[x][y] << " ";
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
                break;
            }
        }
    }
    return 0;
}



