/* Module: pngu3266.dll
   Function: GetImageType
   Address: 605f1c04
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: short __thiscall XPNImage::GetImageType(void)const  */

short __thiscall XPNImage::GetImageType(XPNImage *this)

{
                    /* 0x1c04  1222  ?GetImageType@XPNImage@@QBEFXZ */
  return *(short *)(this + 0x28);
}


