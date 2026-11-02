/* Module: pngu3266.dll
   Function: DrawButtonFace
   Address: 6061572c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNArrowButton::DrawButtonFace(class CPNDC *,class CPNxRect
   &,int,int) */

void __thiscall
XPNArrowButton::DrawButtonFace
          (XPNArrowButton *this,CPNDC *param_1,CPNxRect *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CPNPen *local_14;
  CPNBrush *local_c;
  XPNArrowButton *local_8;
  
                    /* 0x2572c  989  ?DrawButtonFace@XPNArrowButton@@UAEXPAVCPNDC@@AAVCPNxRect@@HH@Z
                        */
  local_8 = this;
  if ((param_1 != (CPNDC *)0x0) &&
     (local_14 = XPNDC::SetPen((XPNDC *)param_1,&CPNDrawHelper::m_blackPen), param_1 != (CPNDC *)0x0
     )) {
    local_c = XPNDC::SetBrush((XPNDC *)param_1,&CPNDrawHelper::m_blackBrush);
  }
  local_20 = *(int *)(param_2 + 8) + -2;
  local_28 = *(int *)param_2 + 2;
  local_24 = *(int *)(param_2 + 4) + 2;
  local_1c = (local_20 - local_28) / 2;
  iVar1 = (((*(int *)(param_2 + 0xc) + -2) - local_24) / 2 - local_1c / 2) + local_24;
  if (local_24 <= iVar1) {
    local_24 = iVar1;
  }
  local_1c = local_24 + local_1c;
  uVar2 = *(uint *)(local_8 + 0xb8);
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 2) == 0) {
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 8) == 0) goto LAB_606157eb;
        lVar3 = 4;
      }
      else {
        lVar3 = 3;
      }
    }
    else {
      lVar3 = 1;
    }
  }
  else {
    lVar3 = 2;
  }
  CPNDrawHelper::DrawArrow(param_1,(CPNxRect *)&local_28,lVar3);
LAB_606157eb:
  if ((param_1 != (CPNDC *)0x0) &&
     (XPNDC::SetBrush((XPNDC *)param_1,local_c), param_1 != (CPNDC *)0x0)) {
    XPNDC::SetPen((XPNDC *)param_1,local_14);
  }
  return;
}


