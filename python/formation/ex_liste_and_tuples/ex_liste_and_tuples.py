def afficher_flotant(flottant):
    if type(flottant) is not float:
        raise TypeError("is not a float")
    flottant = str(flottant)
    entier, decimal = flottant.split(".")
    decimal = decimal[:2]
    titi = ",".join([entier, decimal])
    return titi

print(afficher_flotant(3))


