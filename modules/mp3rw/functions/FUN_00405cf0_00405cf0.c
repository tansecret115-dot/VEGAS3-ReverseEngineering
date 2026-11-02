/* Module: mp3rw.dll
   Function: FUN_00405cf0
   Address: 00405cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405cf0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1a4 + *(int *)(param_1 + 0x1cc) * 4);
}


