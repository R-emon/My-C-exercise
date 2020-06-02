#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check(char str[]){

    int upper=0,lower=0,ln=0,space=0,lentgh;

    if(lentgh=strlen(str)==8)
        ln=1;
    if(lentgh)
    for(int i=0;i< strlen(str); i++){
        if(isupper(str[i])!=0)
            upper=1;

        else if(islower(str[i])!=0)
            lower=1;

        else if(isspace(str[i]!=0))
            space=1;
    }
    if(upper==1 && lower==1 && ln==1 && space!=1){
            printf("The pasword is strong");
            return 1;
        }
        else{
            printf("Password is not strong try again!");
            return 0;
        }

}
int main(){
        char str[50];
    while(1){
    printf("Enter Your Password: ");
    fflush(stdin);
    gets(str);

    int result =check(str);
    if(result==1)
        break;
        else
        continue;

    }
    return 0;
}
