/* Module: vegas30.exe
   Function: FUN_0055f600
   Address: 0055f600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055f600(HWND param_1,int param_2,WPARAM param_3)

{
  HWND pHVar1;
  BOOL BVar2;
  undefined1 local_12c [12];
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_104 [260];
  
  if (param_2 == 0x4c8) {
    pHVar1 = GetDlgItem(param_1,0x551);
    SfPrintF(local_104,"%d file(s) found",param_3);
    SendMessageA(pHVar1,0xc,0,(LPARAM)local_104);
    BVar2 = 1;
    pHVar1 = GetDlgItem(param_1,0x54d);
    EnableWindow(pHVar1,BVar2);
    BVar2 = 0;
    pHVar1 = GetDlgItem(param_1,0x54e);
    EnableWindow(pHVar1,BVar2);
    BVar2 = 1;
    pHVar1 = GetDlgItem(param_1,0x54f);
    EnableWindow(pHVar1,BVar2);
    if (param_3 == 0) {
      FUN_0055f4f0(param_1,0x54d);
    }
  }
  else if (param_2 == 0x4c9) {
    pHVar1 = GetDlgItem(param_1,0x550);
    SetFocus(pHVar1);
    local_11c = 3;
    local_120 = 3;
    SendMessageA(pHVar1,0x102b,param_3,(LPARAM)local_12c);
    pHVar1 = GetDlgItem(param_1,1);
    EnableWindow(pHVar1,1);
    SetFocus(pHVar1);
    FUN_0055f4f0(param_1,1);
    return;
  }
  return;
}


