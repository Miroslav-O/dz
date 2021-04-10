#include<iostream>
#include<vector>

int main(){

    int N;
    std::cout << "enter how many elements in massive:\t";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    double sr_ar = 0;
    int sum = 0;
    int umnoj = 1;
    std::cout << "Massive A - \t";
    for (int i = 0; i < A.size(); i++){
        A[i] = rand() % 401 - 100;
        std::cout << A[i] << "\t";
        if (A[i] < 50 ){
            sr_ar += A[i];
            sum++;
        }
        if ((A[i] > 0) && (A[i] % 2 == 0)){
            umnoj *= A[i];
        }
    }
    sr_ar /= sum;
    std::cout << "\nSR_Ar = " << sr_ar;
    std::cout << "\nProizvedenie = " << umnoj << "\n";






    return 0;
}
