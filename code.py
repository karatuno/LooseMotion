import serial ,requests, json, time
arduino = serial.Serial('COM1', 9600, timeout=.1)
time.sleep(1)
response = requests.get("https://traffic.cit.api.here.com/traffic/6.1/flow.json?bbox=12.9900%2C77.5759%3B12.9803%2C77.5767&app_id=zbvY0tdRs089c3ZTKqWR&app_code=pxAtGksNBgVD9V5XF5nEzA",)
response.content.decode("utf-8")
data = response.json()
text = str(data)
l = len(text)
for i in range(0,l):
    if text[i] == 'J':
        j = text[i + 5]
        print (j)
        arduino.write(j.encode())
        break

