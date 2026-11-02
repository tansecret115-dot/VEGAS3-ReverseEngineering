/* Module: pngu3266.dll
   Function: CPNColorMap
   Address: 605f1a8e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNColorMap::CPNColorMap(class CPNColorMap const &) */

void __thiscall CPNColorMap::CPNColorMap(CPNColorMap *this,CPNColorMap *param_1)

{
  undefined4 uVar1;
  
                    /* 0x1a8e  33  ??0CPNColorMap@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &CPNObject::_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &_vftable_;
  return;
}


