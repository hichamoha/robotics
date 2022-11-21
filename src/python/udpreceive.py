import socket

receive_ip = "127.0.0.1"

UDP_IP_receive = receive_ip 
UDP_PORT_receive = 6666

sock_receive = socket.socket(socket.AF_INET, socket.SOCK_DGRAM) #Internet-UDP
sock_receive.bind((UDP_IP_receive, UDP_PORT_receive))

while True:
    data, addr = sock_receive.recvfrom(1024) # Buffer size = 1024
    print(data)
