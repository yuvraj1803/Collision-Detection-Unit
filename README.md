# Collision-Detection-Unit
A Real Time Collision Detection System (powered by ysRTOS)

![IMG_3505](https://user-images.githubusercontent.com/37622719/231646865-866f446d-fbd0-49d3-b0a6-2ceb4f79a3e5.png)

+ The Wheels are powered by an Arduino connected to an L293D motor-driver.

+ The ysRTOS running on the STM32 board signals the Arduino to stop the vehicle.

+ The Proximity Sensor's output is being analysed in a seperate real-time thread in the STM32 board.

