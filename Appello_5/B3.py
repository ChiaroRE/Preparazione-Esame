class Rettangolo:
  
  def __init__(self, l,h):
    self.altezza = h
    self.lunghezza = l

  def perimetro(self):
    p= self.altezza * 2 + self.lunghezza * 2
    return p

  def area(self):
    a = self.altezza * self.lunghezza
    return a

  def display(self):
    print('Lunghezza: {} cm'.format(self.lunghezza))
    print('Altezza: {} cm'.format(self.altezza))
    print('Perimetro: {} cm'.format(self.perimetro()))
    print('Area: {} cm^2'.format(self.area()))
    

class Parallepipedo(Rettangolo):

  def __init__(self,l,h,z):
    super().__init__(l,h)
    self.altezzaZ = z

  def volume(self):
    vol = self.area() * self.altezza
    return vol

x = Rettangolo(5,10)
x.display()

y = Parallepipedo(5,23,7)
x.display()
print(y.volume())
