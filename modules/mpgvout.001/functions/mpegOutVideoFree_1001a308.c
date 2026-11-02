/* Module: mpgvout.001
   Function: mpegOutVideoFree
   Address: 1001a308
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegOutVideoFree(int param_1)

{
                    /* 0x1a308  1  mpegOutVideoFree */
  (**(code **)(param_1 + 0x20))(param_1);
  return;
}


