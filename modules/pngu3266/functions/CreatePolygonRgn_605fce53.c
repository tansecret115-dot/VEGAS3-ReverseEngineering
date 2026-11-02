/* Module: pngu3266.dll
   Function: CreatePolygonRgn
   Address: 605fce53
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNRegion::CreatePolygonRgn(class CPNxPoint *,int) */

int __thiscall CPNRegion::CreatePolygonRgn(CPNRegion *this,CPNxPoint *param_1,int param_2)

{
  LONG LVar1;
  int cPoint;
  POINT *pptl;
  LONG *pLVar2;
  HRGN pHVar3;
  int iVar4;
  
                    /* 0xce53  936  ?CreatePolygonRgn@CPNRegion@@UAEHPAVCPNxPoint@@H@Z */
  cPoint = param_2;
  pptl = operator_new(param_2 << 3);
  if (pptl != (POINT *)0x0) {
    if (0 < param_2) {
      pLVar2 = &pptl->y;
      iVar4 = (int)param_1 - (int)pptl;
      do {
        LVar1 = *(LONG *)param_1;
        param_1 = param_1 + 8;
        ((POINT *)(pLVar2 + -1))->x = LVar1;
        *pLVar2 = *(LONG *)(iVar4 + (int)pLVar2);
        pLVar2 = pLVar2 + 2;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    pHVar3 = ::CreatePolygonRgn(pptl,cPoint,2);
    *(HRGN *)(this + 0xc) = pHVar3;
    operator_delete(pptl);
  }
  return (uint)(*(int *)(this + 0xc) != 0);
}


