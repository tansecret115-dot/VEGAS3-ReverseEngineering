/* Module: vegas30.exe
   Function: FUN_004f37d0
   Address: 004f37d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f37d0(int *param_1,HWND param_2)

{
  UINT UVar1;
  
  UVar1 = IsDlgButtonChecked(param_2,0x487);
  *(UINT *)(*param_1 + 0x1194) = UVar1;
  return;
}


