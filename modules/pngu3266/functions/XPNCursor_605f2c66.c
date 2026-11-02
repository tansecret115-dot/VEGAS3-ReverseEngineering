/* Module: pngu3266.dll
   Function: XPNCursor
   Address: 605f2c66
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNCursor::XPNCursor(class XPNCursor const &) */

void __thiscall XPNCursor::XPNCursor(XPNCursor *this,XPNCursor *param_1)

{
  undefined4 uVar1;
  
                    /* 0x2c66  202  ??0XPNCursor@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}


