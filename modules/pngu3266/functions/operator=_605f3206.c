/* Module: pngu3266.dll
   Function: operator=
   Address: 605f3206
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNControl & __thiscall XPNControl::operator=(class XPNControl const &) */

XPNControl * __thiscall XPNControl::operator=(XPNControl *this,XPNControl *param_1)

{
                    /* 0x3206  517  ??4XPNControl@@QAEAAV0@ABV0@@Z
                       0x3206  522  ??4XPNDialog@@QAEAAV0@ABV0@@Z */
  CPNWindow::operator=((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  return this;
}


