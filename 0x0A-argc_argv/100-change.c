#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int change = 0, value;

	value = atoi(argv[1]);
	if (argc != 2 || argc == 0){
		printf("Error\n");
		return (1);
	}
	else{
		if (value <= 0){
			printf("%d\n", change);
			return (0);
		}
		else{
			while (value != 0){
				if (value >= 25){
					change += value / 25;
					value = value % 25;
				}
				else if (value >= 10){
					change += value / 10;
					value = value % 10; 
				}
				else if (value >= 5){
					change += value / 5;
					value = value % 5; 
				}
				else if (value >= 2){	
					change += value / 2;
					value = value % 2; 
				}
				else if (value >= 1){	
					change += value / 1;
					value = value % 1; 
				}
			}
		}
		printf("%d\n", change);
		return (0);
	}
}
