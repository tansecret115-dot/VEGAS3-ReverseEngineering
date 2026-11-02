/* Module: vegas30.exe
   Function: FUN_005495c0
   Address: 005495c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005495c0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 & 0x100) == 0) {
    if ((param_2 & 2) != 0) {
      iVar2 = 0;
      iVar1 = **(int **)(param_1 + 0xb4);
      if (0 < iVar1) {
        do {
          FUN_0054a6d0(**(undefined4 **)(*(int *)(*(int *)(param_1 + 0xb4) + 8) + iVar2 * 4));
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
      InvalidateRect(*(HWND *)(param_1 + 0x9c),(RECT *)0x0,1);
      InvalidateRect(*(HWND *)(param_1 + 0x98),(RECT *)0x0,1);
      InvalidateRect(*(HWND *)(param_1 + 0xa0),(RECT *)0x0,1);
    }
  }
  else {
    FUN_0057b680();
    iVar1 = FUN_005498f0(param_1);
    if (-1 < iVar1) {
      FUN_0054a350(param_1);
      InvalidateRect(*(HWND *)(param_1 + 0x9c),(RECT *)0x0,1);
      InvalidateRect(*(HWND *)(param_1 + 0xa0),(RECT *)0x0,1);
      return;
    }
  }
  return;
}


