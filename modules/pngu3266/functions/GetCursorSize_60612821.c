/* Module: pngu3266.dll
   Function: GetCursorSize
   Address: 60612821
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNSystemInfo::GetCursorSize(class CPNxSize &) */

void __cdecl CPNSystemInfo::GetCursorSize(CPNxSize *param_1)

{
  HCURSOR hIcon;
  undefined1 local_30 [4];
  undefined4 local_2c;
  int local_28;
  ICONINFO local_18;
  
                    /* 0x22821  1174  ?GetCursorSize@CPNSystemInfo@@SAXAAVCPNxSize@@@Z */
  hIcon = GetCursor();
  GetIconInfo(hIcon,&local_18);
  if (local_18.hbmColor != (HBITMAP)0x0) {
    local_18.hbmMask = local_18.hbmColor;
  }
  GetObjectA(local_18.hbmMask,0x18,local_30);
  *(undefined4 *)param_1 = local_2c;
  if (local_18.hbmColor == (HBITMAP)0x0) {
    local_28 = local_28 / 2;
  }
  *(int *)(param_1 + 4) = local_28;
  return;
}


