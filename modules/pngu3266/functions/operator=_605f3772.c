/* Module: pngu3266.dll
   Function: operator=
   Address: 605f3772
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNFrame & __thiscall XPNFrame::operator=(class XPNFrame const &) */

XPNFrame * __thiscall XPNFrame::operator=(XPNFrame *this,XPNFrame *param_1)

{
                    /* 0x3772  525  ??4XPNFrame@@QAEAAV0@ABV0@@Z */
  CPNWindow::operator=((CPNWindow *)this,(CPNWindow *)param_1);
  return this;
}


