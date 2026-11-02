/* Module: pngu3266.dll
   Function: CountMonitors
   Address: 60612e29
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static unsigned long __cdecl CPNSystemInfo::CountMonitors(void) */

ulong __cdecl CPNSystemInfo::CountMonitors(void)

{
  ulong uVar1;
  
                    /* 0x22e29  891  ?CountMonitors@CPNSystemInfo@@SAKXZ */
  uVar1 = FUN_60612600(0x50);
  return uVar1;
}


