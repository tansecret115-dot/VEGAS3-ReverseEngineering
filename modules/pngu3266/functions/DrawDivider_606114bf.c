/* Module: pngu3266.dll
   Function: DrawDivider
   Address: 606114bf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: long __thiscall XPNColorSelection::DrawDivider(class CPNDC *,class CPNxRect &) */

long __thiscall
XPNColorSelection::DrawDivider(XPNColorSelection *this,CPNDC *param_1,CPNxRect *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CPNPen *local_10;
  CPNPen *local_8;
  
                    /* 0x214bf  993  ?DrawDivider@XPNColorSelection@@IAEJPAVCPNDC@@AAVCPNxRect@@@Z
                        */
  local_8 = *(CPNPen **)param_2;
  iVar2 = ftol();
  iVar1 = *(int *)(param_2 + 4) + 2;
  iVar3 = ((*(int *)(param_2 + 0xc) + iVar1) - *(int *)(param_2 + 4)) + -4;
  if (param_1 != (CPNDC *)0x0) {
    local_10 = XPNDC::SetPen((XPNDC *)param_1,&CPNDrawHelper::m_btnShadowPen);
  }
  (**(code **)(*(int *)param_1 + 0x10))(iVar2,iVar1,iVar2,iVar3);
  if (param_1 != (CPNDC *)0x0) {
    local_8 = XPNDC::SetPen((XPNDC *)param_1,&CPNDrawHelper::m_btnHighlightPen);
  }
  (**(code **)(*(int *)param_1 + 0x10))(iVar2 + 1,iVar1,iVar2 + 1,iVar3);
  if (param_1 != (CPNDC *)0x0) {
    XPNDC::SetPen((XPNDC *)param_1,local_8);
    if (param_1 != (CPNDC *)0x0) {
      XPNDC::SetPen((XPNDC *)param_1,local_10);
    }
  }
  return iVar2;
}


