/* Module: pngu3266.dll
   Function: SetCurrentCell
   Address: 60616bfa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNAnimButton::SetCurrentCell(unsigned long) */

int __thiscall XPNAnimButton::SetCurrentCell(XPNAnimButton *this,ulong param_1)

{
  uint uVar1;
  
                    /* 0x26bfa  1877  ?SetCurrentCell@XPNAnimButton@@UAEHK@Z */
  uVar1 = *(uint *)(this + 0x132);
  if (param_1 < uVar1) {
    *(ulong *)(this + 0x12e) = param_1;
    (**(code **)(*(int *)this + 0x78))(0,1);
  }
  return (uint)(param_1 < uVar1);
}


