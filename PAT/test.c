# include <stdio.h>
# include <string.h>

int main(){
	char line[] = "hel mar";
	char *token;
	
	token = strtok(line," ");
	
	while(token != NULL){
		printf("%s\n",token);
		token = strtok(NULL," \n");
	}
		
	return 0;
	
}
