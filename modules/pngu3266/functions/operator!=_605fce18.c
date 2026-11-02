/* Module: pngu3266.dll
   Function: operator!=
   Address: 605fce18
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNRegion::operator!=(class CPNRegion &) */

int __thiscall CPNRegion::operator!=(CPNRegion *this,CPNRegion *param_1)

{
  BOOL BVar1;
  
                    /* 0xce18  573  ??9CPNRegion@@QAEHAAV0@@Z */
  BVar1 = EqualRgn(*(HRGN *)(this + 0xc),*(HRGN *)(param_1 + 0xc));
  return BVar1;
}


