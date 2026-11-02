/* Module: sfs4rw.dll
   Function: FUN_0044d560
   Address: 0044d560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044d560(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 2;
  *(undefined4 *)(param_1 + 0xac) = param_2;
  return;
}


