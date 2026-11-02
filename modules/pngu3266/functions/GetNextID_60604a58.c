/* Module: pngu3266.dll
   Function: GetNextID
   Address: 60604a58
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: unsigned long __thiscall XPNTreeControl::GetNextID(void) */

ulong __thiscall XPNTreeControl::GetNextID(XPNTreeControl *this)

{
  ulong uVar1;
  
                    /* 0x14a58  1276  ?GetNextID@XPNTreeControl@@IAEKXZ */
  uVar1 = *(ulong *)(this + 0xc4);
  *(ulong *)(this + 0xc4) = uVar1 + 1;
  return uVar1;
}


