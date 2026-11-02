/* Module: pngu3266.dll
   Function: OnPaint
   Address: 60611569
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNColorSelection::OnPaint(class CPNDC *) */

void __thiscall XPNColorSelection::OnPaint(XPNColorSelection *this,CPNDC *param_1)

{
  long lVar1;
  int iVar2;
  CPNMemoryDC local_250 [500];
  undefined1 local_5c [12];
  CPNBrush *local_50;
  CPNPen *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x21569  1668  ?OnPaint@XPNColorSelection@@UAEXPAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x38))(local_5c);
  (**(code **)(*(int *)this + 0x3c))(&local_14);
  CPNMemoryDC::CPNMemoryDC(local_250,param_1,(CPNxRect *)&local_14);
  CPNDC::FillRectangle((CPNDC *)local_250,(CPNxRect *)&local_14,&CPNDrawHelper::m_btnFaceBrush);
  CPNDrawHelper::DrawBorder((CPNDC *)local_250,(CPNxRect *)&local_14,1);
  local_c = local_c + -2;
  local_8 = local_8 + -2;
  local_14 = local_14 + 1;
  local_10 = local_10 + 1;
  lVar1 = DrawDivider(this,(CPNDC *)local_250,(CPNxRect *)&local_14);
  local_34 = 0;
  local_30 = 0;
  local_24 = local_14;
  local_20 = local_10;
  local_3c = lVar1 + -1;
  local_44 = local_14;
  local_2c = 5;
  local_1c = local_c;
  local_38 = local_8;
  local_18 = local_8;
  local_28 = 3;
  local_40 = local_10;
  if (&stack0x00000000 != (undefined1 *)0x250) {
    local_48 = XPNDC::SetPen((XPNDC *)local_250,&CPNDrawHelper::m_btnTextPen);
    local_50 = XPNDC::SetBrush((XPNDC *)local_250,&CPNDrawHelper::m_btnTextBrush);
  }
  local_24 = lVar1 + 2;
  CPNDrawHelper::CenterRect((CPNxRect *)&local_34,(CPNxRect *)&local_24);
  CPNDrawHelper::DrawArrow((CPNDC *)local_250,(CPNxRect *)&local_34,2);
  DrawColor(this,(CPNDC *)local_250,(CPNxRect *)&local_44);
  iVar2 = (**(code **)(*(int *)this + 0x104))();
  if (iVar2 != 0) {
    local_24 = local_14 + 1;
    local_1c = local_c + -1;
    local_20 = local_10 + 1;
    local_18 = local_8 + -1;
    CPNDC::DrawFocusRect((CPNDC *)local_250,(CPNxRect *)&local_24);
  }
  CPNMemoryDC::BlitToScreen(local_250);
  if (&stack0x00000000 != (undefined1 *)0x250) {
    XPNDC::SetBrush((XPNDC *)local_250,local_50);
    XPNDC::SetPen((XPNDC *)local_250,local_48);
  }
  CPNMemoryDC::~CPNMemoryDC(local_250);
  return;
}


