/* Module: sftrans1.dll
   Function: FUN_004911f0
   Address: 004911f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004911f0(int param_1)

{
  HWND pHVar1;
  WPARAM wParam;
  int iVar2;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6af);
  if (pHVar1 != (HWND)0x0) {
    wParam = SendMessageA(pHVar1,0xb0f,0xffffffff,0);
    if ((int)wParam < 0) {
      wParam = 0;
    }
    if (*(int *)(param_1 + 0x340) != 0) {
      iVar2 = FUN_00485e60(1);
      if (iVar2 != 0) {
        FUN_00486140(wParam);
        pHVar1 = GetDlgItem(*(HWND *)(iVar2 + 4),0x6b2);
        if (((pHVar1 != (HWND)0x0) && (-1 < (int)wParam)) &&
           ((int)wParam < **(int **)(iVar2 + 0x28))) {
          SendMessageA(pHVar1,0x14e,wParam,0);
        }
      }
    }
  }
  return;
}


