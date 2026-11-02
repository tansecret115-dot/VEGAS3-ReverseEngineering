/* Module: mcplugrw.dll
   Function: FUN_00406c30
   Address: 00406c30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406c30(HWND param_1,int param_2,short param_3,int param_4)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 uVar2;
  
  GetWindowLongA(param_1,-0x15);
  if (param_2 == 0x110) {
    uVar2 = FUN_00406cd0(param_1,param_4);
    MessageBeep(0x30);
    return uVar2;
  }
  if (param_2 == 0x111) {
    if (param_3 == 6) {
      hWnd = GetDlgItem(param_1,0x1b98);
      if (hWnd != (HWND)0x0) {
        LVar1 = SendMessageA(hWnd,0xf0,0,0);
        if (LVar1 == 1) {
          FUN_00411460(DAT_004a8128,0,0);
        }
      }
      EndDialog(param_1,6);
      return 0;
    }
    if (param_3 == 7) {
      EndDialog(param_1,7);
    }
  }
  return 0;
}


