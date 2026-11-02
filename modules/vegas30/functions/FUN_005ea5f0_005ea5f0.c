/* Module: vegas30.exe
   Function: FUN_005ea5f0
   Address: 005ea5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005ea5f0(undefined4 param_1,undefined4 param_2,ulong param_3,ulong param_4,
                 undefined4 param_5)

{
  long lVar1;
  ISFMixerIn *local_4;
  
  local_4 = (ISFMixerIn *)0x0;
  lVar1 = Mixer_GetDevice(&local_4,param_3,param_4);
  if ((-1 < lVar1) && (local_4 != (ISFMixerIn *)0x0)) {
    lVar1 = FUN_005bb1d0(6,param_2,local_4,param_4,param_1,0,param_5);
    (**(code **)(*(int *)local_4 + 8))(local_4);
  }
  return lVar1;
}


