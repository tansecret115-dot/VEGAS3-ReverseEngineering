/* Module: sfcdi.dll
   Function: FUN_5bf16c40
   Address: 5bf16c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf16c40(undefined4 *param_1)

{
  HWND pHVar1;
  BOOL BVar2;
  
  FUN_5bf16830(param_1,param_1[2]);
  FUN_5bf16aa0(param_1,-1);
  BVar2 = 1;
  pHVar1 = GetDlgItem((HWND)*param_1,0x472);
  EnableWindow(pHVar1,BVar2);
  BVar2 = 1;
  pHVar1 = GetDlgItem((HWND)*param_1,0x471);
  EnableWindow(pHVar1,BVar2);
  *param_1 = 0;
  return;
}


