// ModBus RTU register names for a DPS2020

#define DPS_USET  0x00 // Volt setting (Centivolts)
#define DPS_ISET  0x01 // Current setting (Centiamps)

#define DPS_UOUT  0x02 // Volt output (Centivolts)
#define DPS_IOUT  0x03 // Current output (Centiamps)

#define DPS_UIN   0x04 // Input Voltage (Centivolts)

#define DPS_MODE  0x08 // Mode of operation
#define DPS_MODE_CV 0
#define DPS_MODE_CC 1

#define DPS_STATE 0x09
#define DPS_STATE_OFF 0
#define DPS_STATE_ON  1

#define DPS_MODEL 0x0B
#define DPS_VER   0x0C

