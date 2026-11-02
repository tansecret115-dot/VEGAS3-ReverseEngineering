/* Module: sftrans1.dll
   Function: FUN_0045d440
   Address: 0045d440
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045d440(int param_1,int param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
                uint *param_6,int *param_7)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_4;
  
  uVar3 = 0;
  if (param_2 == 0) {
    uVar4 = ~*(uint *)(param_1 + 0x80) & 1;
    if (*(uint *)(param_1 + 0x88) <= param_3) {
      return 1;
    }
    if (*(uint *)(param_1 + 0x8c) <= param_3) {
      uVar3 = 1;
    }
  }
  else {
    uVar4 = ~*(uint *)(param_1 + 0x80) >> 1 & 1;
    if (param_3 != 0) {
      return 1;
    }
  }
  local_4 = 0;
  if ((param_4 != (undefined4 *)0x0) && (BVar1 = IsBadWritePtr(param_4,4), BVar1 == 0)) {
    *param_4 = uVar3;
  }
  if (param_5 == (undefined4 *)0x0) {
    if (param_6 != (uint *)0x0) {
      BVar1 = IsBadWritePtr(param_6,4);
      if (BVar1 != 0) {
        return -0x7fffbffd;
      }
      *param_6 = (uVar4 != 0) + 1;
    }
  }
  else {
    BVar1 = IsBadWritePtr(param_6,4);
    if ((BVar1 != 0) || (BVar1 = IsBadWritePtr(param_5,*param_6 << 4), BVar1 != 0)) {
      return -0x7ff8ffa9;
    }
    if (uVar4 == 0) {
      if (*param_6 == 0) {
        local_4 = -0x7ff8ff16;
        *param_6 = 1;
      }
      else {
        *param_5 = DAT_0055d868;
        param_5[1] = DAT_0055d86c;
        param_5[2] = DAT_0055d870;
        param_5[3] = DAT_0055d874;
        *param_6 = 1;
      }
    }
    else {
      if (*param_6 != 0) {
        *param_5 = DAT_005547c0;
        param_5[1] = DAT_005547c4;
        param_5[2] = DAT_005547c8;
        param_5[3] = DAT_005547cc;
      }
      if (*param_6 < 2) {
        local_4 = -0x7ff8ff16;
      }
      else {
        param_5[4] = DAT_0055d848;
        param_5[5] = DAT_0055d84c;
        param_5[6] = DAT_0055d850;
        param_5[7] = DAT_0055d854;
      }
      *param_6 = 2;
    }
    if (local_4 != 0) {
      return local_4;
    }
  }
  if (param_7 == (int *)0x0) {
    return local_4;
  }
  BVar1 = IsBadWritePtr(param_7,4);
  if (BVar1 != 0) {
    return -0x7fffbffd;
  }
  if (param_2 == 0) {
    *param_7 = 0;
    if (*(uint *)(param_1 + 0x74) <= param_3) goto LAB_0045d64e;
    iVar2 = *(int *)(*(int *)(param_1 + 0x98) + param_3 * 0x18);
  }
  else {
    iVar2 = *(int *)(param_1 + 0xa0);
  }
  *param_7 = iVar2;
LAB_0045d64e:
  param_7 = (int *)*param_7;
  if (param_7 != (int *)0x0) {
    (**(code **)(*param_7 + 4))(param_7);
  }
  return local_4;
}


