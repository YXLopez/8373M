using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor rightdrive;
extern motor leftdrive;
extern motor intake;
extern motor_group frontArm;
extern motor_group backArm;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );