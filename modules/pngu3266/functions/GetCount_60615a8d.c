/* Module: pngu3266.dll
   Function: GetCount
   Address: 60615a8d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNTreeControl::GetCount(void)const  */

ulong __thiscall XPNTreeControl::GetCount(XPNTreeControl *this)

{
                    /* 0x25a8d  1160  ?GetCount@XPNTreeControl@@UBEKXZ */
  if (*(int *)(this + 0xc0) != 0) {
    return *(ulong *)(*(int *)(this + 0xc0) + 8);
  }
  return 0;
}


