/* Module: sftrans1.dll
   Function: FUN_00452e30
   Address: 00452e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00452e30(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}


