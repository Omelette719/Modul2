import math

A, B = map(float, input().split())

C = math.sqrt(B**2 - A**2)
keliling = A + B + C
luas = 1/2 * A * C

print(f"\nAlas = {C:.0f} cm")
print(f"Tinggi = {A:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")
