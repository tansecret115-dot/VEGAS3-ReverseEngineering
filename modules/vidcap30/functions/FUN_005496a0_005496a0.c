/* Module: vidcap30.exe
   Function: FUN_005496a0
   Address: 005496a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005496a0(int *param_1,undefined4 param_2)

{
  fprintf((FILE *)(_iob_exref + 0x40),"libpng error: %s\n",param_2);
                    /* WARNING: Subroutine does not return */
  longjmp(param_1,1);
}


