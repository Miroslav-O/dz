#include<iostream>
#include<vector>
#include<cmath>

int main(){
    std::cout << "enter how many elements in massive\n";
    int N;
    std::cin >> N;
    int Na;
    Na = N-1;
    std::vector<int> A;
    A.resize(Na);
    for (int i = 0; i < A.size(); i++){
        A[i] = pow(2 , (Na-i));
        
    }
    A.push_back(1);
    for (int i = 0; i < A.size(); i++){
        std::cout << A[i] << "\n";
    }
    std::cout << "===================================================================================\n";
    
    std::cout << "enter central number\n"; 
    int X;
    std::cin >> X;
    int tmp = X;
    int T = X;
    std::vector<int> a(2*X);
    for ( X; X > 0; X--){
        a[X] = X;
        std::cout << " a[X] = " <<a[X]<<"\n";
        std::cout << "X = " << X << "\n";
    }
    int i = tmp;
    while (tmp != 0 ){  
        a[i] = tmp;
        tmp--;
        i++;
    }

    for ( int i = 1; i < 2*T; i++){
        std::cout << a[i] << "\n";
    }
     std::cout <<                                                                                 "===================================================================================\n";
    return 0;
}
