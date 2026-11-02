/* Module: wmfplug2.dll
   Function: FUN_00412eb0
   Address: 00412eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412eb0(HWND param_1,BOOL param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3f4);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3ec);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3f3);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3ee);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3f2);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3ef);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3f6);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3f5);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3f1);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3eb);
  EnableWindow(pHVar1,BVar2);
  pHVar1 = GetDlgItem(param_1,0x3f0);
  EnableWindow(pHVar1,param_2);
  return;
}


