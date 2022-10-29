#include "simpleHC12.h"
#include <SoftwareSerial.h>
const unsigned int hc12RxPin = 4;
const unsigned int hc12TxPin = 3;
const unsigned int hc12SetPin = 2;
const unsigned long baudRate = 19200;
const unsigned messagelength = 5; 
boolean useChecksum = true;
simpleHC12 HC12(hc12TxPin, hc12RxPin, hc12SetPin, baudRate, messageLength, useChecksum )


void setup() {
  // put your setup code here, to run once:
Serial.begin (115200)
Hc12.safeSetBaudRate();

}

void loop() {
  // put your main code here, to run repeatedly:
  HC12.read();
  if(HC12.dataIsReady(){if(HC12.checksymOk()){strncpy(data, HC12.getRcvData(), 1);
  data[messageLength]='\0';
  else{}
  HC12.setReadyToRecieve();
  }
  }
  )

}
