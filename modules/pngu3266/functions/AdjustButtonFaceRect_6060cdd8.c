/* Module: pngu3266.dll
   Function: AdjustButtonFaceRect
   Address: 6060cdd8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNButton::AdjustButtonFaceRect(class CPNxRect &,class
   CPNxRect const &,int,int,long) */

void __thiscall
XPNButton::AdjustButtonFaceRect
          (XPNButton *this,CPNxRect *param_1,CPNxRect *param_2,int param_3,int param_4,long param_5)

{
                    /* 0x1cdd8  788  ?AdjustButtonFaceRect@XPNButton@@MAEXAAVCPNxRect@@ABV2@HHJ@Z */
  if (param_4 != 0) {
    param_5 = param_5 + 1;
  }
  *(int *)param_1 = *(int *)param_1 + param_5;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_5;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_5;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_5;
  return;
}


