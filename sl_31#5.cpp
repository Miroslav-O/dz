#include<iostream>
#include<vector>

int main(){

    int N;
    std::cout << "enter how many elements in massive:\t";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    int counter = 0;
    int counter2 = 0;
    std::cout << "enter " << A.size() << " numbers:\n";
    for (int i = 0; i < A.size(); i++){
        std::cin >> A[i];
        if ( A[i] != 0 ){
            if ( (A[i] % 100) / 10 == A[i] % 10){
                counter2++;
            }
        }
        if ( (A[i] % 100) / 10 == 5){
            counter++;
        }
    }
    for (int i = 0; i < A.size(); i++){
        std::cout << A[i] << "\t";
    }
    std::cout << "\nnumbers = " << counter << "\n";
    std::cout << "numbers = " << counter2 << "\n";

    return 0;
}
