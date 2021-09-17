#include <iostream>
#include <fstream>
#include <stdlib.h>


struct transitons {

};

struct states {

};
ifstream file;
file.open("sample_1.txt")
//parsing in file
while(getline(file, ))


int main() {

	

	
	
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

/*int **makeIntMatrix(int width, int height) {
	int **p = (int *) NULL;
	int *pData = (int *) NULL;

	if((width > 0) && (height > 0)) {
		p = (int *) malloc(width*sizeof(int*));
		pData = (int *) malloc(width*height*sizeof(int));
		int i = 0;
		while(i < width) {
			p[i] = pData + (i*height);
			i = i+1;
		}
	}
	return p;
}

void deleteIntMatrix(int **p) {
	if(p != NULL) {
		if(p[0] != NULL) {
			free(p[0]);
		}
		free(p);
	}
}
*/