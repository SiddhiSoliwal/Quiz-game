#include<stdio.h>
int seventh(){
char ques7;
printf("\n--------------------------------------------\n");
printf("7. In 1932,Poona Pact was signed between :\n");

printf("a=gandhiji & jawahar lal nehru\n");
printf("b=Gandhiji & B.R amadkar\n");
printf("c=B.R amadhar & jawahar lal nehru\n");
printf("d=Gandhiji & M.D ali \n");
}
int six(){
char ques6;
 
printf("\n--------------------------------------------\n");
printf("6. sarojini naidu was elected congress president at:\n");

printf("a=Haripura,1938\n");
printf("b=Bombay,1934\n");
printf("c=Madras,1927\n");
printf("d=kanpur,1925\n");
}
int fifth(){
char ques5;
 
printf("\n--------------------------------------------\n");
printf("5.Bande matram was a series of articles published in the year 1907 by:\n");

printf("a=Bal gangadhar tilak\n");
printf("b=Sri aurobindo ghosh\n");
printf("c=Domader chapekar\n");
printf("d=Balkrishna chapekar\n");
}
int forth(){
char ques4;
 
printf("\n--------------------------------------------\n");
printf("4. The east india association was set up in:\n");

printf("a=1866\n");
printf("b=1857\n");
printf("c=1836\n");
printf("d=1885\n");
}
int third(){
char ques3;
 
printf("\n--------------------------------------------\n");
printf("3. Mahatma gandhi launched kheda satyagrah on gujrat in 1918 to support the cause of::\n");

printf("a=mill owners\n");
printf("b=land lords\n");
printf("c=kol rebellion\n");
printf("d=The peasants\n");
}

int second(){
char ques2;
 
printf("\n--------------------------------------------\n");
printf("2. The Rowlatt Act was passed in:\n");

printf("a=1905\n");
printf("b=1913\n");
printf("c=1919\n");
printf("d=1925\n");


}

int start(){
char ques;
printf("\n1 who is the founder of Haryanka Dynasty?\n");
printf("a=Ajatashatru\n");
printf("b=harshvardhan\n");
printf("c=Bimbisara\n");
printf("d=Ghananand\n");

}



int main (){
    
char option;
printf("............................................\n");
printf("\t\t\t\t welcomE      \n");
printf("\t\t\t\t   to     \n");
printf("\t\t\t\t  Quiz       \n");
printf("............................................\n");
printf("--------------------------------------------\n");
printf("\t\t TEST YOUR GK..SET YOUR HIGHSCORES!!    \n");
printf("............................................\n");
printf("--------------------------------------------\n");

int a=0;
printf("\npress S to start the game");
printf("\npress V to veiw the highest score"); 
printf("\npress R to reset score");
printf("\npress H for help");
printf("\npress Q to quit\n ");
scanf(" %c",&option);

printf("--------------------------------------------\n"); 
if(option=='s' || option=='S'){
start();
char ques,ques2,ques3,ques4,ques5,ques6,ques7;
printf(" %c",ques);
scanf(" %c",&ques);
if(ques=='c'){
printf("it is correct\n"); 
a++;

second();
}
else {
printf("invalied");

start();

}
scanf(" %c",&ques2);
if(ques=='c'){
printf("it is correct\n"); 
a++;
third();
}
else {
printf("invalied");
second();
}
scanf(" %c",&ques3);
if(ques3=='d'){
printf("it is correct\n");
a++;
forth();
}
else {
printf("invalied");
third();

}
   scanf(" %c",&ques4);
if(ques4=='a'){
printf("it is correct\n");
a++;
fifth();
}
else {
printf("invalied");
forth();

} 
    scanf(" %c",&ques5);
if(ques5=='b'){
printf("it is correct\n");
a++;
six();
}
else {
printf("invalied");
fifth();

} 
scanf(" %c",&ques6);
if(ques6=='d'){
printf("it is correct\n");
a++;
seventh();
}
else {
printf("invalied");
six();

} 
  scanf(" %c",&ques7);
if(ques7=='b'){
printf("it is correct\n");
a++;
seventh();
}
else {
printf("invalied");
six();

} 
          
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}}

    
        
   