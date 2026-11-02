/* Module: pngu3266.dll
   Function: PtInRegion
   Address: 605fcec0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNRegion::PtInRegion(class CPNxPoint &) */

int __thiscall CPNRegion::PtInRegion(CPNRegion *this,CPNxPoint *param_1)

{
  BOOL BVar1;
  
                    /* 0xcec0  1726  ?PtInRegion@CPNRegion@@UAEHAAVCPNxPoint@@@Z */
  BVar1 = ::PtInRegion(*(HRGN *)(this + 0xc),*(int *)param_1,*(int *)(param_1 + 4));
  return BVar1;
}


