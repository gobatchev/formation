#!/usr/bin/python3.6
# -*-coding:utf-8 -*
"""module table"""


def table(nb, max=50):
    """Function for multiplication table"""
    for i in range(max):
        print(i, "*", nb, "=", i*nb)


# test de la fonction
if __name__ == "__main__":
    table(5)
    input
