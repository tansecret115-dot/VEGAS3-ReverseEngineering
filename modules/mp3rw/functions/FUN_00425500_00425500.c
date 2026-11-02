/* Module: mp3rw.dll
   Function: FUN_00425500
   Address: 00425500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00425500(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    *param_1 = *param_1 + 1;
    return 0;
  }
  return 0x80070057;
}


