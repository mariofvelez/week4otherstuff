#ifndef ghvvbyu_H
#define ghvvbyu_H

#include <Commands/Subsystem.h>

class ghvvbyu : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	ghvvbyu();
	void InitDefaultCommand();
};

#endif  // ghvvbyu_H
