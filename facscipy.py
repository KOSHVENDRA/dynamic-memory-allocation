import time
start_time=time.time()
from scipy.special import factorial
print("\n",factorial(45))
end_time=time.time()
k=end_time-start_time
print("\ntime taken by code",k)
