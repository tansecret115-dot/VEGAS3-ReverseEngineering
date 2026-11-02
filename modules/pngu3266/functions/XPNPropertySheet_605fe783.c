/* Module: pngu3266.dll
   Function: XPNPropertySheet
   Address: 605fe783
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNPropertySheet::XPNPropertySheet(class XPNPropertySheet const &) */

XPNPropertySheet * __thiscall
XPNPropertySheet::XPNPropertySheet(XPNPropertySheet *this,XPNPropertySheet *param_1)

{
                    /* 0xe783  263  ??0XPNPropertySheet@@QAE@ABV0@@Z */
  CPNDialog::CPNDialog((CPNDialog *)this,(CPNDialog *)param_1);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  FUN_60618bd0(this + 0xe0,(int *)(param_1 + 0xe0));
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(this + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined ***)this = &_vftable_;
  return this;
}


