#include<iostream>
using namespace std;
bool check(int **arr,int row,int col,int val,int n)
{
    for(int i=0;i<n;i++){
        if(arr[row][i]==val){
            return false;
        }
        if(arr[i][col]==val){
            return false;
        } 
        if(arr[3*(row/3)+i/3][3*(col/3)+i%3]==val){
            return false;
        }
    }
    return true;
}
bool sudoku(int **arr,int n)
{   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                for(int k=1;k<=9;k++){
                    if(check(arr,i,j,k,n)){
                        arr[i][j]=k;
                        if(sudoku(arr,n)){
                            return true;
                        }
                        arr[i][j]=0;
                        //return false;
                    }
                }
                return false;
            }   
            //return false;     
        }
    }
    return true;    
}

int main()
{
    
    int **arr=new int *[9];
    for(int i=0;i<9;i++)
    {
        arr[i]=new int [9];
        for(int j=0;j<9;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"\n--------------------------------\n";
    for(int i=0;i<9;i++){
        //arr[i]=new int [9];
        for(int j=0;j<9;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n-----------------------------------\n";
    if(sudoku(arr,9))
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        } 
    }
}
/*
3 0 6 5 0 8 4 0 0
5 2 0 0 0 0 0 0 0
0 8 7 0 0 0 0 3 1
0 0 3 0 1 0 0 8 0
9 0 0 8 6 3 0 0 5
0 5 0 0 9 0 6 0 0
1 3 0 0 0 0 2 5 0
0 0 0 0 0 0 0 7 4
0 0 5 2 0 6 3 0 0 


OUTPUT:'
3 1 6 5 7 8 4 9 2 
5 2 9 1 3 4 7 6 8 
4 8 7 6 2 9 5 3 1 
2 6 3 4 1 5 9 8 7 
9 7 4 8 6 3 1 2 5 
8 5 1 7 9 2 6 4 3 
1 3 8 9 4 7 2 5 6 
6 9 2 3 5 1 8 7 4 
7 4 5 2 8 6 3 1 9
*/






