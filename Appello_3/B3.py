class Veicolo:

  def __init__(self,p,v,km):
    self.posti = p
    self.velocità = v
    self.km = km

class Auto4(Veicolo):

  def__init__(self,v,km):
    super().__init__(4,v,km)
    

class Auto5(Veicolo):

  def__init__(self,v,km):
    super().__init__(5,v,km)

class Bus_90(Veicolo):

  def__init__(self,p,km):
    super().__init__(p,90,km)
    self.velocità = 90

class Bus_130(Veicolo):

  def__init__(self,p,km):
    super().__init__(p, 130, km)
    

