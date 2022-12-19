class C1:
  def __init__(self, i):
    self.i = i

  def quadrato(self):
    q = self.i ** 2
    return q
  

class C2(C1):
  def __init__(self,i):
    super().__init__(i)

x = C2(5)
print(x.quadrato())