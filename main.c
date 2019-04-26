/*The first two sections of this code allows for encryption and decryption using a rotation cypher and a chosen key.
The third and fourth sections of the code will allow for encryption and decryption using a substitution cipher.

When this code is run the user will be presented with a menu. The user needs to type the corresponding upper case letter and hit <enter>.
The user will then be prompted to enter a string of text to be enncrypted/decrypted as well as to enter a rotation number.
The encryption and decryption process will be computed using ASCII characters.
For the Substitution cipher, the user will need to enter the substitution alphabet which will be a string of 26 CAPITAL LETTERS with no spaces between them.
If the user makes an error with any of the above steps it is recommended to re-run the program
*/


#include<stdio.h>		//allows for basic commands
#include<string.h>		//allows for the calculation of string length
#include<stdlib.h>
#include<ctype.h>





int
main ()				//Initialises the block of code
{




char choice;		//initialises the choice which can be made

int A;			//Initialises choice A

int B;			//Initialises choice B

int C;			//Initialises choice C

int D;			//Initialises choice D

int E;			//Shows the decrypted version of the given encrypted message

printf
    ("Type 'A' for ENCRYPTION using a rotation cipher \nType 'B' for DECRYPTION using a rotation cipher \nType 'C' for ENCRYPTION using a substitution cipher \nType 'D' for DECRYPTION using a substitution cipher \nType 'E' to show the DECRYPTED version of the DAY ONE provided code segment using a rotation cipher\n");


    //Printf function will print the menu to the console for the user to read
    scanf ("%c", &choice);	//accepts the users input for their choice in the menu


if (choice == 'A')		//if the user selects to encrypt text using a rotation cipher

    {





int rn;		//rotation number
      char text[1024], mte;	//mte (Message to Encrypt) made of 1024 characters


printf ("Type your message to encrypt here:\n");	//will print the prompt to enter the message to encrypt
      scanf ("\n %[^\n]s", text);	// scanf is used to scan or read a line of text from a standard input. The '[^\n]' allows it to recognise white space
      printf ("Enter an encryption number:\n");



scanf ("%d", &rn);	//scans for a rotation number as provided by the user




int x;		//initialises x. x = allows the computation of a single letter

for (x = 0; text[x] != '\0'; ++x)	// initialises x to start at zero, discounts whitespace, and increments x
	{



mte = text[x];	//reinitialises mte

if (mte >= 'A' && mte <= 'Z')	//A = 65 , Z = 90, so this section of code will be excecuted if if finds a letter from A-Z otherwise it will just copy it across... eg. a number will remain as is

	    {



mte = mte + rn;	//the dncoded letter plus the key, will produce the encoded letter


if (mte > 'Z')	//if the result of mte is greater than the ASCII code for 'Z'
		{



mte = mte - 'Z' + 'A' - 1;	//will recycle the alphabet

}



text[x] = mte;	//reinitialises text[x]

}



}



printf ("The encrypted message is:\n%s", text);



return 0;



}






if (choice == 'B')	//if the user selects to decrypt using a rotation cipher
    {




int rn;		//rotation number
      char text[1024], mte;	//(char text [124]; initialises the string of text, mte (Message to Encrypt) made of 124 characters


printf ("Type your message to decrypt here:\n");	//will print the prompt to enter the message to decrypt
      scanf ("\n %[^\n]s", text);	// ^ used to scan or read a line of text from a standard input, [^\n] is used to detect white spaces
      printf ("Enter the decryption number:\n");	//Used to inform the user to input the decryption number
      scanf ("%d", &rn);	//scans for a rotation number as provided by the user

int x;			//initialises x. x = allows the computation of a single letter

for (x = 0; text[x] != '\0'; ++x)	// initialises x to start at zero, discounts whitespace, and increments x
	{



mte = text[x];	//reinitialises mte

if (mte >= 'A' && mte <= 'Z')



	    {



mte = mte - rn;	//the encoded letter minus the key, will produce the decoded letter


if (mte < 'A')	//if the result of mte is smaller than the ASCII code for 'A'
		{



mte = mte + 'Z' - 'A' + 1;	//will recycle the alphabet

}



text[x] = mte;	//reinitialises text [x]

}



}



printf ("The decrypted message is:\n%s", text);



return 0;



}



if (choice == 'C')

    {



char text[1024];



char alphakey[26];





printf ("Type your text to encrypt here:\n");	//will print the prompt to enter the message to decrypt

scanf ("\n %[^\n]s", text);	// ^ used to scan or read a line of text from a standard input, [^\n] is used to detect white spaces

printf ("Enter the substitution alphabet:\n");	//Used to inform the user to input the substitution alphabet

scanf ("%s", alphakey);


int n = strlen (alphakey);



if (n % 26 != 0)

	{


printf ("Enter a 26 digit alphabet");


return 0;


}



int x;		//initialises x. x = allows the computation of a single letter

int y = strlen (text);	//y = length of text

char *etext = (char *) malloc (sizeof (char) * y);



for (int x = 0; x < y; x++)

	{


int b = (text[x]) - 'A';


if (b >= 0 && b < 26)

	    {



etext[x] = alphakey[b];	//reinitialises each individual encrypted letter at a paticular (etext

}


	  else

	    {


etext[x] = text[x];


}


}




printf ("The encrypted text is:\n%s", etext);



return 0;


}



if (choice == 'D')
    {


char text[1024];



char alphakey[26];


int locate (char alphakey[26], char ttf)
      {				//locate; allows the code to find and match the characters of the text to decrypt with the characters in the given alphakey
	//ttf = text to find
	int x;




for (int x = 0; x < 26; x++)
	  {


if (alphakey[x] == ttf)
	      {			//this segment

return x;

}

}

return 0;

}



printf ("Type your text to decrypt here:\n");	//will print the prompt to enter the message to decrypt

scanf ("\n %[^\n]s", text);	// ^ used to scan or read a line of text from a standard input, [^\n] is used to detect white spaces

printf ("Enter the substitution alphabet:\n");	//Used to inform the user to input the substitution alphabet

scanf ("%s", alphakey);


int n = strlen (alphakey);



if (n % 26 != 0)
	{



printf ("Enter a 26 digit alphabet");


return 0;

}

int y = strlen (text);




char *dtext = (char *) malloc (sizeof (char) * y);	//dtext = decrypted text

for (int x = 0; x < y; x++)
	{


int b = (text[x]) - 'A';


if (b >= 0 && b < 26)
	    {


int b = locate (alphakey, text[x]);


dtext[x] = 'A' + b;

}

	  else
	    {

dtext[x] = text[x];

}


}


printf ("The decrypted text is: \n%s", dtext);


return 0;

}


if (choice == 'E')
    {

printf
	("The first encrypted message provided on day one used a rotation code of 7, it read:\n'mon mothma: the data brought to us by the bothan spies pinpoints the exact location of the emperor's new battle station.\nWe also know that the weapon systems of this death star are not yet operational.\nWith the imperial fleet spread throughout the galaxy in a vain effort to engage us, it is relatively unprotected\nBut most important of all, we've learned that the emperor himself is personally overseeing the final stages of the construction of this death star. Many bothans died to bring us this information.'");

printf
	("\n\n\n The second encrypted message provided on day one used a rotation code of 14, it read:\n'Everybody is a genius. But if you judge a fish by its ability to climb a tree, it will live its whole life believing that it is stupid.\n- albert einstein'");

return 0;

}

}
