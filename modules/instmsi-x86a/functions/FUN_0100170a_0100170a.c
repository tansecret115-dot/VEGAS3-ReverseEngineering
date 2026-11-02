/* Module: InstMsi-x86a.exe
   Function: FUN_0100170a
   Address: 0100170a
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0100170a(HWND param_1,int param_2,uint param_3,UINT param_4)

{
  HWND pHVar1;
  CHAR local_204 [512];
  
  if (param_2 == 0x110) {
    pHVar1 = GetDesktopWindow();
    FUN_01003bed(param_1,pHVar1);
    local_204[0] = '\0';
    LoadStringA(DAT_0100b6dc,param_4,local_204,0x200);
    SetDlgItemTextA(param_1,0x83f,local_204);
    MessageBeep(0xffffffff);
  }
  else {
    if (((param_2 != 0x111) || (param_3 < 0x83d)) || (0x83e < param_3)) {
      return 0;
    }
    EndDialog(param_1,param_3);
  }
  return 1;
}


