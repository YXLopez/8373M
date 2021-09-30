using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor rightdrive;
extern motor leftdrive;
extern motor intake;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );