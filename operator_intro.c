#include<stdio.h>

int main()
{
   int n1=60,n2=15,AND,XOR,RSFT,LSFT,LARGEST,n3,n4;
   AND=n1&n2;   //bitwise AND
   XOR=n1^n2;   //bitwise XOR
   RSFT=n1<<3;  //bitwise right shift ... by 3
   LSFT=n1>>3;  //bitwise left shift.... by 3
   LARGEST= n1>n2? n1:n2;   // conditional operator / ternary operator
   n3=++n1;     // pre-fix increment operator
   n4=n1++;     // post-fix increment operator

   
   printf("AND= %d ",AND); 
   printf("XOR= %d ",XOR);  
   printf("RSFT= %d ",RSFT);    
   printf("LSHFT= %d ",LSFT);   
   printf("largest=%d",LARGEST);    
   printf("n3=%d",n3);  
   printf("n4=%d",n4);  

   
   

    
    return 0;
    

}