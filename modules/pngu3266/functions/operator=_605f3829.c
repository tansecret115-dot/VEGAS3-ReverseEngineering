/* Module: pngu3266.dll
   Function: operator=
   Address: 605f3829
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNFrame & __thiscall CPNFrame::operator=(class CPNFrame const &) */

CPNFrame * __thiscall CPNFrame::operator=(CPNFrame *this,CPNFrame *param_1)

{
                    /* 0x3829  457  ??4CPNFrame@@QAEAAV0@ABV0@@Z
                       0x3829  500  ??4CPNToolTip@@QAEAAV0@ABV0@@Z
                       0x3829  556  ??4XPNToolTip@@QAEAAV0@ABV0@@Z
                       0x3829  557  ??4XPNTreeControl@@QAEAAV0@ABV0@@Z */
  CPNWindow::operator=((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  return this;
}


