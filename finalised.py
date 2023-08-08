import socket
import pyautogui
import time

serverIP = "192.168.237.237"  # Replace with the IP address of your computer
port = 8000

# Initialize the connection outside the main loop
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.bind((serverIP, port))
sock.listen(1)

print("Waiting for connection...")

while True:
    # Accept new connections in the outer loop
    conn, addr = sock.accept()
    print("Connected with", addr)

    current_key = None

    while True:
        data = conn.recv(1024).decode()
        if not data:
            break

        # Process the received command
        command = data.strip().upper()

        if command == "RIGHT":
            if current_key != "RIGHT":
                print("Command: RIGHT")
                pyautogui.keyDown('right')
                time.sleep(0.25)
                pyautogui.keyUp('right')
                current_key = "RIGHT"
        elif command == "LEFT":
            if current_key != "LEFT":
                print("Command: LEFT")
                pyautogui.keyDown('left')
                time.sleep(0.25)
                pyautogui.keyUp('left')
                current_key = "LEFT"
        elif command == "FORWARD":
            if current_key != "FORWARD":
                print("Command: FORWARD")
                pyautogui.keyDown('up')
                time.sleep(0.25)
                pyautogui.keyUp('up')
                current_key = "FORWARD"
        else:
            if current_key:
                pyautogui.keyUp(current_key)
                current_key = None

    # Close the connection when the inner loop is terminated
    conn.close()