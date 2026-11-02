/* Module: vegas30.exe
   Function: FUN_00553bc0
   Address: 00553bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00553c7d) */
/* WARNING: Removing unreachable block (ram,0x00553c91) */
/* WARNING: Removing unreachable block (ram,0x00553c97) */
/* WARNING: Removing unreachable block (ram,0x00553d17) */
/* WARNING: Removing unreachable block (ram,0x00553d1f) */
/* WARNING: Removing unreachable block (ram,0x00553d23) */
/* WARNING: Removing unreachable block (ram,0x00553d38) */
/* WARNING: Removing unreachable block (ram,0x00553d3c) */
/* WARNING: Removing unreachable block (ram,0x00553d6b) */

void FUN_00553bc0(HWND param_1)

{
  HWND hWnd;
  WPARAM wParam;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  hWnd = GetDlgItem(param_1,0x4b0);
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
    puVar3 = &DAT_00657c10;
    for (iVar2 = 0x300; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    piVar1 = (int *)FUN_00553430();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x4c))();
    }
    SendMessageA(hWnd,0x14e,0xffffffff,0);
    EnableWindow(hWnd,0);
  }
  return;
}


