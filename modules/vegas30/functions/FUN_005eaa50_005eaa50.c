/* Module: vegas30.exe
   Function: FUN_005eaa50
   Address: 005eaa50
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005eaa50(undefined4 param_1,ulong param_2,ulong param_3,int *param_4)

{
  int *piVar1;
  long lVar2;
  ISFMixerIn *local_4;
  
  piVar1 = param_4;
  local_4 = (ISFMixerIn *)0x0;
  *param_4 = 0;
  lVar2 = Mixer_GetDevice(&local_4,param_2,param_3);
  if ((-1 < lVar2) && (local_4 != (ISFMixerIn *)0x0)) {
    lVar2 = FUN_005badc0(0,6,local_4,param_1,0,&param_4);
    if (-1 < lVar2) {
      *piVar1 = *piVar1 + (int)param_4;
    }
    (**(code **)(*(int *)local_4 + 8))(local_4);
  }
  return lVar2;
}


