/* Module: sfs4rw.dll
   Function: FUN_00475c60
   Address: 00475c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00475c60(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    fprintf((FILE *)(_iob_exref + 0x40),"libpng warning: %s\n",param_2);
  }
  return;
}


