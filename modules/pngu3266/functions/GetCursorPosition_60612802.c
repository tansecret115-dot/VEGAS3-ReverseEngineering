/* Module: pngu3266.dll
   Function: GetCursorPosition
   Address: 60612802
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNSystemInfo::GetCursorPosition(class CPNxPoint &) */

void __cdecl CPNSystemInfo::GetCursorPosition(CPNxPoint *param_1)

{
  tagPOINT local_c;
  
                    /* 0x22802  1173  ?GetCursorPosition@CPNSystemInfo@@SAXAAVCPNxPoint@@@Z */
  GetCursorPos(&local_c);
  *(LONG *)param_1 = local_c.x;
  *(LONG *)(param_1 + 4) = local_c.y;
  return;
}


