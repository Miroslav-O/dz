#include<iostream>
#include<vector>

int main(){

    int N;
    std::cout << "enter how many elements in massive:\t";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    int summ = 0; 
    std::cout << "Massive A -\t";
    for (int i = 0; i < A.size(); i++){
        A[i] = (rand() % 21) - 10;
        std::cout << A[i] << "\t";
        if (A[i] < 0){
            summ += A[i]; 
        }
    }
    std::cout << "\n" << summ << "\n"; 
    A.clear();
    std::cout << "============================================================================================\n";
    std::cout << "enter how many elements in massive:\t";
    std::cin >> N;
    A.resize(N);
    summ = 0;
    std::cout << "Massive A -\t";
    for (int i = 0; i < A.size(); i++){
        A[i] = rand() % 101;
        std::cout << A[i] << "\t";
        if ( A[i] < 50){
            summ += A[i];    
        }
    }
    std::cout << "\n" << summ << "\n";
    A.clear();
    std::cout << "============================================================================================\n";
    std::cout << "enter how many elements in massive:\t";
    std::cin >> N;
    A.resize(N);
    summ = 0;
    int mountain = 0;
    std::cout << "Massive A -\t";
    for (int i = 0; i < A.size(); i++){
        A[i] = rand() % 3 + 10;
        std::cout << A[i] << "\n";
    }
    for (int i = 0; i < A.size(); i++){
        int n = 1;
        while (A[i] == A[i+n]){
            n++;
        }
        if (n > mountain){
            mountain = n;
        }
    }
    std::cout << "\n" << mountain << "\n";
    A.clear();
    std::cout << "============================================================================================\n";
    return 0;











}
