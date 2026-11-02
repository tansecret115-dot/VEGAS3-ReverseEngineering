/* Module: pngu3266.dll
   Function: CPNDrawHelper
   Address: 605f241d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNDrawHelper::CPNDrawHelper(class CPNDrawHelper const &) */

void __thiscall CPNDrawHelper::CPNDrawHelper(CPNDrawHelper *this,CPNDrawHelper *param_1)

{
  undefined4 uVar1;
  
                    /* 0x241d  58  ??0CPNDrawHelper@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}


