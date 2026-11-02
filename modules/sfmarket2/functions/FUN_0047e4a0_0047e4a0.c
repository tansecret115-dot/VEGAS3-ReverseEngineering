/* Module: sfmarket2.dll
   Function: FUN_0047e4a0
   Address: 0047e4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047e4a0(int *param_1,undefined4 param_2)

{
  fprintf((FILE *)(_iob_exref + 0x40),"libpng error: %s\n",param_2);
                    /* WARNING: Subroutine does not return */
  longjmp(param_1,1);
}


