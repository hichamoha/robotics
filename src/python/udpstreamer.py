import socket
import sys

receive_ip = "130.235.83.67"
send_ip = "127.0.0.1"

UDP_IP_receive = receive_ip 
UDP_PORT_receive = 5555

UDP_IP_send = send_ip 
UDP_PORT_send = UDP_PORT_receive + 1


sock_receive = socket.socket(socket.AF_INET, socket.SOCK_DGRAM) #Internet-UDP
sock_receive.bind((UDP_IP_receive, UDP_PORT_receive))

sock_send = socket.socket(socket.AF_INET, socket.SOCK_DGRAM) #Internet-UDP
#sock_send.bind((UDP_IP_send, UDP_PORT_send))


MESSAGE = b"Hello, World! 3.151251613"

while True:
    data, addr = sock_receive.recvfrom(1024) # Buffer size = 1024
    datas = data.decode("utf-8")
    tokens = "".join(datas.split())
    data_vector = tokens.split(',')
    accel = data_vector[2:5]
    gyro = data_vector[6:9]
    
    #Relay z-accel
    MESSAGE = accel[2].encode()
    sock_send.sendto(MESSAGE, (UDP_IP_send, UDP_PORT_send))
	    
    print(accel[0]," ", accel[1]," ", accel[2])
    sys.stdout.flush()


#    print(data))

#for i in range(10):
   # data, addr = sock_receive.recvfrom(1024) # Buffer size = 1024
   # print(data)
    #print(len(data))
   # MESSAGE = data
   # sock_send.sendto(MESSAGE, (UDP_IP_send, UDP_PORT_send))
