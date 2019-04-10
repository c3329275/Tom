#include<stdio.h>
#include<string.h>

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
       
        char text[50], mte; //mte (Message to Encrypt) made of 124 bytes
        int rn; //rotation number
        
        printf("Type your message to encrypt here:\n"); //will print the prompt to enter the message to encrypt
        scanf("\n %[^\n]s" , text); // ^ used to scan or read a line of text from a standard input
        printf("Enter an encryption number:\n");
        scanf("%d", &rn);
        for(rn = 0; text[rn] != '0' ; ++rn)
        {
            text = text[rn];
                if(mte >= 'A' && mte <= 'Z')
                {
                    mte = mte + rn;
                    if(text > 'Z')
                    {
                        mte = mte - 'Z' + 'A' -1;
                    }
                    text[rn] = mte;
                }
        }
        
        printf("Your message is %s \n", text);
    }
    


return 0;
}
