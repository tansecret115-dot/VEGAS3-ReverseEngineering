/* Module: pngu3266.dll
   Function: AdjustPointToMonitor
   Address: 60613161
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __cdecl CPNSystemInfo::AdjustPointToMonitor(unsigned long,class CPNxPoint
   &,int &) */

long __cdecl CPNSystemInfo::AdjustPointToMonitor(ulong param_1,CPNxPoint *param_2,int *param_3)

{
  long lVar1;
  PNMonitorCharacteristics local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
                    /* 0x23161  791  ?AdjustPointToMonitor@CPNSystemInfo@@SAJKAAVCPNxPoint@@AAH@Z */
  *param_3 = 0;
  lVar1 = GetMonitorCharacteristics(param_1,local_38);
  if (-1 < lVar1) {
    if ((local_20 < *(int *)param_2) || (local_20 = local_28, *(int *)param_2 < local_28)) {
      *(int *)param_2 = local_20;
      *param_3 = 1;
    }
    if ((local_1c < *(int *)(param_2 + 4)) ||
       (local_1c = local_24, *(int *)(param_2 + 4) < local_24)) {
      *(int *)(param_2 + 4) = local_1c;
      *param_3 = 1;
    }
  }
  return lVar1;
}


