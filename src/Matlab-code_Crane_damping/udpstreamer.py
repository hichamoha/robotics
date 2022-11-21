import socket

receive_ip = "192.168.68.147"
send_ip = "127.0.0.1"

UDP_IP_receive = receive_ip 
UDP_PORT_receive = 5555

UDP_IP_send = send_ip 
UDP_PORT_send = UDP_PORT_receive + 1


sock_receive = socket.socket(socket.AF_INET, socket.SOCK_DGRAM) #Internet-UDP
sock_receive.bind((UDP_IP_receive, UDP_PORT_receive))

sock_send = socket.socket(socket.AF_INET, socket.SOCK_DGRAM) #Internet-UDP
#sock_send.bind((UDP_IP_send, UDP_PORT_send))


MESSAGE = b"Hello, World!"

while True:
    data, addr = sock_receive.recvfrom(1024) # Buffer size = 1024
    print(data)

for i in range(10):
    data, addr = sock_receive.recvfrom(1024) # Buffer size = 1024
    print(data)
    #print(len(data))
    MESSAGE = data
    sock_send.sendto(MESSAGE, (UDP_IP_send, UDP_PORT_send))
