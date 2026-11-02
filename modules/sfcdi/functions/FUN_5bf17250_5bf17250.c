/* Module: sfcdi.dll
   Function: FUN_5bf17250
   Address: 5bf17250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf17250(HWND param_1,BOOL param_2,BOOL param_3)

{
  HWND pHVar1;
  
  pHVar1 = GetDlgItem(param_1,0x472);
  EnableWindow(pHVar1,param_2);
  pHVar1 = GetDlgItem(param_1,0x471);
  EnableWindow(pHVar1,param_3);
  return;
}


