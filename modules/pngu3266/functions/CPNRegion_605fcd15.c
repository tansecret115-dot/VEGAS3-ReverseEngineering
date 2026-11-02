/* Module: pngu3266.dll
   Function: CPNRegion
   Address: 605fcd15
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNRegion::CPNRegion(class CPNRegion const &) */

CPNRegion * __thiscall CPNRegion::CPNRegion(CPNRegion *this,CPNRegion *param_1)

{
  DWORD nCount;
  LPRGNDATA lpRgnData;
  HRGN pHVar1;
  
                    /* 0xcd15  127  ??0CPNRegion@@QAE@ABV0@@Z */
  XPNRegion::XPNRegion((XPNRegion *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  nCount = GetRegionData(*(HRGN *)(param_1 + 0xc),0,(LPRGNDATA)0x0);
  lpRgnData = operator_new(nCount);
  GetRegionData(*(HRGN *)(param_1 + 0xc),nCount,lpRgnData);
  pHVar1 = ExtCreateRegion((XFORM *)0x0,nCount,lpRgnData);
  *(HRGN *)(this + 0xc) = pHVar1;
  operator_delete(lpRgnData);
  return this;
}


