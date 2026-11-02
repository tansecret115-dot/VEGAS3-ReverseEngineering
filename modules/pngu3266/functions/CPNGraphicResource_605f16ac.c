/* Module: pngu3266.dll
   Function: CPNGraphicResource
   Address: 605f16ac
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNGraphicResource::CPNGraphicResource(class CPNGraphicResource const &) */

void __thiscall
CPNGraphicResource::CPNGraphicResource(CPNGraphicResource *this,CPNGraphicResource *param_1)

{
  undefined4 uVar1;
  
                    /* 0x16ac  72  ??0CPNGraphicResource@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &CPNObject::_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &_vftable_;
  return;
}


