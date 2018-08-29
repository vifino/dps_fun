# Makefile
DEVICE ?= arduino:avr:micro
PORT ?= /dev/ttyACM0

OBJS = dps_scpi.arduino.avr.micro.elf dps_scpi.arduino.avr.micro.hex

all: upload

$(OBJS): dps_scpi.ino
	arduino-cli compile -b $(DEVICE)

upload: $(OBJS)
	arduino-cli upload -b $(DEVICE) -p $(PORT)

clean:
	rm -f $(OBJS)
