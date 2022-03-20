#include<iostream>
#include<vector>

using namespace std;

int prime(int n) {
    int count;

    vector<int> vect(n);

    for(int i = 2; i <= n;i++) {
        if(vect[i - 1] == 0) {
            count++;
            for(int j = 2 * i;j <= n;j++) {
                if(j % i == 0) {
                    vect[j - 1] = 1;
                }
            }
        }
    }

    return count;

}

int main() {
    int n = 100;

    cout<<"Total No. of prime no.s before "<<n<<" are "<<prime(n);
}
