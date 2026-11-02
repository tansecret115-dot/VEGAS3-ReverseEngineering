/* Module: stl2plg.dll
   Function: FUN_0044fbc0
   Address: 0044fbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044fbc0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    fprintf((FILE *)(_iob_exref + 0x40),"libpng warning: %s\n",param_2);
  }
  return;
}


