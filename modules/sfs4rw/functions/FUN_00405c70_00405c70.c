/* Module: sfs4rw.dll
   Function: FUN_00405c70
   Address: 00405c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405c70(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1a4 + *(int *)(param_2 + 0x1cc) * 4) = param_1;
  return;
}


