/* Module: pngu3266.dll
   Function: DrawArrow
   Address: 60610557
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNScrollButton::DrawArrow(class CPNDC &,class CPNxRect const
   &,unsigned long,unsigned long) */

void __thiscall
XPNScrollButton::DrawArrow
          (XPNScrollButton *this,CPNDC *param_1,CPNxRect *param_2,ulong param_3,ulong param_4)

{
  int *piVar1;
  bool bVar2;
  XPNScrollButton *pXVar3;
  int *piVar4;
  CPNPen *pCVar5;
  CPNBrush *pCVar6;
  CPNBrush **ppCVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_54 [6];
  CPNBrush *local_3c [7];
  CPNBrush *local_20;
  CPNPen *local_18;
  CPNBrush *local_14;
  XPNScrollButton *local_10;
  int local_c;
  int local_8;
  
                    /* 0x20557  979  ?DrawArrow@XPNScrollButton@@MAEXAAVCPNDC@@ABVCPNxRect@@KK@Z */
  local_c = 0;
  local_10 = this;
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) == 0) goto LAB_6061078b;
    iVar9 = *(int *)param_2;
    iVar10 = *(int *)(param_2 + 0xc);
    local_14 = (CPNBrush *)((*(int *)(param_2 + 8) - iVar9) / 2);
    local_20 = local_14;
    local_8 = *(int *)(param_2 + 4);
    iVar8 = (int)local_14 / 2;
    local_18 = (CPNPen *)(iVar10 - *(int *)(param_2 + 4));
    pCVar6 = local_14;
    if ((int)local_18 < iVar8) {
      iVar8 = (int)local_18 / 2;
      pCVar6 = (CPNBrush *)(iVar8 * 2);
    }
    local_3c[0] = local_14 + -((int)pCVar6 / 2);
    local_3c[2] = local_14 + (int)pCVar6 / 2;
    local_3c[4] = local_14;
    if (*(int *)(param_2 + 8) - (int)(local_14 + (int)pCVar6 / 2) <
        (int)(local_14 + -((int)pCVar6 / 2)) - iVar9) {
      ppCVar7 = local_3c;
      iVar11 = 3;
      do {
        *ppCVar7 = *ppCVar7 + -1;
        ppCVar7 = ppCVar7 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if (param_4 == 4) {
      local_3c[1] = (CPNBrush *)((int)local_18 / 2 + local_8 + iVar8 / 2);
      local_3c[5] = local_3c[1] + iVar8;
      local_3c[3] = local_3c[1];
      if (iVar10 - (int)local_3c[1] < (int)(local_3c[1] + iVar8) - local_8) {
        ppCVar7 = local_3c + 1;
        iVar9 = 3;
        do {
          *ppCVar7 = *ppCVar7 + -1;
          ppCVar7 = ppCVar7 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      if (param_4 != 8) goto LAB_6061078b;
      local_3c[1] = (CPNBrush *)(((int)local_18 / 2 - iVar8 / 2) + local_8);
      local_3c[3] = local_3c[1];
      local_3c[5] = local_3c[1] + -iVar8;
      if (iVar10 - (int)(local_3c[1] + -iVar8) < (int)local_3c[1] - iVar9) {
        ppCVar7 = local_3c + 1;
        iVar9 = 3;
        do {
          *ppCVar7 = *ppCVar7 + -1;
          ppCVar7 = ppCVar7 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
  }
  else {
    local_8 = *(int *)(param_2 + 4);
    iVar9 = *(int *)(param_2 + 8);
    iVar10 = *(int *)param_2;
    local_14 = (CPNBrush *)((*(int *)(param_2 + 0xc) - local_8) / 2);
    local_20 = local_14;
    iVar8 = (int)local_14 / 2;
    local_18 = (CPNPen *)(iVar9 - iVar10);
    pCVar6 = local_14;
    if ((int)local_18 < iVar8) {
      iVar8 = (int)local_18 / 2;
      pCVar6 = (CPNBrush *)(iVar8 * 2);
    }
    local_3c[3] = local_14 + local_8 + (int)pCVar6 / 2;
    local_3c[1] = local_14 + (local_8 - (int)pCVar6 / 2);
    local_3c[5] = local_14 + local_8;
    if (*(int *)(param_2 + 0xc) - (int)(local_14 + local_8 + (int)pCVar6 / 2) <
        (int)(local_14 + (local_8 - (int)pCVar6 / 2)) - local_8) {
      ppCVar7 = local_3c + 1;
      iVar11 = 3;
      do {
        *ppCVar7 = *ppCVar7 + -1;
        ppCVar7 = ppCVar7 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if (param_4 == 4) {
      local_3c[0] = (CPNBrush *)((int)local_18 / 2 + iVar10 + iVar8 / 2);
      local_3c[4] = local_3c[0] + -iVar8;
      local_3c[2] = local_3c[0];
      if (iVar9 - (int)local_3c[0] < (int)(local_3c[0] + -iVar8) - iVar10) {
        ppCVar7 = local_3c;
        iVar9 = 3;
        do {
          *ppCVar7 = *ppCVar7 + -1;
          ppCVar7 = ppCVar7 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      if (param_4 != 8) goto LAB_6061078b;
      local_3c[0] = (CPNBrush *)(((int)local_18 / 2 - iVar8 / 2) + iVar10);
      local_3c[2] = local_3c[0];
      local_3c[4] = local_3c[0] + iVar8;
      if (iVar9 - (int)(local_3c[0] + iVar8) < (int)local_3c[0] - iVar10) {
        ppCVar7 = local_3c;
        iVar9 = 3;
        do {
          *ppCVar7 = *ppCVar7 + -1;
          ppCVar7 = ppCVar7 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
  }
  local_c = 1;
LAB_6061078b:
  pXVar3 = local_10;
  if (local_c != 0) {
    iVar9 = (**(code **)(*(int *)local_10 + 0xb0))();
    if (iVar9 == 0) {
      piVar4 = local_54;
      iVar9 = 0;
      do {
        iVar10 = iVar9 + 8;
        *piVar4 = *(int *)((int)local_3c + iVar9);
        piVar4[1] = *(int *)((int)local_3c + iVar9 + 4);
        *piVar4 = *piVar4 + 1;
        piVar1 = (int *)((int)local_54 + iVar9 + 4);
        *piVar1 = *piVar1 + 1;
        piVar4 = piVar4 + 2;
        iVar9 = iVar10;
      } while (iVar10 < 0x18);
      if ((param_1 != (CPNDC *)0x0) &&
         (local_18 = XPNDC::SetPen((XPNDC *)param_1,&CPNDrawHelper::m_whitePen),
         param_1 != (CPNDC *)0x0)) {
        local_20 = XPNDC::SetBrush((XPNDC *)param_1,&CPNDrawHelper::m_whiteBrush);
      }
      (**(code **)(*(int *)param_1 + 0xc))(3,local_54,0,0,1);
      if ((param_1 != (CPNDC *)0x0) &&
         (XPNDC::SetBrush((XPNDC *)param_1,local_20), param_1 != (CPNDC *)0x0)) {
        XPNDC::SetPen((XPNDC *)param_1,local_18);
      }
    }
    iVar9 = *(int *)(pXVar3 + 0xfb);
    iVar10 = *(int *)(iVar9 + 0xc);
    iVar8 = *(int *)(iVar9 + 0x14);
    iVar9 = *(int *)(iVar9 + 0x10);
    iVar11 = (**(code **)(*(int *)local_10 + 0xb0))();
    if ((iVar11 == 0) ||
       (((param_3 & 0x10) != 0 &&
        (((iVar8 == iVar9 && (param_4 == 8)) || ((iVar8 == iVar10 && (param_4 == 4)))))))) {
      bVar2 = true;
      pCVar5 = &CPNDrawHelper::m_grayTextPen;
    }
    else {
      bVar2 = false;
      pCVar5 = &CPNDrawHelper::m_btnTextPen;
    }
    if (param_1 != (CPNDC *)0x0) {
      local_18 = XPNDC::SetPen((XPNDC *)param_1,pCVar5);
    }
    pCVar6 = &CPNDrawHelper::m_grayTextBrush;
    if (!bVar2) {
      pCVar6 = &CPNDrawHelper::m_btnTextBrush;
    }
    if (param_1 != (CPNDC *)0x0) {
      local_20 = XPNDC::SetBrush((XPNDC *)param_1,pCVar6);
    }
    if (((param_4 == 4) && (*(int *)(*(int *)(local_10 + 0xfb) + 0x20) != 0)) ||
       ((param_4 == 8 && (*(int *)(*(int *)(local_10 + 0xfb) + 0x24) != 0)))) {
      ppCVar7 = local_3c;
      iVar9 = 3;
      do {
        *ppCVar7 = *ppCVar7 + 1;
        ppCVar7[1] = ppCVar7[1] + 1;
        ppCVar7 = ppCVar7 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    (**(code **)(*(int *)param_1 + 0xc))(3,local_3c,0,0,1);
    if ((param_1 != (CPNDC *)0x0) &&
       (XPNDC::SetBrush((XPNDC *)param_1,local_20), param_1 != (CPNDC *)0x0)) {
      XPNDC::SetPen((XPNDC *)param_1,local_18);
    }
  }
  return;
}


