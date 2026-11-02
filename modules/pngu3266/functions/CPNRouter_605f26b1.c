/* Module: pngu3266.dll
   Function: CPNRouter
   Address: 605f26b1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNRouter::CPNRouter(class CPNRouter const &) */

void __thiscall CPNRouter::CPNRouter(CPNRouter *this,CPNRouter *param_1)

{
  undefined4 uVar1;
  
                    /* 0x26b1  129  ??0CPNRouter@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}


