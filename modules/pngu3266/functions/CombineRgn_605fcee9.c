/* Module: pngu3266.dll
   Function: CombineRgn
   Address: 605fcee9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNRegion::CombineRgn(class CPNRegion &,int) */

void __thiscall CPNRegion::CombineRgn(CPNRegion *this,CPNRegion *param_1,int param_2)

{
                    /* 0xcee9  872  ?CombineRgn@CPNRegion@@UAEXAAV1@H@Z */
  if (param_2 == 1) {
    param_2 = 1;
  }
  else if (param_2 == 2) {
    param_2 = 5;
  }
  else if (param_2 == 3) {
    param_2 = 4;
  }
  else if (param_2 == 4) {
    param_2 = 2;
  }
  else if (param_2 == 5) {
    param_2 = 3;
  }
  ::CombineRgn(*(HRGN *)(this + 0xc),*(HRGN *)(param_1 + 0xc),*(HRGN *)(this + 0xc),param_2);
  return;
}


