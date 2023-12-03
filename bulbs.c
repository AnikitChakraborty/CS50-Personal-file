#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);



int main(void)
{
int toBinary[BITS_IN_BYTE];
int toDecimal;
string message = get_string("Message:\n");

int length = strlen(message);

for (int i = 0; i<length; i++){

    toDecimal =message[i];

    for (int j = BITS_IN_BYTE-1; j>=0; j--)
    {

     toBinary[j]= toDecimal%2;
     toDecimal/=2;
    }

    for(int k=0;k<BITS_IN_BYTE;k++){
        print_bulb(toBinary[k]);
       // printf("%i",);

    }
 printf("\n");

}





}


void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
