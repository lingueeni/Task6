//preprocessing 
# include <stdio.h>
# include <stdlib.h>

//calling our main function
int main(){
	FILE *fptr;
//function to open ducument file	
	fptr= fopen ("reverse.txt" , "r");
	printf("File opened successfully\n");
	printf("String input from file: ");
	
	char n;
	int i = 0, j = 0;
//create a loop to get 1st line in document	
	while(1){
		n = fgetc(fptr);
		if(n==EOF)
		    break;
		else
		    printf("%c", n);			
	}	
	printf("\nReversed String: ");
	fseek(fptr,0,SEEK_END);
	j = ftell(fptr);
//create another loop to reverse the line taken from document	
	while(i < j){
		i++;
		fseek(fptr,-i,SEEK_END);
		printf("%c",fgetc(fptr));
	}
	printf("\n\t The Reversed String is added to the File successfully \n");
	system("pause");
	return 0;
}

