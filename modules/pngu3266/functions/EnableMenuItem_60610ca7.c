/* Module: pngu3266.dll
   Function: EnableMenuItem
   Address: 60610ca7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNMenuButton::EnableMenuItem(unsigned long,int) */

void __thiscall XPNMenuButton::EnableMenuItem(XPNMenuButton *this,ulong param_1,int param_2)

{
                    /* 0x20ca7  1030  ?EnableMenuItem@XPNMenuButton@@QAEXKH@Z */
  (**(code **)(**(int **)(this + 0xc0) + 0x30))(param_1,param_2);
  return;
}


