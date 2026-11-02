/* Module: vegas30.exe
   Function: FUN_004932a0
   Address: 004932a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004932a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  lVar6 = ftol();
  *(longlong *)(param_1 + 0x98) = lVar6 + *(longlong *)(param_1 + 0xb88);
  uVar1 = *(uint *)(param_1 + 0xbb0);
  uVar2 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) >> 1;
  lVar6 = (longlong)(param_3 - *(int *)(param_1 + 0xac4)) * (longlong)*(int *)(param_1 + 0xbac);
  if (lVar6 < 0) {
    lVar6 = CONCAT44((int)((ulonglong)lVar6 >> 0x20) - (uint)((uint)lVar6 < uVar2),
                     (uint)lVar6 - uVar2);
    uVar2 = 0;
  }
  *(int *)(param_1 + 0xa0) =
       *(int *)(param_1 + 0xba8) +
       (int)((longlong)(lVar6 + (ulonglong)uVar2) / (longlong)(int)uVar1);
  *(undefined4 *)(param_1 + 0x90) = param_2;
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(int *)(param_1 + 0x94) = param_3;
  *(int *)(param_1 + 0xac) = param_3;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(int *)(param_1 + 0xa4) = param_5;
  if (param_5 == 2) {
    iVar3 = *(int *)(param_1 + 0xac4);
    if ((*(int *)(param_1 + 0xac4) <= param_3) &&
       (iVar3 = *(int *)(param_1 + 0xacc), param_3 <= *(int *)(param_1 + 0xacc))) {
      iVar3 = param_3;
    }
    iVar3 = FUN_00497960(param_1,iVar3);
    *(int *)(param_1 + 0xcf8) = iVar3;
    if (iVar3 < 0) {
      if ((*(int *)(param_1 + 0xbc8) == 0) ||
         (iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar3 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = _DAT_00000000;
        if (*(int *)(param_1 + 0xbc8) != 0) {
          puVar4 = (undefined4 *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
          uVar5 = *puVar4;
        }
      }
      *(undefined4 *)(param_1 + 0xcf8) = uVar5;
    }
    FUN_00493430(param_1);
    FUN_00493050(param_1,param_4,param_2,param_3);
  }
  else if (param_5 != 9) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    return;
  }
  FUN_00492ec0(param_1);
  FUN_004530a0(param_1,0);
  SetCapture(*(HWND *)(param_1 + 4));
  return;
}


