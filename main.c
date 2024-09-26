#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
        int random_number = rand() % 100 + 1;
	int nombre_devine;
	printf("Bonjour veuillez choisir un chiffre entre 1 et 100\n");
	scanf("%d", &nombre_devine);
	while(random_number != nombre_devine){
	if(nombre_devine < random_number){
	printf("Le nombre mystère est plus grand !\n");
	scanf("%d", &nombre_devine);
	}
	else if(nombre_devine > random_number){
	printf("Le nombre mystère est plus petit !\n");
        scanf("%d", &nombre_devine);
	}
	}
	if(random_number == nombre_devine){
	printf("Bravo vous avez trouvez le numéro mystère\n");
	}
	exit(0);
}
