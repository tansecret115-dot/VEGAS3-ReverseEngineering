/* Module: sfcdi.dll
   Function: FUN_5bf1afa0
   Address: 5bf1afa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1afa0(HWND param_1,int param_2,int param_3)

{
  UINT UVar1;
  
  if (param_3 != 0x480) {
    return 0;
  }
  UVar1 = IsDlgButtonChecked(param_1,0x480);
  *(UINT *)(param_2 + 8) = UVar1;
  return 1;
}


