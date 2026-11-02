/* Module: pngu3266.dll
   Function: DrawArrows
   Address: 606104ba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNScrollButton::DrawArrows(class CPNDC &,class CPNxRect const
   &,unsigned long) */

void __thiscall
XPNScrollButton::DrawArrows(XPNScrollButton *this,CPNDC *param_1,CPNxRect *param_2,ulong param_3)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x204ba  980  ?DrawArrows@XPNScrollButton@@IAEXAAVCPNDC@@ABVCPNxRect@@K@Z */
  CPNScrollHelper::GetArrowRect
            (*(CPNScrollHelper **)(this + 0xfb),param_2,param_3,4,(CPNxRect *)&local_14);
  if ((local_14 < local_c) && (local_10 < local_8)) {
    local_14 = local_14 + 1;
    local_10 = local_10 + 1;
    local_c = local_c + -1;
    local_8 = local_8 + -1;
    (**(code **)(*(int *)this + 0x150))(param_1,&local_14,param_3,4);
  }
  CPNScrollHelper::GetArrowRect
            (*(CPNScrollHelper **)(this + 0xfb),param_2,param_3,8,(CPNxRect *)&local_14);
  if ((local_14 < local_c) && (local_10 < local_8)) {
    local_14 = local_14 + 1;
    local_10 = local_10 + 1;
    local_c = local_c + -1;
    local_8 = local_8 + -1;
    (**(code **)(*(int *)this + 0x150))(param_1,&local_14,param_3,8);
  }
  return;
}


