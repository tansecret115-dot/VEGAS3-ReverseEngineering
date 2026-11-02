/* Module: pngu3266.dll
   Function: StopScrolling
   Address: 60611829
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNScrollingText::StopScrolling(void) */

void __thiscall XPNScrollingText::StopScrolling(XPNScrollingText *this)

{
                    /* 0x21829  2080  ?StopScrolling@XPNScrollingText@@UAEXXZ */
  *(undefined4 *)(this + 0x11e) = 0;
  *(undefined4 *)(this + 0x122) = 0;
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}


