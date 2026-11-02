/* Module: pngu3266.dll
   Function: RealizeResource
   Address: 605f5c6b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall CPNPen::RealizeResource(void) */

int __thiscall CPNPen::RealizeResource(CPNPen *this)

{
  HPEN pHVar1;
  int iVar2;
  DWORD *pstyle;
  int iVar3;
  COLORREF CVar4;
  _OSVERSIONINFOA local_ac;
  COLORREF local_18;
  LOGBRUSH local_14;
  uint local_8;
  
                    /* 0x5c6b  1736  ?RealizeResource@CPNPen@@MAEHXZ */
  if ((*(int *)(this + 0x5f) != 0) || (*(int *)(this + 0x67) != 0)) {
    return 0;
  }
  if (*(int *)(this + 0x37) == 8) {
    pHVar1 = GetStockObject(8);
  }
  else {
    CVar4 = *(COLORREF *)(this + 0x1c);
    local_18 = CVar4;
    iVar2 = FUN_605f5f39(*(int *)(this + 0x37));
    iVar3 = *(int *)(this + 0x3b);
    if (((iVar3 != 2) || (*(int *)(this + 0x3f) != 3)) || (iVar2 == -1)) {
      local_8 = 0x10000;
      if (iVar3 == 9) {
        local_8 = 0x11000;
      }
      else if (iVar3 == 10) {
        local_8 = 0x12000;
      }
      if (*(int *)(this + 0x3f) == 0xb) {
        local_8 = local_8 | 0x100;
      }
      else if (*(int *)(this + 0x3f) == 0xc) {
        local_8 = local_8 | 0x200;
      }
      iVar3 = *(int *)(this + 0x37);
      if (iVar3 == 0xd) {
        local_14.lbStyle = 2;
        local_14.lbHatch = 3;
      }
      else if (iVar3 == 0xe) {
        local_14.lbStyle = 2;
        local_14.lbHatch = 5;
      }
      else if (iVar3 == 0xf) {
        local_14.lbStyle = 2;
        local_14.lbHatch = 2;
      }
      else if (iVar3 == 0x10) {
        local_14.lbStyle = 2;
        local_14.lbHatch = 4;
      }
      else if (iVar3 == 0x11) {
        local_14.lbHatch = 0;
        local_14.lbStyle = 2;
      }
      else if (iVar3 == 0x12) {
        local_14.lbStyle = 2;
        local_14.lbHatch = 1;
      }
      else {
        local_14.lbStyle = 0;
      }
      local_14.lbColor = CVar4;
      if ((iVar3 == *(int *)(this + 0xc)) && (*(int *)(this + 0x10) != 0)) {
        pstyle = operator_new(*(int *)(this + 0xc) << 2);
        iVar3 = 0;
        if (0 < *(int *)(this + 0xc)) {
          do {
            pstyle[iVar3] = *(int *)(*(int *)(this + 0x10) + iVar3 * 4) * *(int *)(this + 0x33);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(this + 0xc));
        }
      }
      else {
        pstyle = (DWORD *)0x0;
      }
      memset(&local_ac,0,0x94);
      local_ac.dwOSVersionInfoSize = 0x94;
      GetVersionExA(&local_ac);
      if (local_ac.dwPlatformId == 0) {
        iVar3 = *(int *)(this + 0x33);
        CVar4 = local_18;
        iVar2 = FUN_605f5f39(*(int *)(this + 0x37));
        pHVar1 = CreatePen(iVar2,iVar3,CVar4);
      }
      else {
        pHVar1 = ExtCreatePen(local_8,*(DWORD *)(this + 0x33),&local_14,0,pstyle);
      }
      *(HPEN *)(this + 0x5f) = pHVar1;
      if (pstyle == (DWORD *)0x0) {
        return 1;
      }
      operator_delete(pstyle);
      return 1;
    }
    pHVar1 = CreatePen(iVar2,*(int *)(this + 0x33),CVar4);
  }
  *(HPEN *)(this + 0x5f) = pHVar1;
  return 1;
}


