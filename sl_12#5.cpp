#include<iostream>
#include<vector>

int main(){

    int N;
    std::cout << "enter how many elements in massive\n";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    std::cout << "Massive = \t";
    for (int i = 0; i < A.size(); i++){
        A[i] = i + 1;
    }
    
    for (int i = 0; i < A.size(); i++){
        std::cout << A[i] << "\t";
    }

    std::cout << "\nNew Massive = \t";
    for (int i = A.size()/2; i < A.size(); i++){
        A[i] *= 3;
    }   
    for (int i = 0; i < A.size(); i++){
        std::cout << A[i] << "\t";
    }
    std::cout << "\n===============================================================\n";
    
    int HM;
    double sr_ar = 0;
    int num = 0;
    std::cout << "enter how many elements in massive\n";
    std::cin >> HM;
    std::vector<int> ab;
    ab.resize(HM);
    std::cout << "Enter " << ab.size() << " number:\n";
    for (int i = 0; i < ab.size(); i++){
        std::cout <<"\t\t";
        std::cin >> ab[i];
        sr_ar += ab[i];
        num++;
    }
    sr_ar /= num;
    std::cout << "average number = " << sr_ar << "\n=================================================================\n";
    
}      


