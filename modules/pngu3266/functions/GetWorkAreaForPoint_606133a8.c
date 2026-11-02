/* Module: pngu3266.dll
   Function: GetWorkAreaForPoint
   Address: 606133a8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __cdecl CPNSystemInfo::GetWorkAreaForPoint(class CPNxPoint const &,class
   CPNxRect &) */

long __cdecl CPNSystemInfo::GetWorkAreaForPoint(CPNxPoint *param_1,CPNxRect *param_2)

{
  long lVar1;
  PNMonitorCharacteristics local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
                    /* 0x233a8  1429
                       ?GetWorkAreaForPoint@CPNSystemInfo@@SAJABVCPNxPoint@@AAVCPNxRect@@@Z */
  GetMonitorAtPoint(param_1,(ulong *)&param_1);
  lVar1 = GetMonitorCharacteristics((ulong)param_1,local_48);
  if (-1 < lVar1) {
    *(undefined4 *)param_2 = local_38;
    *(undefined4 *)(param_2 + 4) = local_34;
    *(undefined4 *)(param_2 + 8) = local_30;
    *(undefined4 *)(param_2 + 0xc) = local_2c;
  }
  return lVar1;
}


