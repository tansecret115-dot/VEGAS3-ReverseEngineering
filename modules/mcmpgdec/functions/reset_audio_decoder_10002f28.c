/* Module: mcmpgdec.dll
   Function: reset_audio_decoder
   Address: 10002f28
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl reset_audio_decoder(int param_1)

{
                    /* 0x2f28  9  reset_audio_decoder */
  (**(code **)(param_1 + 0x14))(param_1,0,0x10000,0,0);
  return;
}


