/* Module: pngu3266.dll
   Function: AdjustRectToMonitor
   Address: 6061326f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __cdecl CPNSystemInfo::AdjustRectToMonitor(unsigned long,class CPNxRect &,int
   &) */

long __cdecl CPNSystemInfo::AdjustRectToMonitor(ulong param_1,CPNxRect *param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  PNMonitorCharacteristics local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
                    /* 0x2326f  794  ?AdjustRectToMonitor@CPNSystemInfo@@SAJKAAVCPNxRect@@AAH@Z */
  *param_3 = 0;
  lVar2 = GetMonitorCharacteristics(param_1,local_38);
  if (-1 < lVar2) {
    iVar1 = *(int *)(param_2 + 8);
    if (local_20 < iVar1) {
      *(int *)param_2 = *(int *)param_2 + (local_20 - iVar1);
      *(int *)(param_2 + 8) = (local_20 - iVar1) + iVar1;
      *param_3 = 1;
    }
    iVar1 = *(int *)(param_2 + 0xc);
    if (local_1c < iVar1) {
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + (local_1c - iVar1);
      *(int *)(param_2 + 0xc) = (local_1c - iVar1) + iVar1;
      *param_3 = 1;
    }
    iVar1 = *(int *)param_2;
    if (iVar1 < local_28) {
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + (local_28 - iVar1);
      *(int *)param_2 = iVar1 + (local_28 - iVar1);
      *param_3 = 1;
    }
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 < local_24) {
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + (local_24 - iVar1);
      *(int *)(param_2 + 4) = iVar1 + (local_24 - iVar1);
      *param_3 = 1;
    }
  }
  return lVar2;
}


