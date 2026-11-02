/* Module: pngu3266.dll
   Function: GetBitsPerPixel
   Address: 60612e0b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static unsigned long __cdecl CPNSystemInfo::GetBitsPerPixel(void) */

ulong __cdecl CPNSystemInfo::GetBitsPerPixel(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  PNMonitorCharacteristics aPStack_38 [40];
  uint uStack_10;
  
                    /* 0x22e0b  1096  ?GetBitsPerPixel@CPNSystemInfo@@SAKXZ */
  uVar3 = 0;
  uVar1 = CountMonitors();
  uVar4 = 1;
  if (uVar1 != 0) {
    do {
      lVar2 = GetMonitorCharacteristics(uVar4,aPStack_38);
      if ((-1 < lVar2) && ((uVar3 == 0 || (uVar3 < uStack_10)))) {
        uVar3 = uStack_10;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= uVar1);
  }
  if (uVar3 == 0) {
    uVar3 = 0x20;
  }
  return uVar3;
}


