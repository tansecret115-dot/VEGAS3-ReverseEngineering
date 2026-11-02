/* Module: g2plug.dll
   Function: FUN_5f80fc10
   Address: 5f80fc10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f80fc10(HWND param_1,BOOL param_2)

{
  HWND pHVar1;
  BOOL bEnable;
  
  bEnable = param_2;
  pHVar1 = GetDlgItem(param_1,0x132);
  EnableWindow(pHVar1,bEnable);
  pHVar1 = GetDlgItem(param_1,0x133);
  EnableWindow(pHVar1,param_2);
  return;
}


