/* Module: vegas30.exe
   Function: FUN_005533c0
   Address: 005533c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005533c0(HWND param_1,BOOL param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x5eb);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x5ec);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x556);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x557);
  EnableWindow(pHVar1,BVar2);
  BVar2 = param_2;
  pHVar1 = GetDlgItem(param_1,0x558);
  EnableWindow(pHVar1,BVar2);
  pHVar1 = GetDlgItem(param_1,0x559);
  EnableWindow(pHVar1,param_2);
  return;
}


