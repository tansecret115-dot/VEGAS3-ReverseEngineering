/* Module: pngu3266.dll
   Function: Attach
   Address: 606101b3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNImage::Attach(unsigned long) */

void __thiscall XPNImage::Attach(XPNImage *this,ulong param_1)

{
                    /* 0x201b3  818  ?Attach@XPNImage@@UAEXK@Z */
  if (*(int *)(this + 0x18) == 0) {
    *(ulong *)(this + 0x14) = param_1;
    *(undefined4 *)(this + 0x18) = 1;
    *(undefined4 *)(this + 0x1c) = 1;
  }
  return;
}


