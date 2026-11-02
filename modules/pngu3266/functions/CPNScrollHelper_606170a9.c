/* Module: pngu3266.dll
   Function: CPNScrollHelper
   Address: 606170a9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNScrollHelper::CPNScrollHelper(class XPNButton *,unsigned long) */

CPNScrollHelper * __thiscall
CPNScrollHelper::CPNScrollHelper(CPNScrollHelper *this,XPNButton *param_1,ulong param_2)

{
                    /* 0x270a9  138  ??0CPNScrollHelper@@QAE@PAVXPNButton@@K@Z */
  CPNRouter::CPNRouter((CPNRouter *)this);
  *(undefined4 *)(this + 0x18) = 10;
  *(undefined4 *)(this + 0x1c) = 10;
  *(XPNButton **)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 100;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 1;
  *(undefined4 *)(this + 0x34) = 0x80;
  *(ulong *)(this + 0x38) = param_2;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined ***)this = &_vftable_;
  CPNRouter::AddObserver((CPNRouter *)param_1,(CPNRouter *)this,3,0);
  *(uint *)(this + 0x28) = *(uint *)(this + 0x38) & 0x10;
  return this;
}


