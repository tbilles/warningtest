#ifndef BASE_H_
#define BASE_H_

enum Option : int {
	OPTION1,
	OPTION2,
	OPTION3,
	OPTION4,
};

class Base {
public:
	Base() = default;

private:
	Option option1:2;
	Option option2:2;
	Option option3:2;
	Option option4:2;
	Option option5:2;
};

#endif
