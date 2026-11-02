/* Module: pngu3266.dll
   Function: DrawColor
   Address: 606113fb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNColorSelection::DrawColor(class CPNDC *,class CPNxRect &) */

void __thiscall
XPNColorSelection::DrawColor(XPNColorSelection *this,CPNDC *param_1,CPNxRect *param_2)

{
  int iVar1;
  CPNBrush local_5c [56];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CPNBrush *local_10;
  CPNPen *local_8;
  
                    /* 0x213fb  992  ?DrawColor@XPNColorSelection@@IAEXPAVCPNDC@@AAVCPNxRect@@@Z */
  iVar1 = *(int *)(this + 0xd8);
  if ((-1 < iVar1) && (iVar1 < *(int *)(this + 0xe4))) {
    local_24 = *(int *)param_2 + 2;
    local_1c = *(int *)(param_2 + 8) + -2;
    local_20 = *(int *)(param_2 + 4) + 2;
    local_18 = *(int *)(param_2 + 0xc) + -2;
    *(int *)(this + 0xf0) = local_24;
    *(int *)(this + 0xf4) = local_20;
    *(int *)(this + 0xf8) = local_1c;
    *(int *)(this + 0xfc) = local_18;
    CPNBrush::CPNBrush(local_5c,*(CPNColor **)(*(int *)(this + 0xe0) + iVar1 * 4),8);
    if (param_1 != (CPNDC *)0x0) {
      local_10 = XPNDC::SetBrush((XPNDC *)param_1,local_5c);
      if (param_1 != (CPNDC *)0x0) {
        local_8 = XPNDC::SetPen((XPNDC *)param_1,&CPNDrawHelper::m_blackPen);
      }
    }
    (**(code **)(*(int *)param_1 + 0x24))(&local_24);
    if (param_1 != (CPNDC *)0x0) {
      XPNDC::SetPen((XPNDC *)param_1,local_8);
      if (param_1 != (CPNDC *)0x0) {
        XPNDC::SetBrush((XPNDC *)param_1,local_10);
      }
    }
    CPNBrush::~CPNBrush(local_5c);
  }
  return;
}


