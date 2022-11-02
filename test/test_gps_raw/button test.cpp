
    #include <M5Core2.h>

    Button myButton(10, 10, 200, 100, false, "I'm a button !",
                    {BLACK, WHITE, WHITE});

    void setup() {
      M5.begin();
    }

    void loop() {
      M5.update();
      if (myButton.wasPressed()) Serial.print("* ");
    }