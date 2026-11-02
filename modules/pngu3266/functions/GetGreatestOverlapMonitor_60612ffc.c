/* Module: pngu3266.dll
   Function: GetGreatestOverlapMonitor
   Address: 60612ffc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __cdecl CPNSystemInfo::GetGreatestOverlapMonitor(class CPNxRect const
   &,unsigned long &) */

long __cdecl CPNSystemInfo::GetGreatestOverlapMonitor(CPNxRect *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  CPNxRect *pCVar5;
  uint uVar6;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  CPNxRect *local_8;
  
                    /* 0x22ffc  1205
                       ?GetGreatestOverlapMonitor@CPNSystemInfo@@SAJABVCPNxRect@@AAK@Z */
  iVar4 = -0x7fffbffb;
  local_28 = *(undefined4 *)param_1;
  uStack_24 = *(undefined4 *)(param_1 + 4);
  uStack_20 = *(undefined4 *)(param_1 + 8);
  uStack_1c = *(undefined4 *)(param_1 + 0xc);
  uVar6 = 0;
  param_1 = (CPNxRect *)0x0;
  local_8 = (CPNxRect *)CountMonitors();
  pCVar5 = (CPNxRect *)0x1;
  if (local_8 != (CPNxRect *)0x0) {
    do {
      lVar1 = GetMonitorCharacteristics((ulong)pCVar5,(PNMonitorCharacteristics *)&local_5c);
      if (-1 < lVar1) {
        local_18 = local_5c;
        local_14 = local_58;
        local_10 = local_54;
        local_c = local_50;
        CPNxRect::operator&=((CPNxRect *)&local_18,(CPNxRect *)&local_28);
        if (((local_18 < local_10) && (local_14 < local_c)) &&
           (uVar2 = (local_c - local_14) * (local_10 - local_18),
           uVar6 <= uVar2 && uVar2 - uVar6 != 0)) {
          iVar4 = 0;
          uVar6 = uVar2;
          param_1 = pCVar5;
        }
      }
      pCVar5 = pCVar5 + 1;
    } while (pCVar5 <= local_8);
  }
  if (iVar4 < 0) {
    uVar3 = GetMainMonitorIndex();
    *param_2 = uVar3;
  }
  else {
    *param_2 = (ulong)param_1;
  }
  return iVar4;
}


