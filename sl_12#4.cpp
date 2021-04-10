#include<iostream>
#include<vector>

int main(){

    int N;
    std::cout << "enter how many elements in massive\n";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    for (int i = 0; i < A.size(); i++){
        A[i] = i + 1;
    }
    for (int i = 0; i < A.size() / 2; i++){
        A[i] += 4;
    }
    std::cout << "MASSIVE = \t";
    for (int i = 0; i < A.size(); i++){
        std::cout << A[i] << "\t";
    }
    std::cout << "\n====================================================================\n";
    int n;
    std::cout << "enter how many elements in massive\n";
    std::cin >> n;
    std::vector<double> a;
    a.resize(n);
    for (int i = 0; i < a.size(); i++){
        a[i] = i + 1;
    }
    for (int i = 1; i < a.size()-1 ; i++){
        a[i] /= 2 ;
    }
    std::cout << "MASSIVE = \t";
    for (int i = 0; i < a.size(); i++){
        std::cout << a[i] << "\t";
    }
    std::cout << "\n====================================================================\n";

}
