/* Module: pngu3266.dll
   Function: operator=
   Address: 605fc97f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNAnimateCtl & __thiscall CPNAnimateCtl::operator=(class CPNAnimateCtl const &) */

CPNAnimateCtl * __thiscall CPNAnimateCtl::operator=(CPNAnimateCtl *this,CPNAnimateCtl *param_1)

{
                    /* 0xc97f  432  ??4CPNAnimateCtl@@QAEAAV0@ABV0@@Z */
  XPNAnimateCtl::operator=((XPNAnimateCtl *)this,(XPNAnimateCtl *)param_1);
  return this;
}


