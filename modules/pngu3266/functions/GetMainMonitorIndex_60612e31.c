/* Module: pngu3266.dll
   Function: GetMainMonitorIndex
   Address: 60612e31
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static unsigned long __cdecl CPNSystemInfo::GetMainMonitorIndex(void) */

ulong __cdecl CPNSystemInfo::GetMainMonitorIndex(void)

{
  HDC pHVar1;
  RECT *pRVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 local_44;
  ulong local_40;
  int local_8;
  
                    /* 0x22e31  1245  ?GetMainMonitorIndex@CPNSystemInfo@@SAKXZ */
  puVar4 = &local_44;
  pcVar3 = FUN_60612e6a;
  pRVar2 = (RECT *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_8 = 0;
  pHVar1 = GetDC((HWND)0x0);
  FUN_606126e1(pHVar1,pRVar2,pcVar3,puVar4);
  if (local_8 == 0) {
    local_40 = 1;
  }
  return local_40;
}


