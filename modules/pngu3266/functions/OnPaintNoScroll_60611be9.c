/* Module: pngu3266.dll
   Function: OnPaintNoScroll
   Address: 60611be9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNScrollingText::OnPaintNoScroll(class CPNDC &) */

void __thiscall XPNScrollingText::OnPaintNoScroll(XPNScrollingText *this,CPNDC *param_1)

{
  undefined1 local_114 [256];
  undefined1 local_14 [16];
  
                    /* 0x21be9  1678  ?OnPaintNoScroll@XPNScrollingText@@IAEXAAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x3c))(local_14);
  if (*(int *)(this + 0x12e) == 0) {
    (**(code **)(*(int *)this + 0x118))(local_114,0x100);
    (**(code **)(*(int *)param_1 + 0x38))(local_114,local_14,0);
  }
  return;
}


