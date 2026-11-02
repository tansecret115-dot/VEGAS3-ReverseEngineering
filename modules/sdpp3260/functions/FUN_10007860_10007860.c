/* Module: sdpp3260.dll
   Function: FUN_10007860
   Address: 10007860
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_10007860(int *param_1)

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


