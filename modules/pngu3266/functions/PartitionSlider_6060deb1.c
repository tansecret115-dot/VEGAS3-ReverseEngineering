/* Module: pngu3266.dll
   Function: PartitionSlider
   Address: 6060deb1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNSlider::PartitionSlider(unsigned long) */

void __thiscall XPNSlider::PartitionSlider(XPNSlider *this,ulong param_1)

{
  long lVar1;
  
                    /* 0x1deb1  1715  ?PartitionSlider@XPNSlider@@QAEXK@Z */
  if (1 < param_1) {
    *(ulong *)(this + 0xf0) = param_1 - 1;
    lVar1 = GetSlidableDistance(this);
    *(double *)(this + 0xe8) = (double)lVar1 / (double)*(uint *)(this + 0xf0);
  }
  return;
}


