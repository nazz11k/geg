#include "libaa.h"

int main() {
    int k, m;
    int* maxes=new int[m];
    int** mas=new int*[m];
    for(int i=0; i<m; i++){
        mas[i]=new int[k];
    }
    gen(mas, k ,m);
    outer(mas, k, m, "Original matrix:");
    counter(mas, k, m, maxes);
    sorter(mas, maxes, m);
    outer(mas, k, m, "Changed matrix:");
}
