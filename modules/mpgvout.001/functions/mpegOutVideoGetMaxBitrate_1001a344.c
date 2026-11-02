/* Module: mpgvout.001
   Function: mpegOutVideoGetMaxBitrate
   Address: 1001a344
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl mpegOutVideoGetMaxBitrate(int param_1)

{
                    /* 0x1a344  9  mpegOutVideoGetMaxBitrate */
  return *(undefined4 *)(param_1 + 0x4bc);
}


