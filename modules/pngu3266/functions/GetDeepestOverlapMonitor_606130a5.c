/* Module: pngu3266.dll
   Function: GetDeepestOverlapMonitor
   Address: 606130a5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __cdecl CPNSystemInfo::GetDeepestOverlapMonitor(class CPNxRect const
   &,unsigned long &) */

long __cdecl CPNSystemInfo::GetDeepestOverlapMonitor(CPNxRect *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_38;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  ulong local_c;
  ulong local_8;
  
                    /* 0x230a5  1179  ?GetDeepestOverlapMonitor@CPNSystemInfo@@SAJABVCPNxRect@@AAK@Z
                        */
  uVar3 = 0;
  local_2c = *(undefined4 *)param_1;
  uStack_28 = *(undefined4 *)(param_1 + 4);
  uStack_24 = *(undefined4 *)(param_1 + 8);
  uStack_20 = *(undefined4 *)(param_1 + 0xc);
  param_1 = (CPNxRect *)0x80004005;
  uVar4 = 0;
  local_8 = 0;
  local_c = CountMonitors();
  uVar5 = 1;
  if (local_c != 0) {
    do {
      lVar1 = GetMonitorCharacteristics(uVar5,(PNMonitorCharacteristics *)&local_60);
      if (-1 < lVar1) {
        local_1c = local_60;
        local_18 = local_5c;
        local_14 = local_58;
        local_10 = local_54;
        CPNxRect::operator&=((CPNxRect *)&local_1c,(CPNxRect *)&local_2c);
        if ((local_1c < local_14) && (local_18 < local_10)) {
          uVar2 = (local_10 - local_18) * (local_14 - local_1c);
          if ((uVar4 < local_38) || ((local_38 == uVar4 && (uVar3 <= uVar2 && uVar2 - uVar3 != 0))))
          {
            param_1 = (CPNxRect *)0x0;
            uVar3 = uVar2;
            uVar4 = local_38;
            local_8 = uVar5;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= local_c);
  }
  if ((int)param_1 < 0) {
    uVar5 = GetMainMonitorIndex();
    *param_2 = uVar5;
  }
  else {
    *param_2 = local_8;
  }
  return (long)param_1;
}


