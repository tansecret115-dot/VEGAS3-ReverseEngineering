/* Module: vegas30.exe
   Function: FUN_004dd330
   Address: 004dd330
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004dd330(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint local_8;
  uint local_4;
  
  iVar3 = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_1 == 0) {
    return 0;
  }
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0xd94)) {
    piVar4 = (int *)(param_1 + 0xd88);
    do {
      iVar2 = *piVar4;
      iVar1 = FUN_004df1f0(iVar2);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar2 + 4);
        if (iVar2 == 2) {
          if (*(int *)(param_1 + 0xd70) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_005f13f0(2);
          }
          uVar5 = 1;
        }
        else {
          if (iVar2 != 3) goto LAB_004dd3f8;
          if (*(int *)(param_1 + 0xd50) == 0) {
            iVar2 = 0;
            uVar5 = 2;
          }
          else {
            iVar2 = FUN_005f13f0(3);
            uVar5 = 2;
          }
        }
        if ((iVar2 != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0xd50) + 0x130), iVar1 != 0)) {
          iVar2 = _SfList_FindSpecificItemRange_16(iVar1,0,0xffffffff,iVar2);
          if (-1 < iVar2) {
            local_8 = local_8 | 1 << ((byte)iVar2 & 0x1f);
          }
          local_4 = local_4 | uVar5;
        }
      }
LAB_004dd3f8:
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      uVar5 = local_8;
    } while (iVar3 < *(int *)(param_1 + 0xd94));
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar5;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_4;
  }
  return uVar5;
}


