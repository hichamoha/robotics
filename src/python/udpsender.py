import socket

UDP_IP_send = "127.0.0.1" #Local IP, change if you want to send to another device
UDP_PORT_send = 6666	  #Port to receive on in the C-program

sock_send = socket.socket(socket.AF_INET, socket.SOCK_DGRAM) #Internet-UDP

MESSAGE = b"2.718281828" #Alternativt MESSAGE = encode("2.718281828")

#Send the message until program is closed
while True:

	sock_send.sendto(MESSAGE, (UDP_IP_send, UDP_PORT_send))
