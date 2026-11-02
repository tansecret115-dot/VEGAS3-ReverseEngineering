/* Module: sfcdi.dll
   Function: FUN_5bf134a0
   Address: 5bf134a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf134a0(HWND param_1,int param_2,int param_3)

{
  HWND hWnd;
  uint uVar1;
  uint uVar2;
  WPARAM wParam;
  
  if (param_3 != 0x47c) {
    return 0;
  }
  hWnd = GetDlgItem(param_1,0x47c);
  wParam = 0;
  uVar1 = SendMessageA(hWnd,0x1004,0,0);
  *(undefined4 *)(param_2 + 4) = 0;
  if (uVar1 != 0) {
    while( true ) {
      uVar2 = SendMessageA(hWnd,0x102c,wParam,2);
      if ((uVar2 & 2) != 0) break;
      wParam = wParam + 1;
      if (uVar1 <= wParam) {
        return 1;
      }
    }
    *(WPARAM *)(param_2 + 4) = wParam;
  }
  return 1;
}


