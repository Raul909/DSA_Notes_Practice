#include <stdio.h> // --> headerphile generally used for c language and also available in c++ uses few library functions ex:-printf(for output) and scanf(for taking input),also format specifiers are used here.

#include <iostream> // --> headerphile generally available and used in C++ has ostream and istream functions which include cout(for output) and cin (for input)

//   <--Declaration of an array-->

int main()
{
    int A[5]; //just declaration
    int B[5] = { 2,
                 4,
                 6,
                 8,
                 10 } //declaration and initialization

    for (int i = 0; i < 5; i++) //accessing the arrays
    {
        printf("%d", B[i]);
    }
}

//the arrays A and B are stored in the stack (int main) section, generally when we take arrays they are stored in the main function of the stack memory

//  <--Structure-->

/*Stucture can be defined as collection of data members that are related to data members under one name.Collection or similar data items under
 one name i.e. grouping the data items.Structure is used for defining user defined data types.  */

//Structures are also stored in the main section of the stack memory

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    //taking a stucture to store the length and the breadth of the rectangle and store in a single collectivie data type
    struct Rectangle r;          //just declaration
    struct Rectangle r = {10, 5} //declaration and initialization

                         //to rewrite or change the members od a structure

                         r.length = 15; // --> value of length is completely changed from 10 to 15
    r.breadth = 10;                     // --> value of breadth is completely changed from 5 t0 10

    printf("Area of rectangle is %d,", r.length * r.breadth); // --->prints the area

    //taking a structure to store the real and imaginary part of a complex number and store it in a single collective data type
    struct complex
    {
        int real;
        int imaginary;
    };

    //taking a structure to store the details of a stucent and store it in a single collective data type
    struct student
    {
        int roll;
        char name[25];
        char dept[15];
        char address[50];
    };

    struct student s;
    s.roll = 10;
    s.name = "Raul";
    s.dept = "ETC";
    s.address = "kuch bhi likh do farak nahi padta";

    // --> arrays of structures

    //taking a structure to store the codes of the deck cards

    struct card
    {
        int face;
        int shape;
        int color;
    };
    int main()
    {
        struct card c; //only declaration
        c.face = 1;
        c.shape = 0;
        c.color = 0;

        struct card c = {1, 0, 0}; //other method to declare and initialize the structure

        struct card deck[52]; //declaring arrays of structures

        struct card deck[52] = {{1, 0, 0}, {2, 0, 0}..............the list goes on upto 52th time............} //declaring and initializing arrays of structures

        printf("%d", deck[0].face);  //prints the face code of the 0th card in the deck of 52 cards
        printf("%d", deck[0].shape); //prints the shape code of the 0th card in the deck of 52 cards
    }
}

//   <--Pointers-->

/*Pointer is an address variable that is meant for storing address of a data not data alone not data itself.Pointers are used for indirectly
accessing the data.Pointers are used to access the heap memory.Pointer is an address variable*/

/*Program cannot directly access hard disk files directly because hard disk and files are external to the program.Program will not directly access heap.
Heap memory is external to the program 

Uses of pointers:-1.Accessing the resources which are outside the program.
                  2.Pointers are used for accessing the Heap memory.
                  3.Pointers are used for parameter passing also
                  */

int main()
{
    int a = 10;
    int *p; //declaration
    p = &a; //initialization (address of a is given to p)

    printf("%d", a);
    printf("%d", *p); //-->dereferrencing
}

//allocating memory in the heap

int main()
{
    int *p

    p(int) malloc(5 * size of(int)); //Allocating memory in the heap -->> In C
    p = new int[5];                  //Allocating memory in the heap -->> In C++
                                     // Allocats an array of int type of size 5
}

//imp note :- Whenever you declare a variable it will be generally stored in the stack except static and global variables which are stored in the code section

//Reference(Available only in C++)

/*Reference is a nickname given to a variable or alias(ex:- a person a may be called by several names but it refers to a particular person)
given to a variable */

int main()
{
    int a = 10;
    int &r = a;
    cout << a; //here r is a nickname or alias of a
    r++;
    cout << r; //prints 11
    cout << a; //prints 11
}

// Reference is nothing but another name give to a variable.This is useful in parameter passing

// <--Pointer to Structure-->

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r =
    {
        10,
        5
    } struct Rectangle *p = &r;

    r.length = 15;
    // (*p).length =20; //this is same piece of code as the following line
    p->length = 20;
    // *p.length =20; //this will not work as expected like the above two piece of code because the dot will be given more preference amd it will read as p.length.

    //Imp note:-Every pointer whatever the type maybe pointer takes 2 bytes.Whatever the size of the integer is in a compiler the pointer will have the same size.
}

// --> Create an object dynamically in the heap

struct Rectangle
{
    int breadth;
    int length;
};

int main()
{
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(size of(struct Rectangle)); //memory is allocated in the heap.We have to typecaste because malloc function return void pointer)
    p->length = 10;
    p->breadth = 5;
}

// <<---Functions--->>

/*Function is a piece of code which performs a specific task.Function is a group of instruction which perform a specific task.
Grouping data -> structure
Grouping of instructions -> function
*/

int main() // --> this type of programming is called Monolythic programming
{
    stmt;
    stmt;
    stmt;
    stmt;
    stmt;
    stmt;
    stmt;
    stmt;
}

//-->The type of programming done below is called Modular or Procedural Programming.This is easy for developement purposes.

func1()
{
    stmt;
    stmt;
    stmt;
}
func2()
{
    stmt;
    stmt;
    stmt;
}
func3()
{
    stmt;
    stmt;
    stmt;
}
int main()
{
    func1();
    func2();
    func3();
    func1(); //function allows reusability
}

//declaration of a function

int add(int a, int b) // function for adding two numbers ,here a and b are formal parameters
                      /*any change in the formal parameters won't change the actual parameters
                              values of actual parameters are copied in the formal parameters*/
{
    int c;
    c = a + b;
    return c; //some int value has to returned to the int function or else it will give an error
}

int main()
{
    int x, y, z;
    x = 10;
    y = 5;
    z = add(x, y); //here function is called and the add function returns value and is stored in z.Here x and y are actual parameters
    printf("Sum is %d", z);
}

/*variables of add function i.e., a,b,c are stored in the add function section of the stack memory whereas the parameters in main function are stored 
in the main function section of the stack memory */

//When the function terminates the values are destroyed.

//add function cannot access the variables in the main function and vice-versa.

//One function cannot access the variables of other functions.

//  --->> Array as Parameter <<---

void fun(int A[], int n) // int A[] is not actually an array it is a pointer to array
                         // int A[] --> call by address , int n --> call by value
{
    int i;
    for (int i = 0; i < n; i++)
        printf("%d", A[i]);
}
int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    fun(A, 5);
}

//Array is passed by address.Arrays cannot be passed by value.Arrays are only passed by addresses.

void fun(int A[], int n)
{
    A[0] = 25; //modifying the array
}

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    fun(A, 5);
}

//Even a function can modify the actual parameter
// Ex:- showing goe a function can return an array

int[] fun(int n) // int n --> pass by value or call by value -->   int * fun(int n)
{
    int *p;

    p = (int *)malloc(n * sizeof(int)); // it is allocating an array in the heap memory
    return p;                           // returning an array
}

int main()
{
    int *A;
    A = fun(5); // this function is getting that array created by that function  // A will be pointing to the array
}

// ----->>> Structure as Parameter <<<-----

int area(struct Rectangle r1) // --> struct Rectangle r1 -> call by value                     struct Rectangle &r2 -> call by referrence
{

    r1.length++;
    return r1.length * r1.breadth;
}

int main()
{
    struct Rectangle
    {
        int length;
        int breadth;
    };
    struct Rectangle r = {10, 5} printf("%d", area(r));
}

//--> call by address

void changeLength(Struct Rectangle *p, int l)
{
    p->length = l;
}

int main()
{
    struct Rectangle r = {10, 5};
    changeLength(&r, 20); // changes the value of length to 20
}

// Imp note :- So when you want some function to modify the actual parameter the actual parameters then it must be called by address or by reference.

struct Test
{
    int A[5];
    int n;
};

void fun(struct Test t1)
{
    t1.A[0] = 10;
    t2.A[1] = 9;
}

int main()
{
    struct Test t = {{2, 4, 6, 8, 10}, 5};
    fun(t);
}

//Structure containing an array inside can be passed by value even if array is only passed by address.

//       <<---->> Structure and Functions <<---->>

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->breadth = b;
    r->length = l;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

void changeLength(struct Rectangle *r, int l)
{
    r->length = l;
}

int main()
{
    struct Rectangle r;
    initialize(&r, 10, 5);
    area(r);
    changeLength(&r, 20);
}

// ---->>>> Class and Constructors <<<<<----

//Class contains data members as well as functions we declared this data members as private and we make the functions public
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void changeLength(int l)
    {
        length = l;
    }
};
int main()
{
    Rectangle r; //this is an object
    r.initialize(10, 5);
    r.area();
    r.changeLength(20);
}

//Creating a constructor
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b) //constructor is a function which createss the object and initialize the object //the function has the same name as that of the class
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void changeLength(int l)
    {
        length = l;
    }
    int main()
    {
        Rectangle r(10, 5);

        r.area();
        r.changeLength(20);
    }
};

//

#include <iostream>>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() //non argument constructor which does not take any argument                 //default constructor
    {
        length = breadth;
    }
    Rectangle(int l, int b); //parameter constructor (constructor overloading)

    int area();      //facilitators
    int perimeter(); //facilitators
    int getLength(); //accessors
    {
        return length;
    }
    void setLength(int l)
    {
        length = l;
    }
};

Rectangle ::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

int Rectangle ::area()
{
    return length * breadth;
}

int Rectangle ::perimeter()
{
    return 2 * (length + breadth);
}
Rectangle ::~Rectangle()
{

    //Rectangle(); --> destructor -> to destroy anything stored in the dynamic memory //deallocation
}

int main()
{
    Rectangle r(10, 5);
    cout << r.area();
    cout << r.perimeter();
    cout << r.setLength();
    cout << r.getLength();
}

// <<<<---->>>> Template Class <<<<---->>>>

//C++ program supports generic functions and generic classes -> Template functions

template <class T>
T Arithametic<T>::add()
{
    T c;
    c = a + b;
    return c;
}
template <class T>
T Arithametic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

template <class T> //Generic Variable is T
class Arithametic
{
private:
    T a;
    T b;

public:
    Arithametic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithametic<T>::Arithametic(T a, T b)
{
    this->a = a;
    this->b = b;
}

//We can use the same class for multiple data types -> Generic Class -> Templatr Class

int main()
{
    Arithametic<int> ar(10, 5)
            cout
        << ar.add();
    Arithametic<float> ar1(1.5, 1.2);
    cout << ar1.add();
}