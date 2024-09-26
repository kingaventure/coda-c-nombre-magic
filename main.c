#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
        int random_number = rand() % 100 + 1;
	int nombre_devine;
	int validation=0;
	printf("Bonjour veuillez choisir un chiffre entre 1 et 100\n");
	scanf("%d", &nombre_devine);
	while(validation==0){
	if(nombre_devine < random_number){
	printf("Le nombre mystère est plus grand !\n");
	scanf("%d", &nombre_devine);
	}
	else if(nombre_devine > random_number){
	printf("Le nombre mystère est plus petit !\n");
        scanf("%d", &nombre_devine);
	}
	else{
	validation++;
	printf("Bravo vous avez trouvez le numéro mystère\n");
	}
	}
	exit(0);
}
