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
//class Sorted {
//public:
//	vector<int> sec;
//	vector<int> n;
//	vector<int> odd;
//	vector<int> even;
//	void insert(int e) {
//		n.push_back(e);
//	}
//	void insertodd(int o) {
//		compare C;
//		int maxval = odd.size();
//		for (int i = 0; i < odd.size(); i++) {
//			if (C(odd[i], o)) {
//				maxval = i;
//				break;
//			}
//		}
//		odd.insert(odd.begin() + maxval, o);
//	}
//	void inserteven(int e) {
//		compare C;
//		int maxval = even.size();
//		for (int i = 0; i < even.size(); i++) {
//			if (C(even[i], e)) {
//				maxval = i;
//				break;
//			}
//		}
//		even.insert(even.begin() + maxval, e);
//	}
//	void print() {
//		for (int i = 0; i < sec.size(); i++) {
//			cout << sec[i] << " ";
//		}
//		cout << endl;
//	}
//	/*void printEven() {
//		for (int i = 0; i < even.size(); i++) {
//			cout << even[i] << " ";
//		}
//	}
//	void printOdd() {
//		for (int i = 0; i < odd.size(); i++) {
//			cout << odd[i] << " ";
//		}
//	}*/
//	void move() {
//		for (int i = 0; i < n.size(); i++) {
//			if ((n[i] % 2) == 0) {
//				if (even.size() == 0) {
//					even.push_back(n[i]);
//				}
//				else {
//					inserteven(n[i]);
//				}
//			}
//			else {
//				if (odd.size() == 0) {
//					odd.push_back(n[i]);
//				}
//				else {
//					insertodd(n[i]);
//				}
//			}
//		}
//	}
//	void lastMove() {
//		for (int i = 0; i < even.size(); i++) {
//			sec.push_back(even[i]);
//		}
//		for (int i = 0; i < odd.size(); i++) {
//			sec.push_back(odd[i]);
//		}
//	}
//	void clear() {
//		sec.clear();
//		odd.clear();
//		even.clear();
//		n.clear();
//	}
//};
//
//int main() {
//	int N, T, a, count = 0, check = 0;
//	Sorted s;
//	cin >> T;
//	while (T > count) {
//		cin >> N;
//		while (N > check)
//		{
//			cin >> a;
//			s.insert(a);
//			check++;
//		}
//		s.move();
//		s.lastMove();
//		s.print();
//		s.clear();
//		count++;
//		check = 0;
//	}
//	return 0;
//}