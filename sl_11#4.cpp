#include<iostream>
#include<vector>

int main(){
    //1
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
    std::cout << "========================================================\n";
    int N;
    std::cout << "enter how many elements in massive\n";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    for(int i = 0; i < A.size(); i++){
        if (i == 0 || i == 1){
            A[i] = 1;
        } else {
            A[i] = A[i-2] + A[i-1];
        }
        std::cout << A[i] << "\n";
    }   














    return 0;
}
