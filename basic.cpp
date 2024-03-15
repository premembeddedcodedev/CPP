#include <iostream>
#include <vector>

class MyApp {
	public:
		MyApp(std::vector<std::string> const& argv);

		int run() {
			/* code comes here */
			return 0;
		};
};

#define IMPLEMENT_APP(AppClass) \
	int main(int argc, char **argv) { \
		AppClass m(std::vector<std::string>(argv, argv + argc)); \
		return m.run(); \
	}


IMPLEMENT_APP(MyApp);
