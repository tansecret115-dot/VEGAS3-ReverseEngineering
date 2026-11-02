/* Module: sftrans1.dll
   Function: FUN_0052ac80
   Address: 0052ac80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052ac80(int param_1,int param_2)

{
  if ((param_2 < **(int **)(param_1 + 0x308)) && (-1 < param_2)) {
    *(int *)(param_1 + 0x2fc) = param_2;
    InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
  }
  return 0;
}


