import math

R = 6371009

def to_rad(deg):
    return deg * math.pi / 180

def distance(lat1, lon1, lat2, lon2):
    lat1, lon1, lat2, lon2 = map(to_rad, [lat1, lon1, lat2, lon2])
    d = math.acos(math.sin(lat1) * math.sin(lat2) + math.cos(lat1) * math.cos(lat2) * math.cos(lon2 - lon1))  # angular distance
    d_great_circle = R * d
    d_straight_line = 2 * R * math.sin(d / 2)
    return d_great_circle - d_straight_line

t = int(input())
for _ in range(t):
    lat1, lon1, lat2, lon2 = map(float, input().split())
    print(distance(lat1, lon1, lat2, lon2))