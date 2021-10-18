import matplotlib.pyplot as plt
from math import *

d = []
i = []

for j in range(200):
	dj = 0.333 + j * 0.333
	ij =  30.0 * 78e3 * 0.7 / (2*pi * 4e3 * dj * (dj + 0.7))
	d.append(dj)
	i.append(ij)

plt.plot(d, i)
plt.grid()
plt.show()
