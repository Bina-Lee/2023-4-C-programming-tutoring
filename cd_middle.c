#include <Arduino_LED_Matrix.h>
#include <TaskScheduler.h>
#define PERIOD 1000

ArduinoLEDMatrix matrix;

Scheduler ts;
void count();
Task t1(PERIOD, TASK_FOREVER, count, &ts, true);

const int LED2 =  9;
const int LED1 = 10;
const int LED0 = 11;

void setup() {
  pinMode( LED2, OUTPUT );
  pinMode( LED1, OUTPUT );
  pinMode( LED0, OUTPUT );
}

void loop() {
  ts.execute();
}

void count() {
  static int n = 0;
  digitalWrite( LED2, n & 4);
  digitalWrite( LED1, n & 2);
  digitalWrite( LED0, n & 1);
  n = (n+1) % 8;
}


/////////////


#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

char buf[4];
int  prev_n = 0;
ArduinoLEDMatrix matrix;

const int LED2 =  9;
const int LED1 = 10;
const int LED0 = 11;

void setup() {
  pinMode( 13,   OUTPUT );
  pinMode( LED2, OUTPUT );
  pinMode( LED1, OUTPUT );
  pinMode( LED0, OUTPUT );

  matrix.begin();
  matrix.beginDraw();
  matrix.stroke(0xFFFFFFFF);
  matrix.textFont(Font_5x7);
  matrix.beginText(4, 1, 0xFFFFFF);
}

void loop() {
  static int n = 0;
  //digitalWrite(   13, n & 8);
  digitalWrite( LED2, n & 4);
  digitalWrite( LED1, n & 2);
  digitalWrite( LED0, n & 1);
  sprintf(buf, "%d", n);
  matrix.println(buf);
  matrix.endText();
  n = (n+1) % 8;
  delay(1000);
}

/////////////////

#include <ArduinoGraphics.h>
#include <Arduino_LED_Matrix.h>

ArduinoLEDMatrix matrix;

const int LED2 =  9;
const int LED1 = 10;
const int LED0 = 11;



void setup() {
  pinMode( LED2, OUTPUT );
  pinMode( LED1, OUTPUT );
  pinMode( LED0, OUTPUT );

  matrix.begin();
  matrix.beginDraw();
  matrix.stroke(0xffffffff);
  matrix.textFont(Font_5x7);
  matrix.beginText(4,1, 0xffffff);
}

void loop() {
  int c = analogRead(A1);
  int n = map(c, 0, 1023, 0, 7);
  digitalWrite( LED2, n & 4);
  digitalWrite( LED1, n & 2);
  digitalWrite( LED0, n & 1);

  char buf[2];
  sprintf(buf, "%d", n);
  matrix.print(buf);
  matrix.endText();

  n = (n+1) % 8;
  delay(1000);
}

////////////////

#include <TaskScheduler.h>
#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

#define PERIOD_COUNT 1000

void count();
void adjust();

Scheduler ts;
Task t1( PERIOD_COUNT, TASK_FOREVER, count, &ts );

char buf[4];
int prev_n = 0;
ArduinoLEDMatrix matrix;

const int LED2 = 9;
const int LED1 = 10;
const int LED0 = 11;

int  n = 0;
bool state = false;

void setup() {
  Serial.begin(9600);

  pinMode(13, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED0, OUTPUT);

  pinMode(2, INPUT_PULLUP);

  matrix.begin();
  matrix.beginDraw();
  matrix.stroke(0xFFFFFFFF);
  matrix.textFont(Font_5x7);
  matrix.beginText(4, 1, 0xFFFFFF);
}

void loop() {
  int s = digitalRead(2);
  if (s == LOW) { 
    state ^= 1;
    if (state) t1.enable(); else t1.disable();
    delay(300);
  }

  //if(!state) adjust();

  ts.execute();
}

void display() {
  digitalWrite(LED2, n & 4);
  digitalWrite(LED1, n & 2);
  digitalWrite(LED0, n & 1);
  sprintf(buf, "%d", n);
  matrix.println(buf);
  matrix.endText();
}

void count() {
  display();
  n = (n + 1) % 8;
}

void adjust() {
  int c = analogRead(A1);
  n = map(c, 0, 1023, 0, 7);
  display();
}




////////////

#include <TaskScheduler.h>
#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

#define PERIOD_COUNT 1000

void count();
void adjust();

Scheduler ts;
Task t1( PERIOD_COUNT, TASK_FOREVER, count, &ts );

char buf[4];
int prev_n = 0;
ArduinoLEDMatrix matrix;

const int LED2 = 9;
const int LED1 = 10;
const int LED0 = 11;

int  n = 0;
bool state = false;

void setup() {
  Serial.begin(9600);

  pinMode(13, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED0, OUTPUT);

  pinMode(2, INPUT_PULLUP);

  matrix.begin();
  matrix.beginDraw();
  matrix.stroke(0xFFFFFFFF);
  matrix.textFont(Font_5x7);
  matrix.beginText(4, 1, 0xFFFFFF);
}

void loop() {
  int s = digitalRead(2);
  if (s == LOW) { 
    state ^= 1;
    if (state) t1.enable(); else t1.disable();
    delay(300);
  }

  if(!state) adjust();

  ts.execute();
}

void display() {
  digitalWrite(LED2, n & 4);
  digitalWrite(LED1, n & 2);
  digitalWrite(LED0, n & 1);
  sprintf(buf, "%d", n);
  matrix.println(buf);
  matrix.endText();
}

void count() {
  display();
  n = (n + 1) % 8;
}

void adjust() {
  int c = analogRead(A1);
  n = map(c, 0, 1023, 0, 7);
  display();
}