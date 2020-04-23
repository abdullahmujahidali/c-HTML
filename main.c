#include<stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
   FILE *out;///Object to Creat Html Fule
   out = fopen("output.html","w");//we Creat and Open an HTML file Names as: output.html->this file will be located after programe execution were you saved the programe
   char name[25];//size of name you can increase or decrease name size...
   char intro[1000];//Describe Yourself->you can incresae the words size from 1000 to another amount or also decrease it here...
  
   system("color b");//Background Color...
  
   printf("\n\t\t\t-----------------------------");
  
   printf("\n\nEnter Your Name:- ");//Get Data From User
   gets(name);
   printf("\n\nDescribe Yourself: ");//Get data for Introduction Part....
   gets(intro);
  
   fprintf(out, "<!DOCTYPE html>\n");
   fprintf(out, "<head><title>%s</title></head>\n",name);//Set Name as Title in HTML Output File
   fprintf(out, "<html><body background=\"background.jpg\" style=\"color:Black;font-family:georgia\">\n");//were background.jpg you can add your own image to set background image
   fprintf(out, "<h1> &emsp;&emsp; %s</h3><h3> &emsp;&emsp; %s</h1>\n",name,intro); //just put your image name and extension...
   //text color is black you can change it as Blue , Red etc as you want....

   fprintf(out, "</body></html>");
   }