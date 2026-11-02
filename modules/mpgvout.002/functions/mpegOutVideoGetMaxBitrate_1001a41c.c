/* Module: mpgvout.002
   Function: mpegOutVideoGetMaxBitrate
   Address: 1001a41c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl mpegOutVideoGetMaxBitrate(int param_1)

{
                    /* 0x1a41c  9  mpegOutVideoGetMaxBitrate */
  return *(undefined4 *)(param_1 + 0x4bc);
}


