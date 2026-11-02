/* Module: pngu3266.dll
   Function: FillRgn
   Address: 605fb0c9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::FillRgn(class CPNRegion &,class CPNBrush &) */

void __thiscall CPNDC::FillRgn(CPNDC *this,CPNRegion *param_1,CPNBrush *param_2)

{
                    /* 0xb0c9  1046  ?FillRgn@CPNDC@@UAEXAAVCPNRegion@@AAVCPNBrush@@@Z */
  CPNGraphicResource::LockResource((CPNGraphicResource *)param_2);
  ::FillRgn(*(HDC *)(this + 0x1cf),*(HRGN *)(param_1 + 0xc),*(HBRUSH *)(param_2 + 0x2f));
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)param_2);
  return;
}


