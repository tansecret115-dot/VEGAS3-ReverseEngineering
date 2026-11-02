/* Module: pngu3266.dll
   Function: SetCursorPosition
   Address: 60612963
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNSystemInfo::SetCursorPosition(class CPNxPoint &) */

void __cdecl CPNSystemInfo::SetCursorPosition(CPNxPoint *param_1)

{
                    /* 0x22963  1884  ?SetCursorPosition@CPNSystemInfo@@SAXAAVCPNxPoint@@@Z */
  SetCursorPos(*(int *)param_1,*(int *)(param_1 + 4));
  return;
}


