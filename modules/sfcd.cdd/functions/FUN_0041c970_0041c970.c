/* Module: sfcd.cdd
   Function: FUN_0041c970
   Address: 0041c970
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041c970(HSFCD__ *param_1)

{
  int iVar1;
  
  if ((*(uint *)(*(int *)(param_1 + 0x160) + 0x38) & 0x4000000) == 0) {
    return -0x7ffb1f2f;
  }
  iVar1 = FUN_0041c920(param_1);
  return iVar1;
}


