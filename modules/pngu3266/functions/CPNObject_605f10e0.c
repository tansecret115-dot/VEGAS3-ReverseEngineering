/* Module: pngu3266.dll
   Function: CPNObject
   Address: 605f10e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNObject::CPNObject(class CPNObject const &) */

void __thiscall CPNObject::CPNObject(CPNObject *this,CPNObject *param_1)

{
  undefined4 uVar1;
  
                    /* 0x10e0  102  ??0CPNObject@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}


