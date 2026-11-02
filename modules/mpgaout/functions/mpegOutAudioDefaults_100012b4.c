/* Module: mpgaout.dll
   Function: mpegOutAudioDefaults
   Address: 100012b4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegOutAudioDefaults(undefined4 *param_1,int param_2)

{
                    /* 0x12b4  2  mpegOutAudioDefaults */
  *param_1 = 0;
  param_1[1] = 2;
  param_1[2] = 2;
  param_1[3] = 0xb;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_2 != 3) {
    if (param_2 < 4) {
      return;
    }
    if (param_2 != 4) {
      return;
    }
  }
  param_1[6] = 1;
  return;
}


