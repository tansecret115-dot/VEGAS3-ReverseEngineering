/* Module: pngu3266.dll
   Function: XPNTextWithLink
   Address: 606075bb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNTextWithLink::XPNTextWithLink(class XPNTextWithLink const &) */

XPNTextWithLink * __thiscall
XPNTextWithLink::XPNTextWithLink(XPNTextWithLink *this,XPNTextWithLink *param_1)

{
                    /* 0x175bb  280  ??0XPNTextWithLink@@QAE@ABV0@@Z */
  XPNCustomText::XPNCustomText((XPNCustomText *)this,(XPNCustomText *)param_1);
  *(undefined ***)this = &CPNCustomText::_vftable_;
  CPNColor::CPNColor((CPNColor *)(this + 0x149),(CPNColor *)(param_1 + 0x149));
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined ***)this = &_vftable_;
  return this;
}


