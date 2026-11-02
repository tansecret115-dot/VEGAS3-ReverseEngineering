/* Module: sftrans1.dll
   Function: FUN_0052a030
   Address: 0052a030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0052a030(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int *param_7,undefined4 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x468);
  iVar1 = ftol();
  iVar2 = param_5 - param_3;
  iVar3 = param_6 - param_4;
  if (param_5 - *(int *)(param_1 + 0x2cc) < iVar5) {
    *param_8 = 0;
    iVar2 = (*(int *)(param_1 + 0x2d0) - iVar3 / 2) + iVar5 + iVar1;
    if ((iVar2 <= param_4) &&
       (iVar4 = ((*(int *)(param_1 + 0x2d8) - iVar3 / 2) - iVar5) - iVar1, iVar2 = param_4,
       iVar4 < param_4)) {
      iVar2 = iVar4;
    }
    *param_7 = iVar5;
    param_7[2] = iVar5 + iVar1;
    param_7[1] = (iVar3 - iVar1) / 2 + iVar2;
    param_7[3] = (iVar3 + iVar1) / 2 + iVar2;
    return 1;
  }
  if (param_6 - *(int *)(param_1 + 0x2d0) < iVar5) {
    *param_8 = 1;
    iVar3 = (*(int *)(param_1 + 0x2cc) - iVar2 / 2) + iVar5 + iVar1;
    if ((iVar3 <= param_3) &&
       (iVar4 = ((*(int *)(param_1 + 0x2d4) - iVar2 / 2) - iVar5) - iVar1, iVar3 = param_3,
       iVar4 < param_3)) {
      iVar3 = iVar4;
    }
    param_7[1] = iVar5;
    *param_7 = (iVar2 - iVar1) / 2 + iVar3;
    param_7[2] = (iVar1 + iVar2) / 2 + iVar3;
    param_7[3] = iVar5 + iVar1;
    return 1;
  }
  if (*(int *)(param_1 + 0x2d4) - param_3 < iVar5) {
    *param_8 = 2;
    iVar2 = (*(int *)(param_1 + 0x2d0) - iVar3 / 2) + iVar5 + iVar1;
    if ((param_4 < iVar2) ||
       (iVar2 = ((*(int *)(param_1 + 0x2d8) - iVar3 / 2) - iVar5) - iVar1, iVar2 < param_4)) {
      param_4 = iVar2;
    }
    iVar5 = *(int *)(param_1 + 0x2d4) - iVar5;
    param_7[2] = iVar5;
    *param_7 = iVar5 - iVar1;
    param_7[1] = (iVar3 - iVar1) / 2 + param_4;
    param_7[3] = (iVar3 + iVar1) / 2 + param_4;
    return 1;
  }
  if (*(int *)(param_1 + 0x2d8) - param_4 < iVar5) {
    *param_8 = 3;
    iVar3 = (*(int *)(param_1 + 0x2cc) - iVar2 / 2) + iVar5 + iVar1;
    if ((param_3 < iVar3) ||
       (iVar3 = ((*(int *)(param_1 + 0x2d4) - iVar2 / 2) - iVar5) - iVar1, iVar3 < param_3)) {
      param_3 = iVar3;
    }
    iVar5 = *(int *)(param_1 + 0x2d8) - iVar5;
    *param_7 = (iVar2 - iVar1) / 2 + param_3;
    param_7[3] = iVar5;
    param_7[1] = iVar5 - iVar1;
    param_7[2] = (iVar2 + iVar1) / 2 + param_3;
    return 1;
  }
  return 0;
}


