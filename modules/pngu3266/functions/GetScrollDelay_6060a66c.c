/* Module: pngu3266.dll
   Function: GetScrollDelay
   Address: 6060a66c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall XPNScrollButton::GetScrollDelay(void)const  */

ulong __thiscall XPNScrollButton::GetScrollDelay(XPNScrollButton *this)

{
                    /* 0x1a66c  1327  ?GetScrollDelay@XPNScrollButton@@QBEKXZ */
  return *(ulong *)(*(int *)(this + 0xfb) + 0x1c);
}


