/* Module: pngu3266.dll
   Function: operator=
   Address: 606074bb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNCustomText & __thiscall CPNCustomText::operator=(class CPNCustomText const &) */

CPNCustomText * __thiscall CPNCustomText::operator=(CPNCustomText *this,CPNCustomText *param_1)

{
                    /* 0x174bb  450  ??4CPNCustomText@@QAEAAV0@ABV0@@Z */
  XPNCustomText::operator=((XPNCustomText *)this,(XPNCustomText *)param_1);
  return this;
}


