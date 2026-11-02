/* Module: vegas30.exe
   Function: FUN_005539e0
   Address: 005539e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00553a9d) */
/* WARNING: Removing unreachable block (ram,0x00553ab1) */
/* WARNING: Removing unreachable block (ram,0x00553ab7) */
/* WARNING: Removing unreachable block (ram,0x00553b37) */
/* WARNING: Removing unreachable block (ram,0x00553b3f) */
/* WARNING: Removing unreachable block (ram,0x00553b43) */
/* WARNING: Removing unreachable block (ram,0x00553b58) */
/* WARNING: Removing unreachable block (ram,0x00553b5c) */
/* WARNING: Removing unreachable block (ram,0x00553b8b) */

void FUN_005539e0(HWND param_1)

{
  HWND hWnd;
  WPARAM wParam;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  hWnd = GetDlgItem(param_1,0x662);
  if (hWnd != (HWND)0x0) {
    wParam = SendMessageA(hWnd,0x146,0,0);
    while ((wParam != 0 && (wParam != 0xffffffff))) {
      wParam = wParam - 1;
      piVar1 = (int *)SendMessageA(hWnd,0x150,wParam,0);
      if ((piVar1 != (int *)0x0) && ((int *)*piVar1 != (int *)0x0)) {
        (**(code **)(*(int *)*piVar1 + 8))();
        *piVar1 = 0;
      }
    }
    SendMessageA(hWnd,0x14b,0,0);
    puVar3 = &DAT_00658810;
    for (iVar2 = 0x300; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    piVar1 = (int *)FUN_00553430();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x50))();
    }
    SendMessageA(hWnd,0x14e,0xffffffff,0);
    EnableWindow(hWnd,0);
  }
  return;
}


