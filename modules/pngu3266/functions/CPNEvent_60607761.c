/* Module: pngu3266.dll
   Function: CPNEvent
   Address: 60607761
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNEvent::CPNEvent(unsigned long,unsigned long,class CPNRouter *,unsigned
   long,unsigned long,unsigned long,unsigned long) */

CPNEvent * __thiscall
CPNEvent::CPNEvent(CPNEvent *this,ulong param_1,ulong param_2,CPNRouter *param_3,ulong param_4,
                  ulong param_5,ulong param_6,ulong param_7)

{
                    /* 0x17761  63  ??0CPNEvent@@QAE@KKPAVCPNRouter@@KKKK@Z */
  CPNObject::CPNObject((CPNObject *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(ulong *)(this + 8) = param_1;
  *(ulong *)(this + 0xc) = param_2;
  *(CPNRouter **)(this + 0x10) = param_3;
  *(ulong *)(this + 0x1c) = param_5;
  *(undefined4 *)(this + 0x28) = 0;
  *(ulong *)(this + 0x20) = param_6;
  *(undefined ***)this = &_vftable_;
  *(ulong *)(this + 0x24) = param_7;
  if (param_4 == 0) {
    param_4 = GetTickCount();
  }
  *(ulong *)(this + 0x14) = param_4;
  return this;
}


