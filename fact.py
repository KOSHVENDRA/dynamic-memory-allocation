import time
def fact(n):
    if (n==1):
        return 1
    fac=1
    fac=n*fact(n-1)
    return fac
start_time=time.time()
print (fact(45))
end_time=time.time()
k=end_time-start_time
print("\ntime taken by code",k)

    
     
