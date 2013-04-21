import serial

ser = serial.Serial('/dev/tty.usbmodem1411', 9600)
while 1:
    line = ser.readline()
    if line:
    	values = line.split(';')
    	light, temp = values
    	print("light: %s, temperature: %s" % (light, temp))