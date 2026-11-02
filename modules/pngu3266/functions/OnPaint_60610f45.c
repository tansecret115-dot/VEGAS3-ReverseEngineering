/* Module: pngu3266.dll
   Function: OnPaint
   Address: 60610f45
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNMenuButton::OnPaint(class CPNDC *) */

void __thiscall XPNMenuButton::OnPaint(XPNMenuButton *this,CPNDC *param_1)

{
  XPNMenuButton *pXVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CPNMemoryDC local_254 [504];
  CPNColor *local_5c;
  CPNxRect local_58 [20];
  CPNFont *local_44;
  CPNColor *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char *local_10 [3];
  
                    /* 0x20f45  1670  ?OnPaint@XPNMenuButton@@UAEXPAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x38))(&local_28);
  (**(code **)(*(int *)this + 0x3c))(local_58);
  CPNMemoryDC::CPNMemoryDC(local_254,param_1,local_58);
  CPNDC::FillRectangle((CPNDC *)local_254,local_58,&CPNDrawHelper::m_btnFaceBrush);
  CPNDrawHelper::DrawBorder((CPNDC *)local_254,local_58,1);
  if (&stack0x00000000 != (undefined1 *)0x254) {
    local_44 = XPNDC::SetFont((XPNDC *)local_254,&CPNDrawHelper::m_controlsFont);
    local_3c = XPNDC::SetTextBgColor((XPNDC *)local_254,&CPNDrawHelper::m_btnFaceColor);
    local_5c = XPNDC::SetTextFgColor((XPNDC *)local_254,&CPNDrawHelper::m_btnTextColor);
  }
  FUN_60618bb0(local_10);
  iVar2 = (**(code **)(*(int *)this + 0x120))();
  iVar4 = *(int *)this;
  iVar2 = iVar2 + 1;
  iVar3 = FUN_60619190(local_10,iVar2);
  (**(code **)(iVar4 + 0x118))(iVar3,iVar2);
  FUN_60619210(local_10,-1);
  CPNDC::GetTextExtent((CPNDC *)local_254,local_10[0],(CPNxSize *)&local_20);
  local_38 = (local_28 - local_20) / 2 + -4;
  local_30 = local_38 + local_20;
  local_34 = (local_24 - local_1c) / 2;
  local_2c = local_34 + local_1c;
  CPNDC::DrawTextExA((CPNDC *)local_254,local_10[0],(CPNxRect *)&local_38,0x40000);
  pXVar1 = this + 200;
  if (*(int *)(this + 200) == 0xffff) {
    *(int *)pXVar1 = 0;
    *(undefined4 *)(this + 0xcc) = 0;
    *(undefined4 *)(this + 0xd0) = 8;
    *(undefined4 *)(this + 0xd4) = 8;
    (**(code **)(*(int *)this + 0x38))(&local_18);
    if (((byte)this[0xdc] & 1) == 0) {
      iVar4 = (local_18 - *(int *)(this + 0xd0)) + -4 + *(int *)pXVar1;
    }
    else {
      iVar4 = 4;
    }
    *(int *)pXVar1 = *(int *)pXVar1 + iVar4;
    *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + iVar4;
    iVar4 = ((local_14 - *(int *)(this + 0xd4)) + *(int *)(this + 0xcc)) / 2;
    *(int *)(this + 0xcc) = *(int *)(this + 0xcc) + iVar4;
    *(int *)(this + 0xd4) = *(int *)(this + 0xd4) + iVar4;
  }
  (**(code **)(*(int *)this + 0x13c))(local_254,pXVar1);
  CPNMemoryDC::BlitToScreen(local_254);
  FUN_60618cd0((int *)local_10);
  if (&stack0x00000000 != (undefined1 *)0x254) {
    XPNDC::SetTextFgColor((XPNDC *)local_254,local_5c);
    XPNDC::SetTextBgColor((XPNDC *)local_254,local_3c);
    XPNDC::SetFont((XPNDC *)local_254,local_44);
  }
  CPNMemoryDC::~CPNMemoryDC(local_254);
  return;
}


