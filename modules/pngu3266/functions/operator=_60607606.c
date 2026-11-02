/* Module: pngu3266.dll
   Function: operator=
   Address: 60607606
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNTextWithLink & __thiscall XPNTextWithLink::operator=(class XPNTextWithLink const
   &) */

XPNTextWithLink * __thiscall
XPNTextWithLink::operator=(XPNTextWithLink *this,XPNTextWithLink *param_1)

{
                    /* 0x17606  553  ??4XPNTextWithLink@@QAEAAV0@ABV0@@Z */
  XPNCustomText::operator=((XPNCustomText *)this,(XPNCustomText *)param_1);
  CPNColor::operator=((CPNColor *)(this + 0x149),(CPNColor *)(param_1 + 0x149));
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  return this;
}


