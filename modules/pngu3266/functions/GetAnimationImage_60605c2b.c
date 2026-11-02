/* Module: pngu3266.dll
   Function: GetAnimationImage
   Address: 60605c2b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNBitmapImage * __thiscall XPNAnimButton::GetAnimationImage(void) */

CPNBitmapImage * __thiscall XPNAnimButton::GetAnimationImage(XPNAnimButton *this)

{
                    /* 0x15c2b  1085  ?GetAnimationImage@XPNAnimButton@@QAEPAVCPNBitmapImage@@XZ */
  return *(CPNBitmapImage **)(this + 0x122);
}


