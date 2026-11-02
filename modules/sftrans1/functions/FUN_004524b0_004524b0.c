/* Module: sftrans1.dll
   Function: FUN_004524b0
   Address: 004524b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004524b0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}


