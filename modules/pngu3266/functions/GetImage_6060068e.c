/* Module: pngu3266.dll
   Function: GetImage
   Address: 6060068e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNImage * __thiscall CPNImageControl::GetImage(void) */

CPNImage * __thiscall CPNImageControl::GetImage(CPNImageControl *this)

{
                    /* 0x1068e  1216  ?GetImage@CPNImageControl@@QAEPAVCPNImage@@XZ
                       0x1068e  1358  ?GetSliderPos@XPNSlider@@QBEJXZ */
  return *(CPNImage **)(this + 0xc0);
}


