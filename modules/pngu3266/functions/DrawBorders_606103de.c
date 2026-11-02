/* Module: pngu3266.dll
   Function: DrawBorders
   Address: 606103de
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNScrollButton::DrawBorders(class CPNDC &,class CPNxRect const
   &,unsigned long) */

void __thiscall
XPNScrollButton::DrawBorders(XPNScrollButton *this,CPNDC *param_1,CPNxRect *param_2,ulong param_3)

{
  CPNScrollHelper *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x203de  985  ?DrawBorders@XPNScrollButton@@IAEXAAVCPNDC@@ABVCPNxRect@@K@Z */
  this_00 = *(CPNScrollHelper **)(this + 0xfb);
  iVar1 = *(int *)(this_00 + 0x14);
  iVar2 = *(int *)(this_00 + 0x2c);
  CPNScrollHelper::GetArrowRect(this_00,param_2,param_3,4,(CPNxRect *)&local_18);
  iVar3 = *(int *)(this + 0xfb);
  local_8 = *(int *)(iVar3 + 0x10);
  if (((local_18 < local_10) && (local_14 < local_c)) &&
     ((*(int *)(this + 0xc4) == 0 ||
      (((iVar1 != *(int *)(iVar3 + 0xc) && (iVar2 != 0)) || (*(int *)(this + 0xc4) == 0)))))) {
    uVar4 = XPNButton::GetBorderType((XPNButton *)this,*(int *)(iVar3 + 0x20));
    CPNDrawHelper::DrawBorder(param_1,(CPNxRect *)&local_18,uVar4);
  }
  CPNScrollHelper::GetArrowRect
            (*(CPNScrollHelper **)(this + 0xfb),param_2,param_3,8,(CPNxRect *)&local_18);
  if (((local_18 < local_10) && (local_14 < local_c)) &&
     (((*(int *)(this + 0xc4) == 0 || ((iVar1 != local_8 && (iVar2 == 0)))) ||
      (*(int *)(this + 0xc4) == 0)))) {
    uVar4 = XPNButton::GetBorderType((XPNButton *)this,*(int *)(*(int *)(this + 0xfb) + 0x24));
    CPNDrawHelper::DrawBorder(param_1,(CPNxRect *)&local_18,uVar4);
  }
  return;
}


