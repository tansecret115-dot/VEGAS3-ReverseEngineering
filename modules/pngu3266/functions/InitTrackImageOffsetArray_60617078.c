/* Module: pngu3266.dll
   Function: InitTrackImageOffsetArray
   Address: 60617078
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNImageSlider::InitTrackImageOffsetArray(void) */

void __thiscall XPNImageSlider::InitTrackImageOffsetArray(XPNImageSlider *this)

{
                    /* 0x27078  1466  ?InitTrackImageOffsetArray@XPNImageSlider@@IAEXXZ */
  *(undefined4 *)(this + 0x19b) = 0;
  *(undefined4 *)(this + 0x19f) = 0xffffffff;
  *(undefined4 *)(this + 0x1a3) = 0xffffffff;
  return;
}


