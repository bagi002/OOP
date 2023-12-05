/**
 * Napisati program koji 20 puta pokrece simulaciju 05_a_i_b_pre_c koja je radjena na terminu 4. vezbi.
 * 
 * Prvi korak je uraditi taj zadatak ako vec niste.
 * 
 * Ako jeste, izvrsnu datoteku programa kopirati pored izvrsne datoteke ovog programa. Uz oslonac na 
 * `fork`, `wait` i `execv` sistemske pozive, pokrenuti 20 puta zadatak 05_a_i_b_pre_c kao spoljasnji
 * program pritom svaki put sacekavsi da se pokrenuto izvrsenje zavrsi. 
 * 
 * NAPOMENA: program se navodi punom putanjom!
 * 
 * BONUS: pokrenuti ovaj program od 2 do 5 puta i videti da li se desava da nekada ispisi iz niti a i b
 * zamene mesta. Ako se desava da oni zamene mesta ali ne budu nikada pre ispisa iz niti c, zadatak 
 * 05_a_i_b_pre_c je odlicno resen. 
*/
#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"

#define BR_POKRETANJA 20



int main(){
	pid_t dete;
	
	for(int i=0; i<BR_POKRETANJA; i++){
		dete = fork();
		if(dete == 0){
			char *argumenti[] = {"/home/asistenti/hanisic/Desktop/nastavni_materijali/operativni_sistemi/v06/Zadaci/abc", NULL};
			
			if(execv(argumenti[0], argumenti) == -1){
			exit(1);
		}
	}else{
	
		wait(nullptr);
	}
	return 0;
}














