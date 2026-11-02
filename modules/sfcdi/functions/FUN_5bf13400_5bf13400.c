/* Module: sfcdi.dll
   Function: FUN_5bf13400
   Address: 5bf13400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf13400(HWND param_1,int param_2,int param_3)

{
  HWND hWnd;
  uint uVar1;
  WPARAM wParam;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_3 != 0x47c) {
    return 0;
  }
  hWnd = GetDlgItem(param_1,0x47c);
  uVar1 = SendMessageA(hWnd,0x1004,0,0);
  wParam = 0;
  if (uVar1 != 0) {
    do {
      local_18 = 2;
      local_1c = 0;
      SendMessageA(hWnd,0x102b,wParam,(LPARAM)local_28);
      wParam = wParam + 1;
    } while (wParam < uVar1);
  }
  local_18 = 2;
  local_1c = 2;
  SendMessageA(hWnd,0x102b,*(WPARAM *)(param_2 + 4),(LPARAM)local_28);
  return 1;
}


