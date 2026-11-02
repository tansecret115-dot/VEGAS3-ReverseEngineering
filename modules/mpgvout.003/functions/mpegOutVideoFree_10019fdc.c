/* Module: mpgvout.003
   Function: mpegOutVideoFree
   Address: 10019fdc
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegOutVideoFree(int param_1)

{
                    /* 0x19fdc  1  mpegOutVideoFree */
  (**(code **)(param_1 + 0x20))(param_1);
  return;
}


