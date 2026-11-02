/* Module: pngu3266.dll
   Function: CPNCursor
   Address: 605f2cd4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNCursor::CPNCursor(class CPNCursor const &) */

void __thiscall CPNCursor::CPNCursor(CPNCursor *this,CPNCursor *param_1)

{
  undefined4 uVar1;
  
                    /* 0x2cd4  43  ??0CPNCursor@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &XPNCursor::_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &_vftable_;
  return;
}


