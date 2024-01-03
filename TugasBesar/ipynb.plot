import matplotlib.pyplot as plt
import numpy as np
efermi = -1.724
x, y = np.loadtxt('pendulum.dat', unpack=True)
plt.figure()
plt.plot(x, y, color='red')
plt.xlabel('x')
plt.ylabel('y')
plt.savefig('pendulum.pdf', bbox_inches='tight')
