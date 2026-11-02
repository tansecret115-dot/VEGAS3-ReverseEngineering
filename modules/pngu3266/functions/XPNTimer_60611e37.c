/* Module: pngu3266.dll
   Function: XPNTimer
   Address: 60611e37
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNTimer::XPNTimer(unsigned long,int,class XPNTimer * *) */

XPNTimer * __thiscall
XPNTimer::XPNTimer(XPNTimer *this,ulong param_1,int param_2,XPNTimer **param_3)

{
  undefined4 uVar1;
  
                    /* 0x21e37  282  ??0XPNTimer@@IAE@KHPAPAV0@@Z */
  *(undefined ***)this = &PTR_LAB_606249b8;
  CPNObject::CPNObject((CPNObject *)(this + 4));
  *(int *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(ulong *)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x18) = 1;
  *(XPNTimer ***)(this + 0x24) = param_3;
  *(undefined ***)this = &_vftable__for__IRMACallback__;
  *(undefined ***)(this + 4) = &_vftable__for__CPNObject__;
  uVar1 = (**(code **)(*(int *)m_scheduler + 0xc))(m_scheduler,this,param_1);
  *(undefined4 *)(this + 0x1c) = uVar1;
  return this;
}


