#include<stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
   FILE *out; //file object for html type file
   out = fopen("output.html","w");// create an html file 
   char name[25];
   char intro[1000];

   system("color 7");//Background Color...
  
   printf("\n\t\t\t-----------------------------");
  
   printf("\n\nEnter Your Name:- ");//Get Data From User
   gets(name);
   printf("\n\nDescribe Yourself: ");//Get data for Introduction Part....
   gets(intro);
  
   fprintf(out, "<!DOCTYPE html>\n");
   fprintf(out, "<head><title>%s</title></head>\n",name);
   fprintf(out, "<html><body background=\"background.jpg\" style=\"color:Black;font-family:georgia\">\n");

   fprintf(out, "<h1> %s</h3><h3>  %s</h1>\n",name,intro); 

   fprintf(out, "</body></html>");
   }
