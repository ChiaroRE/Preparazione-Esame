class MyPower:
  def __init__(self, a):
    try:
      self.a = a
    except (a <= 0):
      print('a should be positive')

  def it(self):
    valori = []
    for i in range(1,self.a + 1):
      elemento = (3**(i+1))/i
      valori.append(elemento)
    return valori

  def mean_pow_a(self):
    somma = 0
    lista = self.it()
    for item in lista:
      somma = somma + item
    media = somma/len(lista)
    return media
    
x = MyPower(5)
print(x.it())
print(x.mean_pow_a())