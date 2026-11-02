/* Module: pngu3266.dll
   Function: OffsetRgn
   Address: 605fced5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNRegion::OffsetRgn(long,long) */

void __thiscall CPNRegion::OffsetRgn(CPNRegion *this,long param_1,long param_2)

{
                    /* 0xced5  1588  ?OffsetRgn@CPNRegion@@UAEXJJ@Z */
  ::OffsetRgn(*(HRGN *)(this + 0xc),param_1,param_2);
  return;
}


