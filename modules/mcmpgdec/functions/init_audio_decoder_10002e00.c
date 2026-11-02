/* Module: mcmpgdec.dll
   Function: init_audio_decoder
   Address: 10002e00
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl init_audio_decoder(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x2e00  5  init_audio_decoder */
  (**(code **)(param_1 + 0x14))(param_1,0,0x10fff,0,0);
  (**(code **)(param_1 + 0xc))(param_1,param_2,param_3);
  uVar1 = (**(code **)(param_1 + 0x14))(param_1,0,0x10003,0,0);
  bVar2 = (uVar1 & 1) == 0;
  if (!bVar2) {
    (**(code **)(param_1 + 0x14))(param_1,0,0x10202,0,0);
  }
  return bVar2;
}


