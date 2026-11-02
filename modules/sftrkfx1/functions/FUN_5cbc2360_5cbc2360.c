/* Module: sftrkfx1.dll
   Function: FUN_5cbc2360
   Address: 5cbc2360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbc2360(HWND param_1)

{
  int *piVar1;
  int iVar2;
  LONG LVar3;
  
  LVar3 = GetWindowLongA(param_1,0);
  if (LVar3 != 0) {
    piVar1 = *(int **)(LVar3 + 0x3c);
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        FUN_5cbdfac0(piVar1,iVar2,1,0);
      }
      FUN_5cbe0d30(piVar1);
      *(undefined4 *)(LVar3 + 0x3c) = 0;
    }
    return 1;
  }
  return 0;
}


