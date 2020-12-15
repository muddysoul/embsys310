# problem 1 - embedded device example

**Using the telegraph example, and the challenges listed in the module as reference, and describe another device that you would like to discuss. Describe how you think its embedded system works, and what design challenges it presents.**

An embedded device that I use quite frequently is a fitness tracker. A fitness tracker takes in a lot of inputs and stores the data and uses it to extrapolate other indicators of fitness. Some key sensors are GPS tracker and heart rate monitor. Usually, the heart rate monitor is always tracking heart rate, but the GPS is only tracking when asked.

One design challenge it presents is size, you have to be able to fit the processor and memory and multiple sensors and a battery and a screen (usually) into a tracker that isn't too bulky and is easy to wear.

Memory is also a challenge, users often desire the ability to pre-program workouts onto the fitness tracker. The tracker must also be able to save data from previous days and workouts which may eventually be synced onto another device with much more memory capacity, but it needs to be able to store it until that happens.

Power consumption and processor hogs also a challenge, fitness trackers are running multiple sensors continually and then making the computations necessary to extract further information from the data, and then displaying that data on a screen. So you need to be aware of how many measurements the sensors are making and not making more than necessary to not use up too much processor capacity or too much power. Considerations like only turning on the screen for a few seconds when the user presses a button can help ease this, but should not be the only way that this is remedied.

A fitness tracker with a screen does at least ease the testability concerns, as any issues with what is being displayed quickly points to a bug and narrows down where it is.
