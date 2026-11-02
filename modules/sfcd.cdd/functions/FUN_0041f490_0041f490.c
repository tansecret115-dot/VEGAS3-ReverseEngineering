/* Module: sfcd.cdd
   Function: FUN_0041f490
   Address: 0041f490
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041f490(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    if (param_2 < *(uint *)(param_1 + 0xc)) {
      return *(int *)(param_1 + 0x10) + param_2 * 0x4c;
    }
  }
  return 0;
}


