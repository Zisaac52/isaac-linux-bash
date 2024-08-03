  1 #include<stdio.h>
  2 #include<string.h>
  3 int main(){
  4     FILE *fp;
  5     int i;
  6     for(i=0;i<500;i++){
  7         char c[50];
  8         sprintf(c,"record%d.dat",i);
  9         fp = fopen(c,"w");//here. noted! fopen
 10         if( fp = NULL)
 11         {
 12             printf("Error fopen a file");
 13             return 1;
 14         }
 15         char *str = "hello world";//define a string
 16         size_t len = strlen(str);//size of it
 17         fwrite(str,sizeof(char),len,fp);//imported to a file with char
 18         fclose(fp);
 19     }
 20     return 0;
 21 
 22 }

