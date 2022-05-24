// 
// 
// 
// 



#ifndef CLASSES_HPP
#define CLASSES_HPP

namespace MyCode {
	class TestClass {
	public:
		TestClass();

		int getVar() const { return testingVar_; }
		void setVar(int);
	private:
		int testingVar_;
	};
}

#endif 
