class Function:
  
  def eval(self):
    pass

  def f_hat(self,a,b,N):
    d = (b - a)/N
    somma = 0
    for i in range(N):
      somma = somma + self.eval(a + i * d)
      
    f = 1/N * somma
    return somma

class Expo(Function):

  def eval(self, x):
    ris = x**2 + 2*x
    return ris

fun = Expo()
print(fun.f_hat(0,6,3))


    
    