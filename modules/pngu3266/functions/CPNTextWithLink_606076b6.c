/* Module: pngu3266.dll
   Function: CPNTextWithLink
   Address: 606076b6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNTextWithLink::CPNTextWithLink(class CPNTextWithLink const &) */

CPNTextWithLink * __thiscall
CPNTextWithLink::CPNTextWithLink(CPNTextWithLink *this,CPNTextWithLink *param_1)

{
                    /* 0x176b6  148  ??0CPNTextWithLink@@QAE@ABV0@@Z */
  XPNTextWithLink::XPNTextWithLink((XPNTextWithLink *)this,(XPNTextWithLink *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


