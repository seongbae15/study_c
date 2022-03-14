#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

typedef multimap<string, string> keyword_map;
typedef keyword_map::const_iterator keyword_map_it;
void build_keyword_map(keyword_map* map);
void segmentation(string input, vector<string>* segment);
void search(const keyword_map& map);



static const string songs[] = {
	"always be my baby-mariah carey",
	"baby one more time - briteny spears",
	"because you loved me-celine dion",
	"break the ice-briteny spears",
	"with or without you-u2",
	"greatest love of all-whitney hustion",
};

int main() {
	keyword_map map;
	build_keyword_map(&map);
	search(map);
	return 0;
}

void build_keyword_map(keyword_map* map) {
	for (int i = 0; i < sizeof(songs) / sizeof(string); i++) {
		vector<string> keywords;
		segmentation(songs[i], &keywords);
		for (size_t j = 0; j < keywords.size(); j++) {
			map->insert(make_pair(keywords[j], songs[i]));
		}
	}
}

void segmentation(string input, vector<string>* segment) {
	string delimeter(" \t\n.,m!?:;-");
	size_t prev_wb = 0;
	size_t new_wb = input.find_first_of(delimeter);
	while (new_wb != string::npos) {
		segment->push_back(input.substr(prev_wb, new_wb - prev_wb));
		prev_wb = new_wb + 1;
		new_wb = input.find_first_of(delimeter, new_wb + 1);
	}
	segment->push_back(input.substr(prev_wb));
}

void search(const keyword_map& map) {
	while (true) {
		cout << "검색어를 입력하세요 ";
		string input;
		cin >> input;
		pair<keyword_map_it, keyword_map_it> it = map.equal_range(input);
		if (it.first == it.second) {
			cout << "검색 결과가 없습니다." << endl;
		}
		else {
			for (keyword_map_it i = it.first; i != it.second; i++) {
				cout << (*i).second << endl;
			}
		}
		cout << endl;
	}
}