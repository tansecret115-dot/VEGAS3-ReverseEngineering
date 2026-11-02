/* Module: sfs4rw.dll
   Function: FUN_00405c50
   Address: 00405c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405c50(undefined4 param_1,int param_2)

{
  return *(undefined4 *)(param_2 + 0x17c + *(int *)(param_2 + 0x1cc) * 4);
}


