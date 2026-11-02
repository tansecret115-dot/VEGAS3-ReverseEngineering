/* Module: pngu3266.dll
   Function: AdjustRectToFitOnScreen
   Address: 60612e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static int __cdecl CPNSystemInfo::AdjustRectToFitOnScreen(class CPNxRect &) */

int __cdecl CPNSystemInfo::AdjustRectToFitOnScreen(CPNxRect *param_1)

{
                    /* 0x22e10  793  ?AdjustRectToFitOnScreen@CPNSystemInfo@@SAHAAVCPNxRect@@@Z */
  AdjustRectToNearestMonitor(param_1,(int *)&param_1);
  return (int)param_1;
}


