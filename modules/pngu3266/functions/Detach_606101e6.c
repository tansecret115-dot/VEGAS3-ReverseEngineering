/* Module: pngu3266.dll
   Function: Detach
   Address: 606101e6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNImage::Detach(void) */

void __thiscall XPNImage::Detach(XPNImage *this)

{
                    /* 0x201e6  956  ?Detach@XPNImage@@UAEXXZ */
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


