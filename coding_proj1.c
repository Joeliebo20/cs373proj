//use this for proj
//
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define TRANSITIONS 1000000
#define STATES_SIZE 1001

int main() {

	bool accept_state = false;
	char states_arr[STATES_SIZE];
	char transtions_arr[TRANSITIONS];
	char * type_of_state;
	char * start;

	FILE *fp;
	fp = fopen("sample_1.txt", "r");
	char line[1000];
	int i = 0;

	while(fgets(line, sizeof(line), fp)) {
		type_of_state = strtok(line, "\t\n");
		if(type_of_state == "state") {
			//states_arr[i] = (where state is, what kind of state)
			i++;
		start = strtok(NULL, " ");
		printf("%s\n", type_of_state);
		}

	fclose(fp);
	return 0;
	
/*	for(i = 0; i < sizeof(states_arr); i++) {
		if(there is an accept state){
			accept_state = true;
		}
	} */
	
/*	void printAcceptOrReject() {
		if(!accept_state) {
			printf("%s\n", "reject " + reject_states);
		}
		else {
			printf("%s\n", "accept " + accept_states);
		}
	}
}
*/
}
