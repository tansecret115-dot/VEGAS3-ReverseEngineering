/* Module: pngu3266.dll
   Function: DrawBorder
   Address: 60609249
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNDrawHelper::DrawBorder(class CPNDC &,class CPNxRect &,unsigned
   long) */

void __cdecl CPNDrawHelper::DrawBorder(CPNDC *param_1,CPNxRect *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CPNPen *local_8;
  
                    /* 0x19249  984  ?DrawBorder@CPNDrawHelper@@SAXAAVCPNDC@@AAVCPNxRect@@K@Z */
  iVar1 = *(int *)param_2;
  iVar2 = *(int *)(param_2 + 4);
  iVar6 = *(int *)(param_2 + 8);
  iVar4 = *(int *)(param_2 + 0xc);
  iVar5 = iVar6 + -1;
  iVar3 = iVar4 + -1;
  if (param_3 == 1) {
    if (param_1 != (CPNDC *)0x0) {
      local_8 = XPNDC::SetPen((XPNDC *)param_1,&m_3dHighlightPen);
    }
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar2,iVar5,iVar2);
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar2,iVar1,iVar3);
    if ((param_1 != (CPNDC *)0x0) &&
       (XPNDC::SetPen((XPNDC *)param_1,local_8), param_1 != (CPNDC *)0x0)) {
      local_8 = XPNDC::SetPen((XPNDC *)param_1,&m_windowFramePen);
    }
    (**(code **)(*(int *)param_1 + 0x10))(iVar5,iVar2,iVar5,iVar3);
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar3,iVar5,iVar3);
    if ((param_1 != (CPNDC *)0x0) &&
       (XPNDC::SetPen((XPNDC *)param_1,local_8), param_1 != (CPNDC *)0x0)) {
      local_8 = XPNDC::SetPen((XPNDC *)param_1,&m_3dShadowPen);
    }
    iVar4 = iVar4 + -2;
    iVar6 = iVar6 + -2;
    (**(code **)(*(int *)param_1 + 0x10))(iVar6,iVar2 + 1,iVar6,iVar4);
    (**(code **)(*(int *)param_1 + 0x10))(iVar1 + 1,iVar4,iVar6,iVar4);
  }
  else if (param_3 == 2) {
    if (param_1 != (CPNDC *)0x0) {
      local_8 = XPNDC::SetPen((XPNDC *)param_1,&m_3dShadowPen);
    }
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar2,iVar5,iVar2);
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar2,iVar1,iVar3);
    if ((param_1 != (CPNDC *)0x0) &&
       (XPNDC::SetPen((XPNDC *)param_1,local_8), param_1 != (CPNDC *)0x0)) {
      local_8 = XPNDC::SetPen((XPNDC *)param_1,&m_3dHighlightPen);
    }
    (**(code **)(*(int *)param_1 + 0x10))(iVar5,iVar2,iVar5,iVar3);
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar3,iVar6,iVar3);
    if ((param_1 != (CPNDC *)0x0) &&
       (XPNDC::SetPen((XPNDC *)param_1,local_8), param_1 != (CPNDC *)0x0)) {
      local_8 = XPNDC::SetPen((XPNDC *)param_1,&m_windowFramePen);
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 1;
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar2,iVar1,iVar4 + -2);
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar2,iVar6 + -2,iVar2);
  }
  else if (param_3 == 3) {
    if (param_1 != (CPNDC *)0x0) {
      local_8 = XPNDC::SetPen((XPNDC *)param_1,&m_3dHighlightPen);
    }
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar2,iVar5,iVar2);
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar2,iVar1,iVar3);
    if ((param_1 != (CPNDC *)0x0) &&
       (XPNDC::SetPen((XPNDC *)param_1,local_8), param_1 != (CPNDC *)0x0)) {
      local_8 = XPNDC::SetPen((XPNDC *)param_1,&m_3dShadowPen);
    }
    (**(code **)(*(int *)param_1 + 0x10))(iVar5,iVar2,iVar5,iVar3);
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar3,iVar6,iVar3);
  }
  else {
    if (param_3 != 4) {
      return;
    }
    if (param_1 != (CPNDC *)0x0) {
      local_8 = XPNDC::SetPen((XPNDC *)param_1,&m_3dShadowPen);
    }
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar2,iVar5,iVar2);
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar2,iVar1,iVar3);
    if ((param_1 != (CPNDC *)0x0) &&
       (XPNDC::SetPen((XPNDC *)param_1,local_8), param_1 != (CPNDC *)0x0)) {
      local_8 = XPNDC::SetPen((XPNDC *)param_1,&m_3dHighlightPen);
    }
    (**(code **)(*(int *)param_1 + 0x10))(iVar5,iVar2,iVar5,iVar3);
    (**(code **)(*(int *)param_1 + 0x10))(iVar1,iVar3,iVar6,iVar3);
  }
  if (param_1 != (CPNDC *)0x0) {
    XPNDC::SetPen((XPNDC *)param_1,local_8);
  }
  return;
}


