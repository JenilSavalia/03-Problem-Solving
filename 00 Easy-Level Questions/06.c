#include <stdio.h>
#include <string.h>


//6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the password is "1234", print "Login successful"; otherwise, print "Login failed.


int main(){
	
	char user[10];
	int pass; 
	
	printf("User: ");
	scanf("%s",&user);
	
	printf("Password: ");
	scanf("%d",&pass);
	
	int verify = strcmp(user,"admin");

if(verify==0 && pass==1234){
	printf("Login Successfully");
}
else{
	printf("Login Failed");
}
	
}

