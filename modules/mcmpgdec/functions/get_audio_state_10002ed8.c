/* Module: mcmpgdec.dll
   Function: get_audio_state
   Address: 10002ed8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl get_audio_state(int param_1)

{
                    /* 0x2ed8  7  get_audio_state */
  (**(code **)(param_1 + 0x14))(param_1,0,0x10003,0,0);
  return;
}


