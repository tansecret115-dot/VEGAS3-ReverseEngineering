/* Module: vegas30k.dll
   Function: FUN_011d7de0
   Address: 011d7de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011d7de0(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) & 0x80000000) != 0) {
    param_1 = ((*(uint *)(param_1 + 8) & 0xffffff) + 3 & 0xfffffffc) + param_1;
  }
  return param_1 + 0xc;
}


