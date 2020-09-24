#include<stdio.h>

/* Prints the state of H2O if the temperature in degree celsius is given  */
void stateOfH2O(int temp) {

    if(temp > 100 || temp < 0) {
        printf("H2O is not liquid at this temperature\n");
    } 
    
    if(temp < 100 && temp > 0) {
        printf("H2O is liquid at this temperature\n");
    }

    if(temp==100) {
        printf("H2O is both liquid and gas\n");
    }

    if(temp==0) {
        printf("H2O is both liquid and solid\n");
    }

}

/* Checks if the two given numbers have the same sign */
int hasSameSign(int a, int b) {

    if(a>0 && b>0) {
        return 1;
    } else if(a<0 && b<0) {
        return 1;
    } else if(a==0 && b==0) {
        return 1;
    } else {
        return 0;
    }

}

int main(int argc, char** argv) {

    // args = a, b, temp
    // give 3 numbers as arguments

    if(argc == 4) {

        int a, b, temp;
        sscanf(argv[1], "%d", &a);
        sscanf(argv[2], "%d", &b);
        sscanf(argv[3], "%d", &temp);

        int flag = hasSameSign(a, b);
        if(flag==1) {
            printf("Same Sign\n");
        } else {
            printf("Different Sign\n");
        }

        stateOfH2O(temp);
    } else {
        printf("Please give three arguments for Number1, Number2, Temperature\nFor example:-\n./a.out -33 45 106\n");
    }

    return 0;
}