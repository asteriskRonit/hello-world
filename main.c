#include<stdio.h>
#include<string.h>
int str_INT_conversion(char e[])
{
    int con=0;
    for(int i=0;i<strlen(e);i++)
    {
       con*=10;
       con+=(e[i]-48);
    }
    return con;
}
int main(int num_arg,char *arg[])
{
   int ab=str_INT_conversion(arg[1]);
   int ba=str_INT_conversion(arg[2]);
   #ifdef _WIN32
       printf("hello iam from win\n");
       printf("The addition is %d \n",(ab+ba));
   #elif __linux__
       printf("hello iam from linux\n");
       printf("The subtraction is %d \n",(ab-ba));
   #elif __APPLE__
       printf("hello from mac\n");  
       printf("The multiplication is %d \n",(ab*ba));  
   #endif    
   return 0;
}
