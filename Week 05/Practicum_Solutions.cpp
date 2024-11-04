#include <iostream>

//zad 1
void swap(int& n, int& m);
void doubleSwap(double& n, double& m);
void deleteIndex(int& n, int k);
void reverseNumber(int& n);
int howManyNumbers(int n);


int main() {
    
    //proverkaa za swap
    /*int n = 10;
    int m = 15;
    swap(n, m);
    std::cout << n << " " << m;*/

    //proverkaa za doubleSwap
    /*double n = 10.0;
    double m = 15.0;
    doubleSwap(n, m);
    std::cout << n << " " << m;*/

    //proverka za deleteIndex
    int n = 0;
    size_t k = 1;
    std::cin >> n >> k;
    deleteIndex(n, k);
    std::cout << n;



    return 0;
}

void swap(int& n, int& m) {

    int temp = n;
    n = m;
    m = temp;

}

void doubleSwap(double& n, double& m) {

    double temp = n;
    n = m;
    m = temp;

}

void deleteIndex(int& n, int k) {

    int newN = 0;
    int p = howManyNumbers(n);
            
        int temp = n;
        int br = 0;
        while (temp != 0) {

        br++;
        if (br != k) {

        int d = temp % 10;
        newN = 10 * newN + d;

        }
        temp /= 10;


                }
        reverseNumber(newN);
        n = newN;


}

void reverseNumber(int& n) {

    while (n != 0) {

        int d = n % 10;
        n = 10 * n + d;
        n /= 10;

    }

}

int howManyNumbers(int m) {

    int br = 0;
    while (m != 0) {

        br++;
        m /= 10;

    }
    return br;

}
