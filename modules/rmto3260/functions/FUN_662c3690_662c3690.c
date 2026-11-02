/* Module: rmto3260.dll
   Function: FUN_662c3690
   Address: 662c3690
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c3690(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  piVar2 = param_1;
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  iVar1 = param_1[0x13];
  iVar4 = 0;
  local_14 = 0;
  *param_3 = 0;
  if (iVar1 == 0) {
    iVar4 = -0x7ffbfff9;
  }
  iVar1 = param_1[0x11];
  local_18 = *(int *)(iVar1 + 4);
  if (iVar1 == 0) {
    param_1._0_2_ = 0;
  }
  else {
    param_1._0_2_ = (ushort)*(undefined4 *)(iVar1 + 0x10);
  }
  local_10 = 0;
  if ((ushort)param_1 != 0) {
    do {
      if (iVar4 < 0) {
        return iVar4;
      }
      piVar3 = (int *)FUN_662ed930(&local_18);
      iVar1 = *piVar3;
      if (((*(int *)(iVar1 + 0x16) != 0) &&
          (iVar4 = (**(code **)(*piVar2 + 0x8c))
                             (piVar2,*(undefined4 *)(iVar1 + 0xc),param_2,&local_1c,&local_20),
          -1 < iVar4)) && ((local_1c < local_c || ((local_20 < local_8 && (local_1c == local_c))))))
      {
        local_c = local_1c;
        local_8 = local_20;
        local_14 = iVar1;
      }
      local_10 = local_10 + 1;
    } while ((ushort)local_10 < (ushort)param_1);
  }
  if (-1 < iVar4) {
    iVar4 = (**(code **)(*piVar2 + 0x8c))
                      (piVar2,*(undefined4 *)(local_14 + 0xc),param_2,param_3,&local_8);
  }
  return iVar4;
}


