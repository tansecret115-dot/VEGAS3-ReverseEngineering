/* Module: vegas30k.dll
   Function: FUN_01192b80
   Address: 01192b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01192b80(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = Transport_IsRecMonitoring();
  if (iVar1 != 0) {
    Transport_StopRecMonitor();
    *param_2 = *param_2 | 0x10000000;
  }
  if ((DAT_012b0b30 != (code *)0x0) &&
     (iVar2 = (*DAT_012b0b30)(DAT_012b0b2c,0x400,param_2,DAT_012b0b34,param_1,0), iVar2 < 0)) {
    return iVar2;
  }
  (**(code **)(*DAT_012b0b2c + 0xd4))(DAT_012b0b2c,0xffffffff,0xfffffff);
  if (((*param_2 & 0x10000000) != 0) && (iVar2 = FUN_01183340(0), iVar2 < 0)) {
    *param_2 = *param_2 & 0xefffffff;
    return iVar2;
  }
  if ((*param_2 & 0x20000000) == 0) {
    return iVar2;
  }
  iVar1 = (**(code **)(*DAT_012b09c8 + 0xfc))(DAT_012b09c8,*param_1,param_1[1]);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*DAT_012b09c8 + 0x114))(DAT_012b09c8,*param_1,param_1[1]);
    if (-1 < iVar1) {
      return iVar1;
    }
    (**(code **)(*DAT_012b09c8 + 0x100))(DAT_012b09c8);
  }
  *param_2 = *param_2 & 0xdfffffff;
  return iVar1;
}


