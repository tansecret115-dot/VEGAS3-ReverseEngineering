/* Module: mcmpgdec.dll
   Function: free_audio_decoder
   Address: 10002de4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl free_audio_decoder(int param_1)

{
                    /* 0x2de4  4  free_audio_decoder */
  (**(code **)(param_1 + 0x20))(param_1);
  return 0;
}


