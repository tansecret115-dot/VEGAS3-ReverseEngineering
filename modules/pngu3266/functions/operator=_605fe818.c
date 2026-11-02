/* Module: pngu3266.dll
   Function: operator=
   Address: 605fe818
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNPropertySheet & __thiscall XPNPropertySheet::operator=(class XPNPropertySheet
   const &) */

XPNPropertySheet * __thiscall
XPNPropertySheet::operator=(XPNPropertySheet *this,XPNPropertySheet *param_1)

{
                    /* 0xe818  544  ??4XPNPropertySheet@@QAEAAV0@ABV0@@Z */
  CPNDialog::operator=((CPNDialog *)this,(CPNDialog *)param_1);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  FUN_60618e60(this + 0xe0,(int *)(param_1 + 0xe0));
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(this + 0x104) = *(undefined4 *)(param_1 + 0x104);
  return this;
}


