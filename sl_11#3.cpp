#include<iostream>
#include<vector>

int main(){
    //2
    int N;
    std::cout << "enter how many elements in massive\n";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    for (int i = 0; i < A.size(); i++){
        A[i] = i + 1;
    }
     for (int i = 0; i < A.size(); i++){
        std::cout << A[i] << "\n";
    }
    //1
    std::cout << "=========================================================================================\n";
    int n;
    std::cout << "enter how many elements in massive\n";
    std::cin >> n;
    std::vector<int> a;
    a.resize(n);
    for (int i = 0; i < a.size(); i++){
        a[i] = 0;
        std::cout << a[i] << "\n";
    }
    //3
    std::cout << "========================================================================================\n";
    std::vector<int> ab;
    std::cout << "enter number for massive\n";
    int x;
    std::cin >> x;
    std::cout << "enter how many elements in massive\n";
    int nn;
    std::cin >> nn;
    ab.resize(nn);
    for (int i = 0; i < ab.size(); i++){
        ab[i] = x;
        x++;
        std::cout << ab[i] << "\n";
    }

    return 0;
}
# dz
# dz
# dz
