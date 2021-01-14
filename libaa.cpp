#include "libaa.h"

void gen(int** mas, int k, int m){
    for(int i=0; i<k; i++){
        for(int j=0; j<m; j++){
            mas[i][j]=rand()%2;
        }
    }
}

void counter(int** mas, int k, int m, int* maxes){
    int cur=0, max=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<k; j++){
            if(mas[i][j]==1){
                cur++;
            }
            else{
                if(cur>max){
                    max=cur;
                }
                cur=0;
            }
        }
        maxes[i]=max;
        max=0;
        cout<<i+1<<" - "<<maxes[i]<<endl;
    }
}

void sorter(int** mas, int* maxes, int m){
    int tmp1;
    int* tmp2;
    for(int i=0; i<m; i++){
        for(int j=0; j<m-i-1; j++){
            if(maxes[j]<maxes[j+1]){
                tmp1=maxes[j];
                tmp2=mas[j];
                maxes[j]=maxes[j+1];
                mas[j]=mas[j+1];
                maxes[j+1]=tmp1;
                mas[j+1]=tmp2;
            }
        }
    }
}

void outer(int** mas, int k, int m, string name){
    cout<<endl<<name<<endl;
    for(int j=0; j<m; j++ ){
        for(int i=0; i<k; i++){
            cout<<mas[i][j]<<"  ";
        }
    cout<<endl;
    }
    cout<<endl;
}