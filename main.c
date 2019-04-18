#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main()
{

    char choice;
    int A;
    int B;
    int C;
    int D;//

    printf("Type 'A' for ENCRYPTION using a rotation cipher \nType 'B' for DECRYPTION using a rotation cipher \nType 'C' for ENCRYPTION using a substitution cipher \nType 'D' for DECRYPTION using a substitution cipher \n");
    scanf("%c" , &choice);

if(choice == 'A')
    {


    int rn; //rotation number
    char text[124], mte; //mte (Message to Encrypt) made of 124 bytes


        printf("Type your message to encrypt here:\n"); //will print the prompt to enter the message to encrypt
        scanf("\n %[^\n]s" , text); // ^ used to scan or read a line of text from a standard input
        printf("Enter an encryption number:\n");
        scanf("%d", &rn);



int i;
for(i = 0; text[i] != '\0'; ++i){
mte = text[i]; //text to encrypt (tte)

    if (mte >= 'A' && mte <= 'Z')
    {
        mte = mte + rn;

        if(mte > 'Z'){
        mte = mte - 'Z' + 'A' -1;
        }
    text[i] = mte;
}
}
printf("The encrypted message is:\n%s" , text);
    }



return 0;
}
