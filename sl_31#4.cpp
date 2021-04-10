#include<iostream>
#include<vector>

int main(){

    int N;
    std::cout << "enter how many elements in massive:\t";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    int even_counter = 0;
    int odd_counter = 0;
    int counter_of_positive_and_even_numbers = 0;
    std::cout << "enter " << A.size() << " numbers:\n";
    for (int i = 0; i < A.size(); i++){
        std::cin >> A[i];
        if ( A[i] % 2 == 0){
            even_counter++;
        }
        if (A[i] % 2 == 1){
            odd_counter++;   
        }
        if (A[i] % 2 == 0 && A[i] > 0){
            counter_of_positive_and_even_numbers++;
        }
    }
    for (int i = 0; i < A.size(); i++){
        std::cout << A[i] << "\t";
    }

    std::cout << "\nquality of even numbers = " << even_counter << "\n";
    std::cout << "quality of odd numbers = " << odd_counter << "\n";
    std::cout << "quality of positive and even numbers = " <<  counter_of_positive_and_even_numbers << "\n";

    return 0;
}
