/* Module: pngu3266.dll
   Function: GetTitleLength
   Address: 6060755d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall XPNTextWithLink::GetTitleLength(void)const  */

long __thiscall XPNTextWithLink::GetTitleLength(XPNTextWithLink *this)

{
                    /* 0x1755d  1399  ?GetTitleLength@XPNTextWithLink@@UBEJXZ */
  return *(long *)(*(int *)(this + 0xc4) + -8);
}


