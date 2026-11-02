/* Module: pngu3266.dll
   Function: OnPaint
   Address: 6060c912
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNButton::OnPaint(class CPNDC *,int,int) */

void __thiscall XPNButton::OnPaint(XPNButton *this,CPNDC *param_1,int param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  CPNBrush *pCVar3;
  CPNMemoryDC local_48c [500];
  CPNMemoryDC local_298 [500];
  CPNBrush local_a4 [56];
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  CPNBrush *local_58;
  CPNBrush *local_50;
  CPNPen *local_48;
  int local_44;
  int iStack_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  CPNPen *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1c912  1667  ?OnPaint@XPNButton@@UAEXPAVCPNDC@@HH@Z */
  local_50 = (CPNBrush *)(*(uint *)(this + 8) & 0x100);
  if ((*(int *)(this + 0xd0) == 0) || ((*(uint *)(this + 8) & 0x800000) == 0)) {
    local_48 = (CPNPen *)0x0;
  }
  else {
    local_48 = (CPNPen *)0x1;
  }
  CPNBrush::CPNBrush(local_a4);
  CPNBrush::SetColor(local_a4,(CPNColor *)(this + 0xd8));
  (**(code **)(*(int *)this + 0x3c))(&local_24);
  local_44 = local_24;
  iStack_40 = local_20;
  local_3c = local_1c;
  local_38 = local_18;
  if (local_50 != (CPNBrush *)0x0) {
    local_38 = 3 - (uint)(*(int *)(this + 0xc4) != 0);
    local_3c = local_1c - local_38;
    local_38 = local_18 - local_38;
  }
  if (local_48 != (CPNPen *)0x0) {
    local_c = local_1c - ((*(int *)(this + 0xc4) == 0) + 1);
    local_14 = local_c + -7;
    local_c = local_c + -2;
    local_10 = ((local_18 - local_20) + -3) / 2 + local_20;
    local_8 = local_10 + 3;
    local_3c = local_3c + -7;
  }
  CPNMemoryDC::CPNMemoryDC(local_298,param_1,(CPNxRect *)&local_24);
  CPNDC::FillRectangle((CPNDC *)local_298,(CPNxRect *)&local_24,local_a4);
  CPNMemoryDC::CPNMemoryDC(local_48c,(CPNDC *)local_298,(CPNxRect *)&local_44);
  CPNDC::FillRectangle((CPNDC *)local_48c,(CPNxRect *)&local_44,local_a4);
  (**(code **)(*(int *)this + 0x138))(local_48c,&local_44,param_2,param_3);
  local_6c = local_44;
  iStack_68 = iStack_40;
  iStack_64 = local_3c;
  iStack_60 = local_38;
  (**(code **)(*(int *)this + 0x148))(&local_6c,&local_44,param_3,param_2,1);
  CPNMemoryDC::BlitTo(local_48c,(CPNDC *)local_298,(CPNxRect *)&local_6c,(CPNxRect *)&local_44,
                      0xcc0020);
  if (local_50 != (CPNBrush *)0x0) {
    if (*(int *)(this + 0xc4) == 0) {
      if ((param_2 == 0) && (*(int *)(this + 200) == 0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      if (((*(int *)(this + 0xc0) == 0) && (*(int *)(this + 200) == 0)) || (param_3 != 0))
      goto LAB_6060caed;
      if ((param_2 == 0) && (*(int *)(this + 200) == 0)) {
        uVar2 = 3;
      }
      else {
        uVar2 = 4;
      }
    }
    CPNDrawHelper::DrawBorder((CPNDC *)local_298,(CPNxRect *)&local_24,uVar2);
  }
LAB_6060caed:
  if (local_48 != (CPNPen *)0x0) {
    if ((param_2 != 0) || (*(int *)(this + 200) != 0)) {
      local_14 = local_14 + 1;
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    }
    if (param_3 == 0) {
      if (&stack0x00000000 != (undefined1 *)0x298) {
        local_58 = (CPNBrush *)XPNDC::SetPen((XPNDC *)local_298,&CPNDrawHelper::m_btnTextPen);
        local_28 = (CPNPen *)XPNDC::SetBrush((XPNDC *)local_298,&CPNDrawHelper::m_btnTextBrush);
      }
      CPNDrawHelper::DrawArrow((CPNDC *)local_298,(CPNxRect *)&local_14,2);
      if (&stack0x00000000 == (undefined1 *)0x298) goto LAB_6060cc91;
      XPNDC::SetBrush((XPNDC *)local_298,(CPNBrush *)local_28);
      pCVar3 = local_58;
    }
    else {
      if (&stack0x00000000 != (undefined1 *)0x298) {
        local_28 = XPNDC::SetPen((XPNDC *)local_298,&CPNDrawHelper::m_3dHighlightPen);
        local_58 = XPNDC::SetBrush((XPNDC *)local_298,&CPNDrawHelper::m_3dHighlightBrush);
      }
      local_14 = local_14 + 1;
      local_c = local_c + 1;
      CPNDrawHelper::DrawArrow((CPNDC *)local_298,(CPNxRect *)&local_14,2);
      if (&stack0x00000000 != (undefined1 *)0x298) {
        local_48 = XPNDC::SetPen((XPNDC *)local_298,&CPNDrawHelper::m_3dShadowPen);
        local_50 = XPNDC::SetBrush((XPNDC *)local_298,&CPNDrawHelper::m_3dShadowBrush);
      }
      local_14 = local_14 + -1;
      local_c = local_c + -1;
      CPNDrawHelper::DrawArrow((CPNDC *)local_298,(CPNxRect *)&local_14,2);
      if (&stack0x00000000 == (undefined1 *)0x298) goto LAB_6060cc91;
      XPNDC::SetBrush((XPNDC *)local_298,local_50);
      XPNDC::SetPen((XPNDC *)local_298,local_48);
      XPNDC::SetBrush((XPNDC *)local_298,local_58);
      pCVar3 = (CPNBrush *)local_28;
    }
    XPNDC::SetPen((XPNDC *)local_298,(CPNPen *)pCVar3);
  }
LAB_6060cc91:
  iVar1 = (**(code **)(*(int *)this + 0x104))();
  if (iVar1 != 0) {
    local_34 = local_24 + 1;
    local_30 = local_20 + 1;
    local_2c = local_1c + -1;
    local_28 = (CPNPen *)(local_18 + -1);
    CPNDC::DrawFocusRect((CPNDC *)local_298,(CPNxRect *)&local_34);
  }
  XPNWindow::PaintToScreen
            ((XPNWindow *)this,param_1,(CPNDC *)local_298,(CPNxRect *)&local_24,
             (CPNColor *)(this + 0xd8));
  CPNMemoryDC::~CPNMemoryDC(local_48c);
  CPNMemoryDC::~CPNMemoryDC(local_298);
  CPNBrush::~CPNBrush(local_a4);
  return;
}


