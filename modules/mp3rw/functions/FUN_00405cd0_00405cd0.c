/* Module: mp3rw.dll
   Function: FUN_00405cd0
   Address: 00405cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405cd0(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1a4 + *(int *)(param_2 + 0x1cc) * 4) = param_1;
  return;
}


