#include<iostream>
#include<vector>

int main(){

    int N;
    std::cout << "enter how many elements in massive:\n";
    std::cin >> N;
    std::vector<int> A;
    A.resize(N);
    int num_n2;
    int max1 = -2147483647;
    int max2 = -2147483647;
    int num_n1;
    int min2 = 2147483647;
    int num_x1;
    int num_x2;
    int min1 = 2147483647;
    std::cout << "enter " << N << " numbers";
    for (int i = 0; i < A.size(); i++){
        std::cout <<"\t";
        std::cin >> A[i];
        if ( A[i] > max1 ){
            max2 = max1;
            max1 = A[i];
            num_x2 = num_x1;
            num_x1 = i;
        } else if ( A[i] > max2 ){
            max2 = A[i];
            num_x2 = i;
        }
        if ( A[i] < min1 ){
            min2 = min1;
            min1 = A[i];
            num_n2 = num_n1;
            num_n1 = i;
        } else if ( A[i] < min2 ){
            min2 = A[i];
            num_n2 = i;
        }
    }    
    std::cout << "minimal number is lockated in massive at " << num_n1 << " element position and it is number " << min1 << "\n";
    std::cout << "max number is lockated in massive at " << num_x1 << " element position and it is number " << max1 << "\n";
    if ( N != 1 ){
        std::cout << "second max number is lockated in massive at " << num_x2 << " element position and it is number " << max2 <<   "\n"; 
        std::cout << "second min number is lockated in massive at " << num_n2 << " element position and it is number " << min2 <<       "\n";
    } else {
        std::cout << "second max not exist\n";
        std::cout << "second min not exist\n";
    }
    std::cout << "====================================================================================================\n";
    return 0;
}
