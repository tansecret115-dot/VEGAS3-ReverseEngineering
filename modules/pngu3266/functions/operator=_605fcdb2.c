/* Module: pngu3266.dll
   Function: operator=
   Address: 605fcdb2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNRegion & __thiscall CPNRegion::operator=(class CPNRegion &) */

CPNRegion * __thiscall CPNRegion::operator=(CPNRegion *this,CPNRegion *param_1)

{
  DWORD nCount;
  LPRGNDATA lpRgnData;
  HRGN pHVar1;
  
                    /* 0xcdb2  486  ??4CPNRegion@@QAEAAV0@AAV0@@Z */
  if ((*(HGDIOBJ *)(this + 0xc) != (HGDIOBJ)0x0) && (*(int *)(this + 0x10) == 0)) {
    DeleteObject(*(HGDIOBJ *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  nCount = GetRegionData(*(HRGN *)(param_1 + 0xc),0,(LPRGNDATA)0x0);
  lpRgnData = operator_new(nCount);
  GetRegionData(*(HRGN *)(param_1 + 0xc),nCount,lpRgnData);
  pHVar1 = ExtCreateRegion((XFORM *)0x0,nCount,lpRgnData);
  *(HRGN *)(this + 0xc) = pHVar1;
  operator_delete(lpRgnData);
  return this;
}


