/* Module: vidcap30.exe
   Function: FUN_00406700
   Address: 00406700
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406700(int param_1)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 0xa4);
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + iVar3 * 4);
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


