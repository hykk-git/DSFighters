//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//struct compare
//{
//	bool operator()(const int& e1, const int& e2) {
//		return e1 > e2;
//	}
//};
//class Unsorted {
//public:
//	vector<int> sec;
//	vector<int> P;
//	void insert(int e) {
//		sec.push_back(e);
//	}
//	void move() {
//		P.push_back(sec[0]);
//		sec.erase(sec.begin());
//	}
//	void minMove() {
//		sec.push_back(max());
//		removeMax();
//	}
//	void print() {
//		for (int i = 0; i < sec.size(); i++) {
//			cout << sec[i] << " ";
//		}
//		cout << endl;
//	}
//	int max() {
//		if (P.empty()) {
//			return -1;
//		}
//		compare C;
//		int maxval= P[0];
//		for (int i = 0; i < P.size(); i++) {
//			if (C(P[i], maxval)) {
//				maxval = P[i];
//			}
//		}
//		return maxval;
//	}
//	void removeMax() {
//		if (P.empty()) {
//			return;
//		}
//		compare C;
//		int maxidx = 0;
//		for (int i = 0; i < P.size(); i++) {
//			if (C(P[i], P[maxidx])) {
//				maxidx =i;
//			}
//		}
//		P.erase(P.begin() + maxidx);
//	}
//	void size() {
//		cout << sec.size() << endl;
//	}
//	void empty() {
//		if (sec.empty()) {
//			cout << 0 << endl;
//		}
//		else
//			cout << 1 << endl;
//	}
//	void clear() {
//		sec.clear();
//		P.clear();
//	}
//};
//
//int main() {
//	int N, T, a, count = 0, check = 0;
//	string user;
//	Unsorted s;
//	cin >> T;
//	while (T > check) {
//		cin >> N;
//		while (N > count) {
//			cin >> a;
//			s.insert(a);
//			count++;
//		}
//		count = 0;
//		while (N > count) {
//			s.move();
//			count++;
//		}
//		count = 0;
//		while (N > count) {
//			s.minMove();
//			count++;
//		}
//		s.print();
//		count = 0;
//		s.clear();
//		check++;
//	}	
//	return 0;
//}