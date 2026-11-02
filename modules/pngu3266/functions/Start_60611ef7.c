/* Module: pngu3266.dll
   Function: Start
   Address: 60611ef7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNTimer::Start(unsigned long,int,class XPNTimer * *) */

void __thiscall XPNTimer::Start(XPNTimer *this,ulong param_1,int param_2,XPNTimer **param_3)

{
  undefined4 uVar1;
  
                    /* 0x21ef7  2069  ?Start@XPNTimer@@QAEXKHPAPAV1@@Z */
  *(int *)(this + 0xc) = param_2;
  *(XPNTimer ***)(this + 0x24) = param_3;
  if (*(int *)(this + 0x18) == 1) {
    SetPending(this,0);
  }
  *(undefined4 *)(this + 0x18) = 1;
  *(ulong *)(this + 0x10) = param_1;
  uVar1 = (**(code **)(*(int *)m_scheduler + 0xc))(m_scheduler,this,param_1);
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}


