/*
Author: Abhisek Ganguly
Purpose: demo program to print some string and explain syntax and different types of comment.
Date: 05/12/2021
Last Updated: 05/12/2021
*/

#include <stdio.h>

int main(){
    //This is a comment. The compiler won't execute these lines.
    printf("This is not a comment, it's a line of code which will be executed by the compiler!");
    //printf("This was a line of code but now it have been commented out, so it won't display anything anymore")
    /*This is a multiline comment
    we can write in multiple lines using this comment syntax!*/
    return 0;
}

/******************************************************************************
 * If you want a multi line comment to stand out, then this is how you design your comment.
 * It mostly means that it's a very important comment
 * so people should read it.
 * ****************************************************************************/