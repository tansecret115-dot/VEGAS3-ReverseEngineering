/* Module: vegas30.exe
   Function: FUN_0040dd90
   Address: 0040dd90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040dd90(int param_1)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 200);
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 200) + 8) + iVar3 * 4);
      hWnd = *(HWND *)(iVar2 + 0x20);
      if (hWnd != (HWND)0x0) {
        DestroyWindow(hWnd);
      }
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 + 0x20) = 0;
    } while (iVar3 < iVar1);
  }
  return;
}


