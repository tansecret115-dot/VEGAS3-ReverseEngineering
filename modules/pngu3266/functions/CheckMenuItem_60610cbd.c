/* Module: pngu3266.dll
   Function: CheckMenuItem
   Address: 60610cbd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNMenuButton::CheckMenuItem(unsigned long,int) */

void __thiscall XPNMenuButton::CheckMenuItem(XPNMenuButton *this,ulong param_1,int param_2)

{
                    /* 0x20cbd  844  ?CheckMenuItem@XPNMenuButton@@QAEXKH@Z */
  (**(code **)(**(int **)(this + 0xc0) + 0x38))(param_1,param_2);
  return;
}


