/* Module: vegas30k.dll
   Function: FUN_0119c340
   Address: 0119c340
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0119c340(int *param_1)

{
  int iVar1;
  
  if ((((*(byte *)(param_1 + 8) & 0x10) == 0) &&
      (iVar1 = param_1[0x187], param_1[0x187] = iVar1 + 1, iVar1 + 1 == param_1[0x186])) &&
     (iVar1 = (**(code **)(*param_1 + 0x158))(0), iVar1 != 0)) {
    param_1[0x187] = param_1[0x187] + -1;
    return iVar1;
  }
  return 0;
}


