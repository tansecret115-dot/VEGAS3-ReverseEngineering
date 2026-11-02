/* Module: wmfplug2.dll
   Function: FUN_00412f60
   Address: 00412f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412f60(HWND param_1,BOOL param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3f9);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3f7);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3fa);
  EnableWindow(pHVar1,BVar2);
  pHVar1 = GetDlgItem(param_1,0x3f8);
  EnableWindow(pHVar1,param_2);
  return;
}


