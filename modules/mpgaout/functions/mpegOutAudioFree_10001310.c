/* Module: mpgaout.dll
   Function: mpegOutAudioFree
   Address: 10001310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegOutAudioFree(int param_1)

{
                    /* 0x1310  1  mpegOutAudioFree */
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x44e1c))(param_1);
  }
  return;
}


