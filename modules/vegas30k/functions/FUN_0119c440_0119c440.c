/* Module: vegas30k.dll
   Function: FUN_0119c440
   Address: 0119c440
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0119c440(int *param_1)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 8) & 0x10) != 0) &&
     (iVar1 = param_1[0x187], param_1[0x187] = iVar1 + -1, iVar1 + -1 == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x160))(0);
    if (iVar1 == 0) {
      param_1[0x188] = 0;
      return 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return iVar1;
  }
  return 0;
}


