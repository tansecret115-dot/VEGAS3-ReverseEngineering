/* Module: vegas30k.dll
   Function: Mixer_SetDeviceGraph
   Address: 01181410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetDeviceGraph(struct ISFGraphBuilder *,unsigned long,unsigned long) */

long Mixer_SetDeviceGraph(ISFGraphBuilder *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  int *piVar2;
  undefined4 local_4;
  
                    /* 0x181410  227  ?Mixer_SetDeviceGraph@@YGJPAUISFGraphBuilder@@KK@Z */
  local_4 = 0;
  piVar2 = DAT_012b09c8;
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x1e0))(DAT_012b09c8,&local_4,param_2,param_3);
  if (-1 < lVar1) {
    lVar1 = (**(code **)(*piVar2 + 0x108))(piVar2);
    (**(code **)(*(int *)param_2 + 8))(param_2);
  }
  return lVar1;
}


