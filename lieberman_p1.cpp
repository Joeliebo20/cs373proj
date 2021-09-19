#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <sstream>

using namespace std;


struct transitions {
	string current;
	string input;
	string next;
};

struct states {
	string state;
	string state_name;
};
void parse() {
	struct transitions t;
	struct states s;
	ifstream f;
	string line;
	f.open("sample_1.txt");
	vector<string> transitions_v;
	vector<string> accept_states;
	int i = 0; int j = 0; int k = 0;
	//parsing in file
	while(getline(f, line, '\t')) {
		transitions_v.push_back(line);
		cout << transitions_v.at(i);
		i++;
	}
	while(j < transitions_v.size()) {
		if(transitions_v.at(j).find("state")){
			if(transitions_v.at(j).find("start")) {
				s.state = transitions_v.at(1);
				s.state_name = "start";
				j++;
				
			}
		else if(transitions_v.at(j).find("accept")) {
			s.state = transitions_v.at(1);
			s.state_name = "accept";
			accept_states.push_back(transitions_v.at(1));
			j++;
			}
			
		}
		
		else if(transitions_v.at(j).find("transition")) {
			t.current = transitions_v.at(1);
			t.input = transitions_v.at(2);
			t.next = transitions_v.at(3);
			j++;
			}
		else {
			break;
		}
	}

	while(k < accept_states.size()) {
		cout << endl;
		cout << "accept" << " " << accept_states[k] << endl;
		k++;
	}
	cout << "Current state: " << s.state << " " << s.state_name << endl;
	
	
}




int main() {
	parse();
}

