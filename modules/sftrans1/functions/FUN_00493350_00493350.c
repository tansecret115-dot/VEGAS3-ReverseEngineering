/* Module: sftrans1.dll
   Function: FUN_00493350
   Address: 00493350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00493350(int param_1)

{
  WPARAM wParam;
  HWND hWnd;
  WPARAM WVar1;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x6d5);
  if (hWnd != (HWND)0x0) {
    wParam = *(WPARAM *)(*(int *)(param_1 + 0x30) + 100);
    WVar1 = SendMessageA(hWnd,0x147,0,0);
    if (wParam != WVar1) {
      SendMessageA(hWnd,0x14e,wParam,0);
    }
  }
  return 1;
}


