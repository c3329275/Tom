/*This code allows for encryption and decryption using a rotation cypher and a chosen key.
When this code is run the user will be presented with a menu. The user needs to type the corresponding upper case letter and hit <enter>.
The user will then be prompted to enter a string of text to be enncrypted/decrypted as well as to enter a number which is the key.
The encryption and decryption process will be computed using ASCII characters.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int
main ()
{


char choice; //initialises the choice which can be made

int A; //Initialises choice A

int B; //Initialises choice B

int C; //Initialises choice C

int D; //Initialises choice D

printf
    ("Type 'A' for ENCRYPTION using a rotation cipher \nType 'B' for DECRYPTION using a rotation cipher \nType 'C' for ENCRYPTION using a substitution cipher \nType 'D' for DECRYPTION using a substitution cipher \n");
    //Printf function will print the menu to the console for the user to read
scanf ("%c", &choice);
    //

if (choice == 'A')

    {



int rn;		//rotation number
      char text[1024], mte;	//mte (Message to Encrypt) made of 124 bytes


printf ("Type your message to encrypt here:\n");	//will print the prompt to enter the message to encrypt
      scanf ("\n %[^\n]s", text);	// ^ used to scan or read a line of text from a standard input
      printf ("Enter an encryption number:\n");

scanf ("%d", &rn);




int x;

for (x = 0; text[x] != '\0'; ++x)
	{

mte = text[x];

if (mte >= 'A' && mte <= 'Z')

	    {

mte = mte + rn;


if (mte > 'Z')
		{

mte = mte - 'Z' + 'A' - 1;

}

text[x] = mte;

}

}

printf ("The encrypted message is:\n%s", text);

return 0;

}




if (choice == 'B')
    {


int rn;		//rotation number
      char text[1024], mte;	//(char text [124]; initialises the string of text, mte (Message to Encrypt) made of 124 characters


printf ("Type your message to decrypt here:\n");	//will print the prompt to enter the message to decrypt
      scanf ("\n %[^\n]s", text);	// ^ used to scan or read a line of text from a standard input, [^\n] is used to detect white spaces
      printf ("Enter the decryption number:\n");	//Used to inform the user to input the decryption number
      scanf ("%d", &rn);

int x;

for (x = 0; text[x] != '\0'; ++x)
	{

mte = text[x];

if (mte >= 'A' && mte <= 'Z')

	    {

mte = mte - rn;


if (mte < 'A')
		{

mte = mte + 'Z' - 'A' + 1;

}

text[x] = mte;

}

}

printf ("The decrypted message is:\n%s", text);

return 0;

}

if(choice == 'C'){

    char text[1024];

    char alpha[26];

    printf("Type your message to encrypt here:\n");	//will print the prompt to enter the message to decrypt

    scanf("\n %[^\n]s", text);	// ^ used to scan or read a line of text from a standard input, [^\n] is used to detect white spaces

    printf("Enter the decryption number:\n");	//Used to inform the user to input the decryption number

    scanf("\n %s", alpha);

    int x;

for (x = 0; alpha[x] != '\0'; ++x)
	{
}
}
return 0;
}
