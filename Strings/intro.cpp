/*

1.Character Set/ ASCII Codes
2.Character Array
3.String
4.Creating a String
                                                 ASCII   - American Standard Code for Information Interchange

1.ASCII Codes:- Set of characters supported by a programming language.For every letter or character there is a code available 

A-Z  --> (65-90)
a-z  --> (97-122)
0-9  --> (48-57)

there are a total of 128 ASCII codes 

Enter --> 10
Space --> 13
Escape (esc) --> 27 


To represent any one symbols 7 bits are sufficient , 2^7 = 128 bits

A character os stored in 1 bit in computer memory is stored
ASCII code becomes the subset of unicodes that


Unicodes (unicodes.org)

2-bytes 
16-bits 

4 x 4 bits 

C 0 3 5  --> 4 digits of hexadecimal 

2.
char temp;
temp='A';
printf("%c",temp);                                           --> prints A 
printf("%d",temp);                                           --> prints tje corresponding ascii code of A --> 65

char X[5];
char X[5] = {'A','B','C','D','E'};              
char X[5] = {'A','B','C','D','E'};
char X[5] = {65,66,67,68,69}; 


the above 3 arrays are the same.

char X[5] = {'A','B'};

X [A,B,0,0,0]

Array of characters --> char name[10] = {'J','o','h','n'};

Array characters is nothing but a string but with a null character --> '\0'.

String --> char name[10] = {'J','o','h','n','\0'};

'\0' --> Null character or string delimeter or end of string character or string terminator 


Declaring Strings
-----------------

char name[10] = {'J','o','h','n','\0'};
char name[ ] = {'J','o','h','n','\0'};
char name[10] = "John";
char *name="John";            // character pointer 
