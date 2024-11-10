#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="helo";
    int start =0;
    int end =strlen(str)-1;
    char Temp;
    char org[20];
    strcpy(org,str);
    while(start<end){//6<6
        Temp =str[start];//temp==0
        str[start]= str[end];//str[1]=d
        str[end]=Temp;//H=>str[11]=e   //!d         eH
        start++;//1
        end--;//11
    }
    printf("reversed string: %s\n" ,str);//!dlrow ,olleH
    if(strcmp(org, str)==0){//.....
        printf("its a palidrom %s\n",str);
    }
    else{
        printf("its not a palidrom %s\n",str);
    }

    return 0;
}