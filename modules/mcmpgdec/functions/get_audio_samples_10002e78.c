/* Module: mcmpgdec.dll
   Function: get_audio_samples
   Address: 10002e78
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
get_audio_samples(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* 0x2e78  6  get_audio_samples */
  local_14 = param_2;
  local_10 = *param_3;
  (**(code **)(param_1 + 0x14))(param_1,0,0x10001,&local_14,8);
  uVar1 = (**(code **)(param_1 + 0xc))(param_1,param_4,param_5);
  *param_3 = local_10;
  return uVar1;
}


