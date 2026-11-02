/* Module: vidcap30.exe
   Function: FUN_0056e880
   Address: 0056e880
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0056e880(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  local_10 = 0;
  local_8 = 0;
  local_4 = FUN_005760d0(&local_8);
  iVar5 = param_1;
  iVar2 = FUN_0056e2c0(param_1,&local_10);
  if (iVar2 < 0) {
    iVar5 = -0x7ffb1ed3;
    goto LAB_0056e99b;
  }
  if (*(int *)(local_10 + 4) == 0) {
    iVar5 = FUN_005729a0(iVar5,&param_1);
    iVar2 = param_1;
    if (iVar5 < 0) {
      iVar5 = -0x7ffb1ed2;
      goto LAB_0056e99b;
    }
    iVar5 = 0x4e130;
    iVar3 = FUN_0056ebe0(&local_c,local_10);
    if (iVar3 < 0) {
      iVar5 = -0x7ffb1ed2;
      goto LAB_0056e99b;
    }
    if (iVar3 == 0x4e135) {
      iVar5 = 0x4e135;
      goto LAB_0056e99b;
    }
  }
  else {
    uVar1 = *(uint *)(local_10 + 0x14);
    if ((uVar1 == 0) || ((2 < uVar1 && (uVar1 != 7)))) {
      local_c = 0;
      iVar5 = -0x7ffb1ed4;
      goto LAB_0056e99b;
    }
    local_c = FUN_00577170();
    if (local_c < 0) {
      iVar4 = -1;
      iVar5 = 0x4e12e;
      goto LAB_0056e99b;
    }
    iVar5 = 0x4e12f;
    iVar2 = *(int *)(local_10 + 0x10);
  }
  if (-1 < local_4) {
    if (iVar2 - local_8 == 1) {
      iVar2 = local_8;
    }
    iVar4 = (local_c - local_8) + iVar2;
    if ((iVar4 < 1) || (0x3fe < iVar4)) {
      iVar4 = 0;
      iVar5 = -0x7ffb1ecb - (uint)(*(int *)(local_10 + 4) != 0);
    }
  }
LAB_0056e99b:
  if (local_10 == 0) {
    *param_2 = iVar4;
    return iVar5;
  }
  FUN_00404b20(local_10);
  *param_2 = iVar4;
  return iVar5;
}


