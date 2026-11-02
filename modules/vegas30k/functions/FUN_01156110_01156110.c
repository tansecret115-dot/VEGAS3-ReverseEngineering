/* Module: vegas30k.dll
   Function: FUN_01156110
   Address: 01156110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01156110(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    fprintf((FILE *)(_iob_exref + 0x40),"libpng warning: %s\n",param_2);
  }
  return;
}


