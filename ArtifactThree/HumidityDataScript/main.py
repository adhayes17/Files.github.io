import matplotlib.pyplot as plt
import csv

x = []
y = []
z = []

with open('weather_data.csv','r') as csvfile:
    lines = csv.reader(csvfile, delimiter = ',')
    for row in lines:
        x.append(row[0])
        y.append(int(row[3]))
        z.append(int(row[4]))

plt.plot(x,y, color ='r', linestyle = 'solid',
         marker = 'o', label = "High Humidity")
plt.plot(z, color = 'g', linestyle = 'dashed',
         marker = 'o', label = "Low Humidity")

plt.xticks(rotation = 25)
plt.xlabel('Dates')
plt.ylabel('Humidity(%)')
plt.title('Baton Rouge Weather - 09/01-09/15', fontsize = 20)
plt.grid()
plt.legend()
plt.show()

