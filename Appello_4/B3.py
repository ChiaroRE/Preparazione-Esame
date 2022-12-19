class Obj:

  def __init__(self, a,b,c):
    self.a = a
    self.b = b
    self.c = c

  def p(self,x):
    risultato = (self.a * x**2) + (self.b * x) + self.c
    return risultato

f1 = Obj(1,2,0)
f2 = Obj(1,2,-1)
o1 = f1.p(5)
o2 = f2.p(5)

print('{}'.format(o1))
print('{}'.format(o2))


    
    