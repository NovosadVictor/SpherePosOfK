#include <iostream>
#include <string>
#include <sstream>

/*int QuantOfTens(int N){
	int tens = N;
	int count = 1;
	while (tens >= 10){
		tens = tens / 10;
		++count;
	}
	return count;
}

int NOI(int N, int p){
	int tens = N;
	if (N >= pow(10,p - 1)){
		while (tens >= pow(10,p))
			tens = tens / 10;
		return tens % 10;
	}
	return 0;
}

void RadSort(std::vector<int> &v){
	int p = 1;
	while (p <= QuantOfTens(v[v.size() - 1])){
		for (int i = 1; i < v.size(); ++i)
			for (int j = 1; j < v.size(); ++j){
				if (p == 1)
				 	if (NOI(v[j],p) > NOI(v[i],p)){
                                        	int tmp = v[i];
                                       		v[i] = v[j];
                                        	v[j] = tmp;
                                	}
				if (p > 1)
					if ((NOI(v[i], p - 1) == NOI(v[j], p - 1)) && (NOI(v[j],p) > NOI(v[i],p))){
						int tmp = v[i];
						v[i] = v[j];
						v[j] = tmp;
			}
					}
		++p;
		}
}

void PosOfK(int N, int K){
	std::vector<int> v;
	for(int i = 1; i <= N; ++i)
		v.push_back(i);
	RadSort(v);
	for(int i = 0; i < N;++i)
		if (v[i] == K){
			std::cout << i + 1 << std::endl;
			break;
		}
}

int main(){
	int N;
	int K;
	std::cin >> N;
	std::cin >> K;
	PosOfK(N,K);
	return 0;
}*/
int main() {
	int N;
	std::string K;
	std::cin >> N;
	std::cin >> K;
	int count = 0;
	for (int i = 1; i <= N; ++i) {
		std::stringstream ss;
		ss << i;
		std::string s;
		std::getline(ss, s);
		if (s <= K) 
			++count;
	}
	std::cout << count << std::endl;
	return 0;
}
