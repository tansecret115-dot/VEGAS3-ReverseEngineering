/* Module: sfppack2.dll
   Function: FUN_5ccfb240
   Address: 5ccfb240
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5ccfb240(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(int *)(param_1 + -4 + param_2 * 8) - *(int *)(param_1 + 4 + param_3 * 8);
  if (0 < (int)uVar4) {
    uVar2 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f) >> 1;
    lVar1 = (longlong)(*(int *)(param_1 + -8 + param_2 * 8) - *(int *)(param_1 + param_3 * 8)) * 10;
    if (lVar1 < 0) {
      lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar2),
                       (uint)lVar1 - uVar2);
      uVar2 = 0;
    }
    iVar3 = (int)((longlong)(lVar1 + (ulonglong)uVar2) / (longlong)(int)uVar4);
    if (iVar3 < 1) {
      return 1;
    }
    if (iVar3 < 0x1f5) {
      return iVar3;
    }
  }
  return 500;
}


