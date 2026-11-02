/* Module: mcmpgdec.dll
   Function: get_audio_header
   Address: 10002efc
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl get_audio_header(int param_1)

{
  undefined4 local_10 [4];
  
                    /* 0x2efc  8  get_audio_header */
  (**(code **)(param_1 + 0x14))(param_1,0,0x10006,local_10,4);
  return local_10[0];
}


