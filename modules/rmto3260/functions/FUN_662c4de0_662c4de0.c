/* Module: rmto3260.dll
   Function: FUN_662c4de0
   Address: 662c4de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c4de0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 local_38 [4];
  int local_34;
  int local_2e;
  undefined1 local_24 [4];
  short local_20;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar4 = 0;
  iVar3 = param_1[0x11];
  local_14 = *(int *)(iVar3 + 4);
  if (iVar3 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(undefined4 *)(iVar3 + 0x10);
  }
  local_c = 0;
  local_10 = 0;
  if ((ushort)local_8 != 0) {
    do {
      if (iVar4 < 0) {
        return iVar4;
      }
      piVar2 = (int *)FUN_662ed930(&local_14);
      iVar3 = *piVar2;
      *(undefined4 *)(iVar3 + 0x22) = 0;
      if (*(int *)(iVar3 + 0x16) == 0) {
        iVar4 = (**(code **)(*(int *)param_1[6] + 0x20))(*(undefined4 *)(iVar3 + 8),0);
        if (((iVar4 < 0) || (iVar4 = (**(code **)(*param_1 + 0x68))(param_1,local_38), iVar4 < 0))
           || (local_2e == 0)) {
          *(undefined4 *)(iVar3 + 0x22) = 0;
        }
        else {
          iVar4 = (**(code **)(*param_1 + 0x74))(param_1,local_24);
          if ((-1 < iVar4) && (local_20 == *(short *)(iVar3 + 4))) {
            *(undefined4 *)(iVar3 + 0x22) = 1;
            piVar2 = operator_new(0x16);
            if (piVar2 == (int *)0x0) {
              iVar4 = -0x7ff8fff2;
            }
            else {
              *(undefined2 *)(piVar2 + 4) = *(undefined2 *)(iVar3 + 4);
              iVar1 = *(int *)(iVar3 + 8);
              *piVar2 = iVar1;
              piVar2[2] = *(int *)(iVar3 + 0xc);
              *(undefined4 *)((int)piVar2 + 0x12) = 0;
              piVar2[1] = local_34 + iVar1;
              piVar2[3] = (local_34 + iVar1) - iVar1;
              FUN_662ed8a0((void *)param_1[0x12],piVar2);
            }
          }
        }
      }
      else {
        *(undefined4 *)(iVar3 + 0x22) = 1;
        if (local_c == 0) {
          local_c = 1;
          piVar2 = operator_new(0x16);
          if (piVar2 == (int *)0x0) {
            iVar4 = -0x7ff8fff2;
          }
          else {
            *(undefined2 *)(piVar2 + 4) = *(undefined2 *)(iVar3 + 4);
            *piVar2 = *(int *)(iVar3 + 8);
            iVar4 = *(int *)(iVar3 + 0xc);
            *(undefined4 *)((int)piVar2 + 0x12) = 1;
            piVar2[2] = iVar4;
            iVar4 = (**(code **)(*(int *)param_1[6] + 0x20))(*(undefined4 *)(iVar3 + 8),0);
            if ((-1 < iVar4) &&
               (iVar4 = (**(code **)(*param_1 + 0x68))(param_1,local_38), -1 < iVar4)) {
              iVar3 = local_34 + *piVar2;
              piVar2[1] = iVar3;
              piVar2[3] = iVar3 - *piVar2;
              FUN_662ed8a0((void *)param_1[0x12],piVar2);
            }
          }
        }
      }
      local_10 = local_10 + 1;
    } while ((ushort)local_10 < (ushort)local_8);
  }
  return iVar4;
}


