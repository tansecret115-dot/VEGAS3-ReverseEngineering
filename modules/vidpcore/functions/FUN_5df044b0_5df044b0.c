/* Module: vidpcore.dll
   Function: FUN_5df044b0
   Address: 5df044b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df044b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x308);
  if (iVar1 <= *(int *)(param_1 + 0x304)) {
    return 0;
  }
  FUN_5ded4e00(*(int **)(param_1 + 0x308),param_2,1,1);
  iVar1 = iVar1 + -2;
  if (iVar1 < *(int *)(param_1 + 0x2fc)) {
    *(int *)(param_1 + 0x2fc) = iVar1;
  }
  InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
  return *(undefined4 *)(param_1 + 0x2fc);
}


