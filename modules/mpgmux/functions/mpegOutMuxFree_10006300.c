/* Module: mpgmux.dll
   Function: mpegOutMuxFree
   Address: 10006300
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegOutMuxFree(int param_1)

{
                    /* 0x6300  7  mpegOutMuxFree */
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x2624))(param_1);
  }
  return;
}


