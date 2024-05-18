shapes = {
    'Tetrahedron': 4,
    'Cube': 6,
    'Octahedron': 8,
    'Dodecahedron': 12,
    'Icosahedron': 20
}
 
n = int(input())
total_faces = 0
for _ in range(n):
    total_faces += shapes[input()]
print(total_faces)
