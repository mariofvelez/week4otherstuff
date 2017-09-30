#ifndef ogre_H
#define ogre_H

#include "../CommandBase.h"

class ogre : public CommandBase {
public:
	ogre();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ogre_H
