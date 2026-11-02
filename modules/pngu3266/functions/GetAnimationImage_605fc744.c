/* Module: pngu3266.dll
   Function: GetAnimationImage
   Address: 605fc744
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNBitmapImage * __thiscall XPNAnimateCtl::GetAnimationImage(void) */

CPNBitmapImage * __thiscall XPNAnimateCtl::GetAnimationImage(XPNAnimateCtl *this)

{
                    /* 0xc744  1086  ?GetAnimationImage@XPNAnimateCtl@@QAEPAVCPNBitmapImage@@XZ */
  return *(CPNBitmapImage **)(this + 0xe7);
}


