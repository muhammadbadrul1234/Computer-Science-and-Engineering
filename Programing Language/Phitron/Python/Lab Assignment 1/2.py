import requests
from time import sleep
 
api = "https://api.openweathermap.org/data/2.5/weather?q=sylhet&units=metric&appid=4b5f5c378962441c1c0063e2bb400c5c"
 
def weather_data(api):
    weather = requests.get(api)
    weather_data = weather.json()
    print(f"Location: {weather_data['name']}")
    print(f"Current Weather: {weather_data['main']['temp']}° Celsius")
 
while True:
    weather_data(api)
    sleep(1800)