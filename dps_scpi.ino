// DPS5020 ModBus <-> SCPI
// Very WIP

#include <stdint.h>
#include <ModbusMaster.h>

#include "./DPS_MBCMDS.h"

ModbusMaster node;

void setup() {
  Serial.begin(115200);

	// Init modbus
  Serial1.begin(19200);
  node.begin(1, Serial1);

	while(!Serial) {}
}

static uint16_t read_reg(uint8_t reg) {
	uint8_t res;
	res = node.readHoldingRegisters(reg, 1);
	if (res == node.ku8MBSuccess)
		return node.getResponseBuffer(0);

	return 0;
}

void loop() {
  Serial.println(read_reg(DPS_UOUT));
	Serial.println(read_reg(DPS_IOUT));
	delay(1000);
}
