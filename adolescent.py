import math

def nextCube(cube, cylinder):
    if (cube[1] >= cylinder[1]*2):
        return "cube"
    elif (cylinder[1] >= cube[1] * 0.5 * math.sqrt(2)):
        return "cylinder"
    else: return "impossible"

num_blocks = int(input())
blocks = [input().split() for _ in range(num_blocks)]
blocks = [[block[0], int(block[1])] for block in blocks]
cube_blocks = [block for block in blocks if block[0] == 'cube']
cylinder_blocks = [block for block in blocks if block[0] == 'cylinder']
cube_blocks.sort(key=lambda x: x[1], reverse=True)
cylinder_blocks.sort(key=lambda x: x[1], reverse=True)
tower = []
imp = False
i = 0
j = 0
while (i < len(cube_blocks) and j < len(cylinder_blocks)):
    if nextCube(cube_blocks[i],cylinder_blocks[j]) == "cube":
        tower.append(cube_blocks[i])
        i += 1
    elif nextCube(cube_blocks[i],cylinder_blocks[j]) == "cylinder":
        tower.append(cylinder_blocks[j])
        j += 1
    else:
        print("impossible")
        imp = True
        break
while (i < len(cube_blocks)):
    tower.append(cube_blocks[i])
    i += 1
while (j < len(cylinder_blocks)):
    tower.append(cylinder_blocks[j])
    j += 1
tower = reversed(tower)
if imp == False:
    for block in tower:
        print(f"{block[0]} {block[1]}")