from pyquaternion import Quaternion
import numpy as np
C_local = np.r_[
            np.c_[0, 1, 0],
            np.c_[-1, 0, 0],
            np.c_[0, 0, 1]
         ]
local_rot = Quaternion._from_matrix(C_local)
print(C_local)
print(local_rot)

print()
print("...........................")
print("Method Quaternions")
print()

flu2ned = Quaternion([0.,1.,0.,0.])
quat2 = Quaternion([0.,-1.,0.,0.])
ned_rot = flu2ned * local_rot * quat2
print(ned_rot.yaw_pitch_roll)
print(ned_rot)
print(ned_rot.rotation_matrix)

print()
print("...........................")
print("Method Rotation Matrices")
print()

C_flu2ned = np.r_[
            np.c_[1, 0, 0],
            np.c_[0, -1, 0],
            np.c_[0, 0, -1]
         ]
C_ned = C_flu2ned @ C_local @ np.linalg.inv(C_flu2ned)
ned_rot2 = Quaternion._from_matrix(C_ned)

print(ned_rot2.yaw_pitch_roll)
print(ned_rot2)
print(ned_rot2.rotation_matrix)



