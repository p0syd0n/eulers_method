def dydx(x, y):
    return x*(y**2)

steps = 1000
initial = (1, -1)
goal = 2
delta_x = (goal-initial[0])/steps
current = initial
for _ in range(steps):
    current = (current[0]+delta_x, current[1]+(delta_x*dydx(current[0], current[1])))
print(current)
