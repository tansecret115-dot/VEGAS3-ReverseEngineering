/* Module: vegas30k.dll
   Function: Mixer_GetDeviceGraph
   Address: 011811e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetDeviceGraph(struct ISFGraphBuilder * *,unsigned long,unsigned long) */

long Mixer_GetDeviceGraph(ISFGraphBuilder **param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  int *piVar2;
  int local_4;
  
                    /* 0x1811e0  170  ?Mixer_GetDeviceGraph@@YGJPAPAUISFGraphBuilder@@KK@Z */
  local_4 = 0;
  *param_1 = (ISFGraphBuilder *)0x0;
  piVar2 = &local_4;
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x1e0))(DAT_012b09c8,piVar2,param_2,param_3);
  if (-1 < lVar1) {
    lVar1 = (**(code **)(*piVar2 + 0xfc))(piVar2);
    (**(code **)(*param_1 + 8))(param_1);
  }
  return lVar1;
}


