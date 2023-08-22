import math
from math import sin, cos, tan, pi
# from pyquaternion import Quaternion
# import numpy as np
# C_local = np.r_[
#             np.c_[0, 1, 0],
#             np.c_[-1, 0, 0],
#             np.c_[0, 0, 1]
#          ]
# local_rot = Quaternion._from_matrix(C_local)
# print(C_local)
# print(local_rot)

# print()
# print("...........................")
# print("Method Quaternions")
# print()

# flu2ned = Quaternion([0.,1.,0.,0.])
# quat2 = Quaternion([0.,-1.,0.,0.])
# ned_rot = flu2ned * local_rot * quat2
# print(ned_rot.yaw_pitch_roll)
# print(ned_rot)
# print(ned_rot.rotation_matrix)

# print()
# print("...........................")
# print("Method Rotation Matrices")
# print()

# C_flu2ned = np.r_[
#             np.c_[1, 0, 0],
#             np.c_[0, -1, 0],
#             np.c_[0, 0, -1]
#          ]
# C_ned = C_flu2ned @ C_local @ np.linalg.inv(C_flu2ned)
# ned_rot2 = Quaternion._from_matrix(C_ned)

# print(ned_rot2.yaw_pitch_roll)
# print(ned_rot2)
# print(ned_rot2.rotation_matrix)
# x1 = 0
# y1 = 0
# x2 = 5
# y2 = 0
# x3 = 1
# y3 = 1
# d = 0.3
# def dbp(x1, y1, x2, y2):
#    #distance between points
#    return math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
# def hov(x1, y1, x2, y2):
#    #horizontal or vertical
#    if x2==x1:
#       return True
#    elif y2== y1:
#       return False
# def gd(a,b):
#    if a-b<0:
#       return -1
#    else:
#       return 1
# def tpol(x1,y1,x2,y2,x3,y3,d):
#    if hov(x1,y1,x2,y2):
#       return [x1,y3+d*gd(y1,y2)]
#    else:
#       return [x3+d*gd(x1,x2),y1]
# print(tpol(x1,y1,x2,y2,x3,y3,d))
def setpointcreator():
   sp = (0.0, 0.0, -0.25, 1.5)
   setpoint_targets = [sp]
   for t in range(20):
      xt = 2*cos(2*pi*(t/20))
      yt = 2*sin(2*pi*(t/20))
      setpoint_targets.append((sp[0]+xt, sp[1]+yt, sp[2]-0.20, sp[3]+0.00))
   





