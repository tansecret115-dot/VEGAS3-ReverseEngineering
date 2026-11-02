/* Module: sfs4rw.dll
   Function: FUN_00475c30
   Address: 00475c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00475c30(int *param_1,undefined4 param_2)

{
  fprintf((FILE *)(_iob_exref + 0x40),"libpng error: %s\n",param_2);
                    /* WARNING: Subroutine does not return */
  longjmp(param_1,1);
}


