/* Module: pngu3266.dll
   Function: GetMonitorAtPoint
   Address: 60612f8a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __cdecl CPNSystemInfo::GetMonitorAtPoint(class CPNxPoint const &,unsigned
   long &) */

long __cdecl CPNSystemInfo::GetMonitorAtPoint(CPNxPoint *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_8;
  
                    /* 0x22f8a  1271  ?GetMonitorAtPoint@CPNSystemInfo@@SAJABVCPNxPoint@@AAK@Z */
  local_8 = -0x7fffbffb;
  uVar1 = CountMonitors();
  uVar3 = 1;
  if (uVar1 != 0) {
    do {
      lVar2 = GetMonitorCharacteristics(uVar3,(PNMonitorCharacteristics *)&local_3c);
      if ((((-1 < lVar2) && (local_3c <= *(int *)param_1)) && (*(int *)param_1 <= local_34)) &&
         ((local_38 <= *(int *)(param_1 + 4) && (*(int *)(param_1 + 4) <= local_30)))) {
        local_8 = 0;
        *param_2 = uVar3;
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= uVar1);
  }
  if (local_8 < 0) {
    uVar3 = GetMainMonitorIndex();
    *param_2 = uVar3;
  }
  return local_8;
}


