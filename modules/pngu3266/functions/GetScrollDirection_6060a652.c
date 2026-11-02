/* Module: pngu3266.dll
   Function: GetScrollDirection
   Address: 6060a652
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall XPNScrollButton::GetScrollDirection(void)const  */

ulong __thiscall XPNScrollButton::GetScrollDirection(XPNScrollButton *this)

{
                    /* 0x1a652  1330  ?GetScrollDirection@XPNScrollButton@@QBEKXZ */
  return *(ulong *)(*(int *)(this + 0xfb) + 0x34);
}


