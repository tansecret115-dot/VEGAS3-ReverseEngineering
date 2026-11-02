/* Module: sfcdi.dll
   Function: FUN_5bf1af30
   Address: 5bf1af30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1af30(HWND param_1,int param_2,int param_3)

{
  HWND hWnd;
  
  if (param_3 == 0x47e) {
    hWnd = GetDlgItem(param_1,0x47e);
    SendMessageA(hWnd,0x186,*(WPARAM *)(param_2 + 4),0);
  }
  else if (param_3 != 0x47f) {
    if (param_3 != 0x480) {
      return 0;
    }
    CheckDlgButton(param_1,0x480,*(UINT *)(param_2 + 8));
    return 1;
  }
  return 1;
}


