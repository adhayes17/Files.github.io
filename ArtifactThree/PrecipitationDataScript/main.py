import matplotlib.pyplot as plt
import csv

x = []
y = []


with open('weather_data.csv','r') as csvfile:
    lines = csv.reader(csvfile, delimiter = ',')
    for row in lines:
        x.append(row[0])
        y.append(float(row[5]))


plt.plot(x,y, color ='b', linestyle = 'solid',
         marker = 'o', label = "Precipitation")


plt.xticks(rotation = 25)
plt.xlabel('Dates')
plt.ylabel('Precipitation(in)')
plt.title('Baton Rouge Weather - 09/01-09/15', fontsize = 20)
plt.grid()
plt.legend()
plt.show()
