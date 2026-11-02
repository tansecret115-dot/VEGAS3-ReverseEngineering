/* Module: sfpagepeel.dll
   Function: FUN_00410400
   Address: 00410400
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00410400(int param_1,int param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
                uint *param_6,int *param_7)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_4;
  
  uVar4 = 0;
  if (param_2 == 0) {
    uVar5 = ~*(uint *)(param_1 + 0x80) & 1;
    if (*(uint *)(param_1 + 0x88) <= param_3) {
      return 1;
    }
    if (*(uint *)(param_1 + 0x8c) <= param_3) {
      uVar4 = 1;
    }
  }
  else {
    uVar5 = ~*(uint *)(param_1 + 0x80) >> 1 & 1;
    if (param_3 != 0) {
      return 1;
    }
  }
  local_4 = 0;
  if ((param_4 != (undefined4 *)0x0) && (BVar2 = IsBadWritePtr(param_4,4), BVar2 == 0)) {
    *param_4 = uVar4;
  }
  if (param_5 == (undefined4 *)0x0) {
    if (param_6 != (uint *)0x0) {
      BVar2 = IsBadWritePtr(param_6,4);
      if (BVar2 != 0) {
        return -0x7fffbffd;
      }
      *param_6 = (uVar5 != 0) + 1;
    }
  }
  else {
    BVar2 = IsBadWritePtr(param_6,4);
    if ((BVar2 != 0) || (BVar2 = IsBadWritePtr(param_5,*param_6 << 4), BVar2 != 0)) {
      return -0x7ff8ffa9;
    }
    if (uVar5 == 0) {
      if (*param_6 == 0) {
        local_4 = -0x7ff8ff16;
        *param_6 = 1;
      }
      else {
        *param_5 = DAT_00470e08;
        param_5[1] = DAT_00470e0c;
        param_5[2] = DAT_00470e10;
        param_5[3] = DAT_00470e14;
        *param_6 = 1;
      }
    }
    else {
      if (*param_6 != 0) {
        *param_5 = DAT_0046f640;
        param_5[1] = DAT_0046f644;
        param_5[2] = DAT_0046f648;
        param_5[3] = DAT_0046f64c;
      }
      if (*param_6 < 2) {
        local_4 = -0x7ff8ff16;
      }
      else {
        param_5[4] = DAT_00470de8;
        param_5[5] = DAT_00470dec;
        param_5[6] = DAT_00470df0;
        param_5[7] = DAT_00470df4;
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
  BVar2 = IsBadWritePtr(param_7,4);
  if (BVar2 != 0) {
    return -0x7fffbffd;
  }
  if (param_2 == 0) {
    *param_7 = 0;
    if (*(uint *)(param_1 + 0x74) <= param_3) goto LAB_0041060e;
    iVar3 = *(int *)(*(int *)(param_1 + 0x98) + param_3 * 0x18);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xa0);
  }
  *param_7 = iVar3;
LAB_0041060e:
  piVar1 = (int *)*param_7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return local_4;
}


