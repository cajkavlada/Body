/**
*	Definitions of the animation related methods.
*/

#include "Animation.h"
#include "BVHInfo.h"
#include "Skeleton.h"

/**
*	Constructor handling the creation of member variables.
*/
Animation::Animation(void) {
	animationInfo = new BVHInfo();
	skeleton = new Skeleton();
}

/**
*	Plays the animation in a loop.
*	Intended to run in a loop through the whole animation until is stopped from the SDL interface.
*/
void Animation::playAnimation(long frame) {

}

/**
*	Sets animation to a selected frame.
*	Intended to go to a frame but to remain stopped until is set to play from the SDL interface.
*/
void Animation::goToFrame(long frame) {

}