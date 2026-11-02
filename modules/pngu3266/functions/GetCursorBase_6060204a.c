/* Module: pngu3266.dll
   Function: GetCursorBase
   Address: 6060204a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual long __thiscall CPNToolTip::GetCursorBase(void) */

long __thiscall CPNToolTip::GetCursorBase(CPNToolTip *this)

{
  int iVar1;
  HCURSOR hIcon;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char local_43c [1024];
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  ushort local_2a;
  ICONINFO local_24;
  DWORD local_10;
  char *local_c;
  int local_8;
  
                    /* 0x1204a  1170  ?GetCursorBase@CPNToolTip@@MAEJXZ */
  hIcon = GetCursor();
  GetIconInfo(hIcon,&local_24);
  if (local_24.hbmColor == (HBITMAP)0x0) {
    local_10 = local_24.yHotspot;
    GetObjectA(local_24.hbmMask,0x18,local_3c);
    iVar2 = (int)(local_38 * (uint)local_2a) / 8;
    iVar5 = local_34 / 2;
    iVar6 = (iVar2 + 1) / 2;
    GetBitmapBits(local_24.hbmMask,0x400,local_43c);
    iVar3 = (iVar5 + -1) * iVar6 * 2;
    if (0 < iVar3) {
      pcVar4 = local_43c + iVar2 + iVar6 * 2 * iVar5 + iVar3;
      while ((int)local_10 < iVar5) {
        local_c = pcVar4;
        iVar1 = iVar3 + iVar2;
        while (iVar3 < iVar1) {
          local_8 = iVar1 + -1;
          local_c = local_c + -1;
          if ((local_43c[iVar1 + -1] != -1) || (iVar1 = iVar1 + -1, *local_c != '\0')) {
            return iVar5 - local_10;
          }
        }
        iVar3 = iVar3 + iVar6 * -2;
        iVar5 = iVar5 + -1;
        pcVar4 = pcVar4 + iVar6 * -2;
        if (iVar3 < 1) {
          return local_34;
        }
      }
    }
  }
  else {
    local_34 = XPNToolTip::GetCursorBase((XPNToolTip *)this);
  }
  return local_34;
}


