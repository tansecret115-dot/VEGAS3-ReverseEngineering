/* Module: mpgvout.002
   Function: mpegOutVideoFree
   Address: 1001a3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegOutVideoFree(int param_1)

{
                    /* 0x1a3e0  1  mpegOutVideoFree */
  (**(code **)(param_1 + 0x20))(param_1);
  return;
}


