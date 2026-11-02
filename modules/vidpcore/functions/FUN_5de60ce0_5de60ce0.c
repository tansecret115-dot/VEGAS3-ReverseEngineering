/* Module: vidpcore.dll
   Function: FUN_5de60ce0
   Address: 5de60ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de60ce0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}


