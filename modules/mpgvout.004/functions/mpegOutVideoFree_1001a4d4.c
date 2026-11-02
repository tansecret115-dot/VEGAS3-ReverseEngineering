/* Module: mpgvout.004
   Function: mpegOutVideoFree
   Address: 1001a4d4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegOutVideoFree(int param_1)

{
                    /* 0x1a4d4  1  mpegOutVideoFree */
  (**(code **)(param_1 + 0x20))(param_1);
  return;
}


