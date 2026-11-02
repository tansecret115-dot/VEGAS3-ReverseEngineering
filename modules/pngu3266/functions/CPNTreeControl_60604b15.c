/* Module: pngu3266.dll
   Function: CPNTreeControl
   Address: 60604b15
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNTreeControl::CPNTreeControl(class CPNTreeControl const &) */

CPNTreeControl * __thiscall
CPNTreeControl::CPNTreeControl(CPNTreeControl *this,CPNTreeControl *param_1)

{
  undefined4 uVar1;
  
                    /* 0x14b15  157  ??0CPNTreeControl@@QAE@ABV0@@Z */
  XPNTreeControl::XPNTreeControl((XPNTreeControl *)this,(XPNTreeControl *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 200);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 200) = uVar1;
  return this;
}


