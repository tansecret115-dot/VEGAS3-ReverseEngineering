/* Module: vidpcore.dll
   Function: FUN_5df04260
   Address: 5df04260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df04260(HWND param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  LONG LVar3;
  
  LVar3 = GetWindowLongA(param_1,0);
  piVar1 = *(int **)(LVar3 + 0x308);
  iVar2 = *piVar1;
  if (param_3 == -1) {
    param_3 = *(int *)(LVar3 + 0x2fc) + 1;
  }
  if (param_3 < iVar2) {
    do {
      if (*(int *)(piVar1[1] * param_3 + 0x14 + piVar1[2]) == 1) break;
      param_3 = param_3 + 1;
    } while (param_3 < iVar2);
  }
  if (param_3 != iVar2) {
    if (param_2 != (int *)0x0) {
      *param_2 = param_3;
    }
    return 1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


