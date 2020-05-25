#include<ctime>
#include <iostream>
#ifndef H_TIMER
#define H_TIMER
class Timer {
private:
	int t;
public:
	void Start() {
		t = time(NULL);
	}
	void Stop() {
		std::cout << (time(NULL) - t )*1000 << "\n";
	}
	void Stop(std::string Str) {
		if (Str == "S" || Str == "s") {
			std::cout << (time(NULL) - t) << "microsec\n";
		}
		if (Str == "M" || Str == "m") {
			std::cout << (time(NULL) - t) / 60 << "sec\n";
		}
		if (Str == "full") {
			std::cout << (time(NULL) - t) / 60 << " min " << (time(NULL) - t) - (time(NULL) - t) / 60 * 60 << " sec\n";
		}
	}
};
#endif