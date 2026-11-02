/* Module: wmfdist2.exe
   Function: FUN_0100301a
   Address: 0100301a
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0100301a(HWND param_1,int param_2,uint param_3)

{
  HWND pHVar1;
  
  if (param_2 == 0x10) {
    EndDialog(param_1,2);
  }
  else if (param_2 == 0x110) {
    pHVar1 = GetDesktopWindow();
    FUN_01003d79(param_1,pHVar1);
    SetWindowTextA(param_1,&DAT_0100adf4);
    SetDlgItemTextA(param_1,0x838,DAT_0100b0a4);
    SetForegroundWindow(param_1);
  }
  else {
    if (param_2 != 0x111) {
      return 0;
    }
    if (5 < param_3) {
      if (7 < param_3) {
        if (param_3 != 0x839) {
          return 1;
        }
        DAT_0100ae7c = 1;
      }
      EndDialog(param_1,param_3);
      return 1;
    }
  }
  return 1;
}


