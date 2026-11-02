/* Module: pngu3266.dll
   Function: SetPending
   Address: 60611f37
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNTimer::SetPending(int) */

void __thiscall XPNTimer::SetPending(XPNTimer *this,int param_1)

{
  undefined4 unaff_retaddr;
  
                    /* 0x21f37  1961  ?SetPending@XPNTimer@@QAEXH@Z */
  (**(code **)(*(int *)this + 4))(this);
  if (((*(int *)(this + 0x18) != 0) && (*(int *)(this + 0x1c) != 0)) && (*(int *)(this + 0x20) == 0)
     ) {
    (**(code **)(*(int *)m_scheduler + 0x14))(m_scheduler,*(int *)(this + 0x1c));
    *(undefined4 *)(this + 0x1c) = 0;
  }
  *(undefined4 *)(this + 0x18) = unaff_retaddr;
  (**(code **)(*(int *)this + 8))(this);
  return;
}


