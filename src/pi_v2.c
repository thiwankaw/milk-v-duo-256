#include <stdio.h>
#include <unistd.h>

#include <wiringx.h>

int main() {

    int steps = 25;
    float pi = 0.0;

//todo: this code need fixing

    for(i=1;i<steps+1;i++) {
        pi = pi + 4*(((-1)^i)/(2*i + 1));
        printf("Iteration number %d's value :",i);
        printf("%f\n",pi)
    }

    return 0;
}
