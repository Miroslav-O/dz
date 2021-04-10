#include<iostream>
#include<vector>

int main(){

    int N;
    std::cout << "enter how many elements in massive:\t";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    int specific_sum = 0;
    int specific_sum2 = 0;
    std::cout << "Massive A -\t";
    for (int i = 0; i < A.size(); i++){
        A[i] = rand() %899 +101;
        std::cout << A[i] << "\t";
        if ( ((A[i]/10)%10) > (A[i]%10)){
            specific_sum += A[i];
        }
        if ((((A[i]/100)%10)==((A[i]/10)%10)) && ((A[i]/10)%10)==(A[i]%10)){
            specific_sum2 += A[i];
        }
    }
    std::cout <<"\n#6 = " << specific_sum;
    std::cout <<"\n#7 = " << specific_sum2 << "\n";

    return 0;
}
