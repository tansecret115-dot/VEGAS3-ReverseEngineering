/* Module: pngu3266.dll
   Function: GetMaxMonitorDepth
   Address: 60613444
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static unsigned long __cdecl CPNSystemInfo::GetMaxMonitorDepth(void) */

ulong __cdecl CPNSystemInfo::GetMaxMonitorDepth(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  PNMonitorCharacteristics local_38 [40];
  uint local_10;
  
                    /* 0x23444  1246  ?GetMaxMonitorDepth@CPNSystemInfo@@SAKXZ */
  uVar3 = 0;
  uVar1 = CountMonitors();
  uVar4 = 1;
  if (uVar1 != 0) {
    do {
      lVar2 = GetMonitorCharacteristics(uVar4,local_38);
      if ((-1 < lVar2) && ((uVar3 == 0 || (uVar3 < local_10)))) {
        uVar3 = local_10;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= uVar1);
  }
  if (uVar3 == 0) {
    uVar3 = 0x20;
  }
  return uVar3;
}


