/* Module: vidcap30.exe
   Function: FUN_00409600
   Address: 00409600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00409600(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = **(int **)(param_1 + 0xa4);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        EnableWindow(*(HWND *)(*(int *)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + iVar2 * 4) + 8),
                     param_2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    EnableWindow((HWND)*DAT_005ba4c0,param_2);
    DAT_005ba4b4 = (uint)(param_2 == 0) << 8 | DAT_005ba4b4 & 0xfffffeff;
  }
  return;
}


