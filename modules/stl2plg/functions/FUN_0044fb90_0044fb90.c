/* Module: stl2plg.dll
   Function: FUN_0044fb90
   Address: 0044fb90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044fb90(int *param_1,undefined4 param_2)

{
  fprintf((FILE *)(_iob_exref + 0x40),"libpng error: %s\n",param_2);
                    /* WARNING: Subroutine does not return */
  longjmp(param_1,1);
}


