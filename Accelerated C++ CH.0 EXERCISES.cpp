// Accelerated C++ CH.0 EXERCISES.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;


/* Here are the exercises and some of them I don't know how to do.

1. Compile hello world. Easy.
	
	using namespace std;
	int main()
	{ cout << "Hello, World!" << endl;
	}

2. Write a program that when run, writes: "This (") is a quote, and this is (\) is a backslash.

int main()
{
cout << "This (") is a quote, and this (\) is a blackslash.""
	}
	
		So obviously the above code is far from correct. I believe it has something to do with syntax manipulation using backslashes but they didn't really demonstrate. 

	EDIT: so I tried using the syntaxes \" and \\ to replace (") and (\) respectively. It worked!
int main()
{
	cout << "This \" is a quote, and this \\ is a blackslash." << endl;
	}

3. Experiment with your implmentations to  learn how it treats tabs. (hm??)

int main()
{
	cout << "/t Hello, World" << endl;  <<<<<This tab arrangement puts a big ol' space at the beginning
	cout << "Hello, \t World" << endl;	<<<<< This tab arrangement puts a big space between Hello and World

}


4. Write a program that when run writes the Hello World program as its output

int main()
{

	cout << "int main() \n" << endl;
	cout << "{ cout << Hello, World! << endl; \n" << endl;
	cout << "{" << endl;

}

TBH it looks kinda like a gimmick having to seperate all the lines with \n one line at a time but it works. Not scalable but it works. 


5. Is this a valid program why or why not.

#include <iostream>

int main()

std::cout << "Hello, World" << std::endl;

They don't say what's wrong with it but if you ask me, its missing braces so it won't function at all if I copypaste it.

6. IS this a valid program why or why not?

#include <iostream>

int main()
{
	{
		{	
			{
				{
					{ cout << "Hello, WOrld!" << endl;

					}
				}
			}
		}
	}
}

Yes it is. You can have as many brackets as you want as long as they are a corresponding pair.

7. Does this one work?

#include <iostream>

int main()
/* This is a comment that extends over several lines
//	because it uses /* and */ // as its starting and ending delimiters * /
//	{
//  cout << "Does this work?" << endl;
//  return 0;
//  }


/*

Short answer to #7 is NO.
Question #7 is all sorts of messed up because not only is it invalid a statement due to it using "/*" multi-line spanning comment format, it is actually even more diffucult
to talk about in the comment section here because then we have THREE multi-line spanning comment operators all tangled together! That being said, I don't know how to fix the
original program. To that but I'm betting there is a way


8. Is this program right?

#include <iostream>

int main()
{
// this is a comments that extends over several lines
// by using \\// at the beginning of each line instead of using /*
// or (the opposite)

std::cout << "Does this work?" << std::endl;
return 0;

The above code can't even be written correctly because it will interfere with the rest of the programming. I do not know how to manipulate comment delimiters
well enough to get the correct output. Unfortunately.

9. What is the shortest valid program?

int main(){}

The above code returns a 0. Just says yes, no behavior is defined but its the shortest valid possible in C++.


10. Write Hello World program so that a newline occurs everywhere that whitespace is allowed in the program

I'm assuming the question meant after you execute the program. After consulting the interne, other students have interepreted the exercise as new lines in the actual IDE.
So here one such reply that I agree with


#include <iostream>

int

main

(

)

{

std

::

cout

<<

"Hello, world!"

<<

std

::

endl

;

return

0

;

}

*/


int main()

{

	std::cout << "Hello World!\n";

}