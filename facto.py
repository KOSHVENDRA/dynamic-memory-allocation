import time

from ctypes import*
fat=CDLL('./functon.so')
start_time=time.time()
f=fat.fact(12)
print(f)
end_time=time.time()
k=end_time-start_time
print("\ntime taken by code",k)
