/* Module: sfcdi.dll
   Function: FUN_5bf16bc0
   Address: 5bf16bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5bf16bc0(undefined4 *param_1,undefined4 param_2,int param_3,LPCSTR param_4,int param_5)

{
  HWND pHVar1;
  BOOL BVar2;
  
  *param_1 = param_2;
  FUN_5bf16aa0(param_1,param_3);
  FUN_5bf16940(param_1,0);
  FUN_5bf16b80(param_1,param_4);
  param_1[1] = 0;
  FUN_5bf168d0(param_1,param_5);
  FUN_5bf16800((int)param_1);
  BVar2 = 0;
  pHVar1 = GetDlgItem((HWND)*param_1,0x472);
  EnableWindow(pHVar1,BVar2);
  BVar2 = 0;
  pHVar1 = GetDlgItem((HWND)*param_1,0x471);
  EnableWindow(pHVar1,BVar2);
  return *param_1;
}


