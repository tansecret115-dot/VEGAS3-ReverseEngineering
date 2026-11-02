/* Module: encn3260.dll
   Function: FUN_664d5be0
   Address: 664d5be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d5be0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 < 0) {
    *param_1 = *param_1 + -1;
    iVar1 = param_1[1] + 1000000;
    param_1[1] = iVar1;
  }
  iVar1 = param_1[1];
  while (999999 < iVar1) {
    *param_1 = *param_1 + 1;
    iVar1 = param_1[1] + -1000000;
    param_1[1] = iVar1;
  }
  return;
}


