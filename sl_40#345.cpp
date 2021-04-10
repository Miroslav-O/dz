#include<iostream>
#include<vector>

int main(){

    int N;
    std::cout << "enter how many elements in massive:\t";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    int X;
    std::vector<int> num(0);
    std::cout << "enter what are you want find in massive:\t";
    std::cin >> X;
    std::cout << "Massive A -\t";
    for (int i = 0; i < A.size(); i++){
        A[i] = rand() % 11 + 10;
        std::cout << A[i] << "\t";
    }
    for (int i = 0; i < A.size(); i++){
        if (A[i] == X){
            num.push_back(i);
        }
    }

    std::cout << "\n";
    if ( num.size() > 0 ){
        std::cout << "numbers:\n";
    } else {
        std::cout << "nothing number " << X << " in massive\n";
    }
    for (int i = 0; i < num.size(); i++){
        std::cout << "A[" << num[i] << "] = " << X << "\n";
    }

    std::cout <<"=======================================================================================\n";
    A.clear();
    num.clear();
    std::cout << "enter how many elements in massive:\t";
    std::cin >> N;
    A.resize(N);
    std::cout << "enter what are you want find in massive:\t";
    std::cin >> X;
    std::cout << "Massive A -\t";
    for (int i = 0; i < A.size(); i++){
        A[i] = rand() % 5;
        std::cout << A[i] << "\t";
    }
    for (int i = 0; i < A.size(); i++){
        if (A[i] == X){
        num.push_back(i);
        }
    }
    std::cout << "\n";
    if ( num.size() > 0 ){
        std::cout << "numbers:\n";
    } else {
        std::cout << "nothing number " << X << " in massive\n";
    }
    for (int i = 0; i < num.size(); i++){
        std::cout << "A[" << num[i] << "] = " << X << "\n";
    }
    std::cout <<"=======================================================================================\n";
    int counter = 0;
    for (int i = 1; i < A.size(); i++){
        if ( A[i] == A[i-1]){
            counter++;
        }
    }
    if (counter > 0){
        std::cout << "massive have the same neighboring elements. They number is " << counter << "\n";  
    }

    return 0;
}
