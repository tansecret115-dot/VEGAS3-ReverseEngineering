/* Module: sfs4rw.dll
   Function: FUN_00475a40
   Address: 00475a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00475a40(int param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    free(param_2);
  }
  return;
}


