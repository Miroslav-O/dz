#include<iostream>
#include<vector>
#include<cmath>


int main(){
    
    int N;
    std::cout << "enter how many elements in massive\n";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    for (int i = 0; i < A.size(); i++){
        A[i] = i + 1;
    }
    std::cout << "MASSIVE = \t";
    for (int i = 0; i < A.size(); i++){
        std::cout << A[i] << "\t";
    }

    std::cout <<"\nNEW MASSIVE = \t";
    for (int i = 0; i < A.size(); i++){
        A[i]++;
    }


    for (int i = 0; i < A.size(); i++){
        std::cout << A[i] << "\t";
    }
    std::cout << "\n==============================================================================\n";
    int n;
    std::cout << "enter how many elements in massive\n";
    std::cin >> n;
    std::vector<int> a;
    a.resize(n);
    for (int i = 0; i < a.size(); i++){
        a[i] = i + 1;
    }
    std::cout << "MASSIVE = \t";
    for (int i = 0; i < a.size(); i++){
        std::cout << a[i] << "\t";
    }
    std::cout <<"\nNEW MASSIVE = \t";
    for (int i = 0; i < a.size(); i++){
        a[i] *= 2;
    }
    for (int i = 0; i < a.size(); i++){
        std::cout << a[i] << "\t";
    }
    std::cout << "\n==============================================================================\n";
    int HM;
    std::cout << "enter how many elements in massive\n";
    std::cin >> HM;
    std::vector<int> ab;
    ab.resize(HM);
    for (int i = 0; i < ab.size(); i++){
        ab[i] = i + 1;
    }
    std::cout << "MASSIVE = \t";
    for (int i = 0; i < ab.size(); i++){
        std::cout << ab[i] << "\t";
    }
    std::cout <<"\nNEW MASSIVE = \t";
    for (int i = 0; i < ab.size(); i++){
        ab[i] = pow(ab[i] , 2);
    }
    for (int i = 0; i < ab.size(); i++){
        std::cout << ab[i] << "\t";
    }
    std::cout << "\n==============================================================================\n";

    return 0;
}
