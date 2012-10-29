require 'serialport'

port = "/dev/tty.usbmodemfd131"
sp = SerialPort.new(port, 9600, 8, 1, SerialPort::NONE)
while true
  line = gets.chomp
  sp.putc line
end
sp.close
