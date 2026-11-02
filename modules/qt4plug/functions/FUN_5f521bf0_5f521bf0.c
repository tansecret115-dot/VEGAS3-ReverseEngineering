/* Module: qt4plug.dll
   Function: FUN_5f521bf0
   Address: 5f521bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f521c77) */
/* WARNING: Removing unreachable block (ram,0x5f521c9b) */
/* WARNING: Removing unreachable block (ram,0x5f521cb5) */
/* WARNING: Removing unreachable block (ram,0x5f521cc3) */

void __fastcall FUN_5f521bf0(int *param_1)

{
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar1;
  
  hWnd = GetDlgItem((HWND)param_1[4],0x3e9);
  wParam = SendMessageA(hWnd,0x147,0,0);
  LVar1 = SendMessageA(hWnd,0x150,wParam,0);
  if ((-1 < LVar1) && (LVar1 < *DAT_5f5a3ed4)) {
    FUN_5f5808e0();
  }
  return;
}


