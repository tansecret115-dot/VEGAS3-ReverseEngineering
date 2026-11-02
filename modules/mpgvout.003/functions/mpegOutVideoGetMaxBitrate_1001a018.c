/* Module: mpgvout.003
   Function: mpegOutVideoGetMaxBitrate
   Address: 1001a018
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl mpegOutVideoGetMaxBitrate(int param_1)

{
                    /* 0x1a018  9  mpegOutVideoGetMaxBitrate */
  return *(undefined4 *)(param_1 + 0x4bc);
}


