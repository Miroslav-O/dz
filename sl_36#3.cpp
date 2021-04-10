#include<iostream>
#include<vector>

int main(){

    int N;
    std::cout << "enter how many elements in massive:\t";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    int sum = 0;
    int neg_sum = 0;
    int specific_sum = 0;
    std::cout << "Massive A -\t";
    for (int i = 0; i < A.size(); i++){
        A[i] = (rand() % 100000) - 50000;
        std::cout << A[i] << "\t";
        sum += A[i];
        if ( A[i] < 0 ){
            neg_sum += A[i];
        }
        if ( A[i] % 3 == 0 ){
            specific_sum += A[i];
        }
    }
    std::cout << "\nAll Sum = " << sum;
    std::cout << "\nNegative Sum = " << neg_sum;
    std::cout << "\nSpecific Sum = " << specific_sum << "\n";








    return 0;
}
