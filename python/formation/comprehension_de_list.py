inventaire = [
    ("pommes", 22),
    ("melons", 4),
    ("poires", 18),
    ("fraises", 76),
    ("prunes", 51),
]
# On change le sens de l'inventaire, la quantité avant le nom

inventaire_inverse = [(qtt, nom_fruit) for nom_fruit,qtt in inventaire]

# On n'a plus qu'à trier dans l'ordre décroissant l'inventaire inversé

# On reconstitue l'inventaire trié

inventaire = [(nom_fruit, qtt) for qtt,nom_fruit in sorted(inventaire_inverse, \

    reverse=True)]
print(inventaire)
