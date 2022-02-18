#include <iostream>
using namespace std;

int main() {
    int number,height,a,sum=0;
    scanf("%d%d", &number, &height);
    for (int i=0; i<number; i++) {
        scanf("%d", &a);
        if (a>height) {
            sum++;
        }
        sum++;
    }
    printf("%d\n",sum);
}
