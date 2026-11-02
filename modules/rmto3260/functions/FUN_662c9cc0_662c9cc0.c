/* Module: rmto3260.dll
   Function: FUN_662c9cc0
   Address: 662c9cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c9cc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *local_8;
  
  piVar1 = param_1;
  (**(code **)(*param_1 + 0x48))(param_1);
  iVar2 = (**(code **)(*piVar1 + 0x40))(piVar1);
  iVar4 = 0;
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*(int *)piVar1[0x10] + 0x30))((int *)piVar1[0x10],(int)&param_1 + 2);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
    }
  }
  piVar1[0x29] = 0;
  piVar1[0x2a] = 0;
  if ((-1 < iVar2) && (param_1._2_2_ != 0)) {
    do {
      if (iVar2 < 0) break;
      iVar2 = (**(code **)(*(int *)piVar1[0x10] + 0x38))((int *)piVar1[0x10],iVar4,&local_8);
      if (-1 < iVar2) {
        iVar3 = FUN_662cae30(local_8);
        if (iVar3 != 0) {
          piVar1[0x29] = piVar1[0x29] + 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while ((ushort)iVar4 < param_1._2_2_);
  }
  if (piVar1[0x12] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(piVar1[0x12] + 0x10);
  }
  piVar1[0x29] = iVar4 * piVar1[0x29];
  if (-1 < iVar2) {
    iVar4 = 0;
    if (param_1._2_2_ != 0) {
      do {
        if (iVar2 < 0) goto LAB_662c9dbc;
        iVar2 = (**(code **)(*(int *)piVar1[0x10] + 0x38))((int *)piVar1[0x10],iVar4,&local_8);
        if (-1 < iVar2) {
          iVar3 = FUN_662cae30(local_8);
          if ((iVar3 != 0) && (*(int *)((int)local_8 + 0x16) != 0)) {
            iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,local_8);
          }
        }
        iVar4 = iVar4 + 1;
      } while ((ushort)iVar4 < param_1._2_2_);
    }
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1);
    }
LAB_662c9dbc:
    (**(code **)(*piVar1 + 0x48))(piVar1);
    if ((-1 < iVar2) && (1 < (uint)piVar1[0xf])) {
      iVar4 = 0;
      if (param_1._2_2_ != 0) {
        do {
          if (iVar2 < 0) goto LAB_662c9e21;
          iVar2 = (**(code **)(*(int *)piVar1[0x10] + 0x38))((int *)piVar1[0x10],iVar4,&local_8);
          if (-1 < iVar2) {
            iVar3 = FUN_662cae30(local_8);
            if ((iVar3 != 0) && (*(int *)((int)local_8 + 0x16) == 0)) {
              iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,local_8);
            }
          }
          iVar4 = iVar4 + 1;
        } while ((ushort)iVar4 < param_1._2_2_);
      }
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1);
      }
LAB_662c9e21:
      (**(code **)(*piVar1 + 0x48))(piVar1);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*piVar1 + 0x58))(piVar1);
      }
    }
  }
  return iVar2;
}


