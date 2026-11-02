/* Module: pngu3266.dll
   Function: GetCursorHotSpot
   Address: 6061286d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNSystemInfo::GetCursorHotSpot(class CPNxPoint &) */

void __cdecl CPNSystemInfo::GetCursorHotSpot(CPNxPoint *param_1)

{
  HCURSOR hIcon;
  ICONINFO local_18;
  
                    /* 0x2286d  1172  ?GetCursorHotSpot@CPNSystemInfo@@SAXAAVCPNxPoint@@@Z */
  hIcon = GetCursor();
  GetIconInfo(hIcon,&local_18);
  *(DWORD *)param_1 = local_18.xHotspot;
  *(DWORD *)(param_1 + 4) = local_18.yHotspot;
  return;
}


