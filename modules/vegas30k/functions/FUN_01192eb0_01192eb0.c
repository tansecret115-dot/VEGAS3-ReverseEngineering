/* Module: vegas30k.dll
   Function: FUN_01192eb0
   Address: 01192eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01192eb0(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  Transport_SetLength(0xfffffffffffffff);
  iVar1 = Transport_IsRecMonitoring();
  if (iVar1 != 0) {
    Transport_StopRecMonitor();
    *param_3 = *param_3 | 0x10800000;
    iVar2 = FUN_01183340(0);
  }
  if ((*param_3 & 0x20000000) == 0) {
    return iVar2;
  }
  iVar1 = FUN_011832b0(param_1,param_2);
  if (-1 < iVar1) {
    iVar1 = FUN_011832f0(param_1,param_2);
    if (-1 < iVar1) goto LAB_01192f1b;
    FUN_011832e0();
  }
  *param_3 = *param_3 & 0xdfffffff;
LAB_01192f1b:
  if ((*param_3 & 0x20000000) == 0) {
    *param_3 = *param_3 & 0xdfffffff;
  }
  return iVar1;
}


