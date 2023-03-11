const int touchPinA = 2;
const int touchPinB = 3;
const int touchPinC = 4;
const int touchPinD = 5;
const int touchPinE = 6;
const int touchPinF = 7;

int touchValueA;
int touchValueB;
int touchValueC;
int touchValueD;
int touchValueE;
int touchValueF;

int noid1 = 8;
int noid2 = 9;
int noid3 = 10;
int noid4 = 11;
int noid5 = 12;
int noid6 = 13;

int noidonTime = 40;
int noidoffTime = 125;

void setup() {

  pinMode (noid1, OUTPUT);
  pinMode (noid2, OUTPUT);
  pinMode (noid3, OUTPUT);
  pinMode (noid4, OUTPUT);
  pinMode (noid5, OUTPUT);
  pinMode (noid6, OUTPUT);

  pinMode(touchPinA, INPUT_PULLUP);
  pinMode(touchPinB, INPUT_PULLUP);
  pinMode(touchPinC, INPUT_PULLUP);
  pinMode(touchPinD, INPUT_PULLUP);
  pinMode(touchPinE, INPUT_PULLUP);
  pinMode(touchPinF, INPUT_PULLUP);
}

void loop() {


  if (digitalRead(touchPinA) == LOW) {
    noidA();
    noidOffA();
  }
  if (digitalRead(touchPinB) == LOW) {
    noidB();
    noidOffB();
  }
  if (digitalRead(touchPinC) == LOW) {
    noidC();
    noidOffC();
  }
  if (digitalRead(touchPinD) == LOW) {
    noidD();
    noidOffD();
  }
  if (digitalRead(touchPinE) == LOW) {
    noidE();
    noidOffE();
  }
  if (digitalRead(touchPinF) == LOW) {
    noidF();
    noidOffF();
  }
}

///////////////

void noidA() {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidonTime) {
    digitalWrite(noid1, HIGH);

    if (millis() - snapshotOfTime > noidonTime) break;
  }
}

void noidOffA () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidoffTime) {
    digitalWrite(noid1, LOW);

    if (millis() - snapshotOfTime > noidoffTime) break;
  }
}

void noidB () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidonTime) {
    digitalWrite(noid2, HIGH);

    if (millis() - snapshotOfTime > noidonTime) break;
  }
}

void noidOffB () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidoffTime) {
    digitalWrite(noid2, LOW);

    if (millis() - snapshotOfTime > noidoffTime) break;
  }
}

void noidC () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidonTime) {
    digitalWrite(noid3, HIGH);

    if (millis() - snapshotOfTime > noidonTime) break;
  }
}

void noidOffC () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidoffTime) {
    digitalWrite(noid3, LOW);

    if (millis() - snapshotOfTime > noidoffTime) break;
  }
}

void noidD () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidonTime) {
    digitalWrite(noid4, HIGH);

    if (millis() - snapshotOfTime > noidonTime) break;
  }
}

void noidOffD () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidoffTime) {
    digitalWrite(noid4, LOW);

    if (millis() - snapshotOfTime > noidoffTime) break;
  }
}
void noidE () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidonTime) {
    digitalWrite(noid5, HIGH);

    if (millis() - snapshotOfTime > noidonTime) break;
  }
}

void noidOffE () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidoffTime) {
    digitalWrite(noid5, LOW);

    if (millis() - snapshotOfTime > noidoffTime) break;
  }
}
void noidF () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidonTime) {
    digitalWrite(noid6, HIGH);

    if (millis() - snapshotOfTime > noidonTime) break;
  }
}

void noidOffF () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidoffTime) {
    digitalWrite(noid6, LOW);

    if (millis() - snapshotOfTime > noidoffTime) break;
  }
}
