/* Module: pngu3266.dll
   Function: Adopt
   Address: 606101cc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNImage::Adopt(unsigned long) */

int __thiscall XPNImage::Adopt(XPNImage *this,ulong param_1)

{
                    /* 0x201cc  797  ?Adopt@XPNImage@@UAEHK@Z */
  if (*(int *)(this + 0x18) == 0) {
    *(ulong *)(this + 0x14) = param_1;
    *(undefined4 *)(this + 0x1c) = 1;
  }
  return (uint)(*(int *)(this + 0x18) == 0);
}


