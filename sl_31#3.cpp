#include<iostream>
#include<vector>

int main(){
    
    int N;
    std::cout << "enter how many elements in massive:\t";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    int counter3_1 = 0;
    int counter3_2 = 0;
    int counter3_3 = 0;
    int X;
    std::cout << "enter X what are you want in massive:\t";
    std::cin >> X;
    std::cout << "enter " << A.size() << " elements:\n";
    for (int i = 0; i < A.size(); i++){
        std::cin >> A[i];
        if (A[i] > 0){
            counter3_3++;
        }
        if (A[i] == X){
            counter3_2++;
        }
        if (A[i] == 1){
            counter3_1++;
        }
    }
    
    for (int i = 0; i < A.size(); i++){
        std::cout << A[i] << "\t";
    }
    std::cout << "\nquantity of 1 = " << counter3_1;
    std::cout << "\nquantity of " << X << " = " << counter3_2;
    std::cout << "\nquantity of possitive numbers = " << counter3_3 << "\n";

    return 0;
}
