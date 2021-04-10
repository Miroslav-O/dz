#include<iostream>
#include<vector>

int main(){
    
    int N;
    std::cout << "enter how many elements in massive:\t";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    int counter = 0;
    for (int i = 0; i < A.size(); i++){
        A[i] = rand() % 4 - 2;
        std::cout << A[i] << "\t";
        if (A[i] > 0){
            counter++;
        }
    }
    std::cout <<"\n" << counter << "\n";
    std::cout <<"=================================================================================================\n";
    
    int n;
    std::cout << "enter how many elements in massive:\t";
    std::cin >> n;
    std::vector<int> a;
    a.resize(n);
    int counter_chet = 0;
    int counter_nechet = 0;
    for (int i = 0; i < a.size(); i++){
        a[i] = rand() % 81 + 20;
        std::cout << a[i] << "\t";
        if ( a[i] % 2 == 0 ){
            counter_chet++;
        }
        if ( a[i] % 2 == 1){
            counter_nechet++;
        }
    }
    std::cout <<"\neven counter = " << counter_chet << "\todd counter = " << counter_nechet << "\n";
    std::cout <<"=================================================================================================\n";

    int DIGIT;
    std::cout << "enter how many elements in massive:\t";
    std::cin >> DIGIT;
    std::vector<int> Arr;
    Arr.resize(DIGIT);
    counter = 0;
    for (int i = 0; i < a.size(); i++){
        Arr[i] = rand() % 1001 + 1000;
        std::cout << Arr[i] << "\t";
        if ( (Arr[i] / 10) % 2 == 0){
            counter++;
        }
    }
    std::cout <<"\n" << counter << "\n";
    std::cout <<"=================================================================================================\n";
    return 0;
}
