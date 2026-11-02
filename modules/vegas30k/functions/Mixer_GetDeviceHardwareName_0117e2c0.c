/* Module: vegas30k.dll
   Function: Mixer_GetDeviceHardwareName
   Address: 0117e2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetDeviceHardwareName(char *,unsigned long,unsigned long,unsigned long) */

long Mixer_GetDeviceHardwareName(char *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  int *piVar2;
  undefined4 local_4;
  
                    /* 0x17e2c0  171  ?Mixer_GetDeviceHardwareName@@YGJPADKKK@Z */
  local_4 = 0;
  piVar2 = DAT_012b09c8;
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x1e0))(DAT_012b09c8,&local_4,param_3,param_4);
  *(undefined1 *)param_3 = 0;
  if (-1 < lVar1) {
    lVar1 = (**(code **)(*piVar2 + 0x28))(piVar2,param_3,param_4);
    (**(code **)(*(int *)param_3 + 8))(param_3);
  }
  return lVar1;
}


