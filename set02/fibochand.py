class fibo:
    def __init__(self,n):
        self.n=n
        self.a=0
        self.b=1
    def __iter__(self):
        return self
    def __next__(self):
        temp = self.a
        if self.a>self.n:
            raise StopIteration
        self.a,self.b=self.b,self.a+self.b
        return temp
    
    x=fibo(10)
next(x)

next(x)
 