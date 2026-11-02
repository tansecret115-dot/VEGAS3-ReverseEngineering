/* Module: mpegin.dll
   Function: mpegInCloseExistingMPEG
   Address: 10009300
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegInCloseExistingMPEG(int param_1)

{
                    /* 0x9300  18  mpegInCloseExistingMPEG */
  mpegInCloseMPEG(param_1);
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x12e50))(param_1);
  }
  return;
}


