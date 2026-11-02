/* Module: pngu3266.dll
   Function: RealizeResource
   Address: 605f2b65
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall CPNBrush::RealizeResource(void) */

int __thiscall CPNBrush::RealizeResource(CPNBrush *this)

{
  HBRUSH pHVar1;
  int iVar2;
  
                    /* 0x2b65  1734  ?RealizeResource@CPNBrush@@MAEHXZ */
  if (*(int *)(this + 0x2f) != 0) {
    return 0;
  }
  iVar2 = *(int *)(this + 0xc);
  if (iVar2 == 1) {
    pHVar1 = GetStockObject(5);
  }
  else {
    if (iVar2 == 2) {
      iVar2 = 3;
    }
    else if (iVar2 == 3) {
      iVar2 = 5;
    }
    else if (iVar2 == 4) {
      iVar2 = 2;
    }
    else if (iVar2 == 5) {
      iVar2 = 4;
    }
    else if (iVar2 == 6) {
      iVar2 = 0;
    }
    else {
      if (iVar2 != 7) {
        pHVar1 = CreateSolidBrush(*(COLORREF *)(this + 0x18));
        goto LAB_605f2bc0;
      }
      iVar2 = 1;
    }
    pHVar1 = CreateHatchBrush(iVar2,*(COLORREF *)(this + 0x18));
  }
LAB_605f2bc0:
  *(HBRUSH *)(this + 0x2f) = pHVar1;
  return 1;
}


