/* Module: pngu3266.dll
   Function: OnPaint
   Address: 6060bf84
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNCustomText::OnPaint(class CPNDC *) */

void __thiscall XPNCustomText::OnPaint(XPNCustomText *this,CPNDC *param_1)

{
  CPNColor *pCVar1;
  CPNColor *pCVar2;
  CPNFont *pCVar3;
  ulong uVar4;
  CPNPen local_388 [108];
  CPNPen local_31c [108];
  CPNMemoryDC local_2b0 [500];
  CPNBrush local_bc [56];
  CPNColor local_84 [32];
  CPNColor local_64 [32];
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  CPNBrush *local_30;
  CPNFont *local_28;
  CPNPen *local_20;
  CPNPen *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1bf84  1669  ?OnPaint@XPNCustomText@@IAEXPAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x3c))(&local_44);
  local_14 = local_44;
  local_10 = iStack_40;
  local_c = iStack_3c;
  local_8 = iStack_38;
  CPNMemoryDC::CPNMemoryDC(local_2b0,param_1,(CPNxRect *)&local_14);
  CPNBrush::CPNBrush(local_bc);
  pCVar1 = (CPNColor *)(this + 0xef);
  CPNBrush::SetColor(local_bc,pCVar1);
  CPNDC::FillRectangle((CPNDC *)local_2b0,(CPNxRect *)&local_14,local_bc);
  if (&stack0x00000000 != (undefined1 *)0x2b0) {
    local_30 = XPNDC::SetBrush((XPNDC *)local_2b0,local_bc);
  }
  if (*(int *)(this + 0x10e) == 1) {
    pCVar2 = (CPNColor *)(this + 0x112);
    if (*(int *)(this + 0x11e) == 0) {
      pCVar2 = (CPNColor *)(this + 0xd0);
    }
    CPNPen::CPNPen(local_31c,pCVar2,1,1);
    if (&stack0x00000000 != (undefined1 *)0x2b0) {
      local_18 = XPNDC::SetPen((XPNDC *)local_2b0,local_31c);
    }
    CPNDC::DrawRectangle((CPNDC *)local_2b0,(CPNxRect *)&local_14);
    local_14 = local_14 + *(int *)(this + 0x131);
    local_c = local_c - *(int *)(this + 0x139);
    local_10 = local_10 + *(int *)(this + 0x135);
    local_8 = local_8 - *(int *)(this + 0x13d);
    if (&stack0x00000000 != (undefined1 *)0x2b0) {
      XPNDC::SetPen((XPNDC *)local_2b0,local_18);
    }
  }
  else {
    if (*(int *)(this + 0x10e) != 2) goto LAB_6060c1fd;
    CPNPen::CPNPen(local_31c);
    CPNPen::CPNPen(local_388);
    CPNColor::CPNColor(local_84,0x14);
    CPNColor::CPNColor(local_64,0x10);
    CPNPen::SetColor(local_31c,local_84);
    CPNPen::SetColor(local_388,local_64);
    if (&stack0x00000000 != (undefined1 *)0x2b0) {
      local_18 = XPNDC::SetPen((XPNDC *)local_2b0,local_31c);
    }
    CPNDC::DrawLine((CPNDC *)local_2b0,local_14,local_8 + -1,local_c,local_8 + -1);
    CPNDC::DrawLine((CPNDC *)local_2b0,local_c + -1,local_8,local_c + -1,local_10);
    if (&stack0x00000000 != (undefined1 *)0x2b0) {
      local_20 = XPNDC::SetPen((XPNDC *)local_2b0,local_388);
    }
    CPNDC::DrawLine((CPNDC *)local_2b0,local_14,local_8,local_14,local_10);
    CPNDC::DrawLine((CPNDC *)local_2b0,local_14,local_10,local_c,local_10);
    local_14 = local_14 + 1;
    local_10 = local_10 + 1;
    local_c = local_c + -1;
    local_8 = local_8 + -1;
    if (&stack0x00000000 != (undefined1 *)0x2b0) {
      XPNDC::SetPen((XPNDC *)local_2b0,local_20);
      XPNDC::SetPen((XPNDC *)local_2b0,local_18);
    }
    CPNColor::~CPNColor(local_64);
    CPNColor::~CPNColor(local_84);
    CPNPen::~CPNPen(local_388);
  }
  CPNPen::~CPNPen(local_31c);
LAB_6060c1fd:
  pCVar3 = (CPNFont *)(**(code **)(*(int *)this + 0x30))();
  if (&stack0x00000000 != (undefined1 *)0x2b0) {
    local_28 = XPNDC::SetFont((XPNDC *)local_2b0,pCVar3);
    local_20 = (CPNPen *)XPNDC::SetTextBgColor((XPNDC *)local_2b0,pCVar1);
    local_18 = (CPNPen *)XPNDC::SetTextFgColor((XPNDC *)local_2b0,(CPNColor *)(this + 0xd0));
  }
  if (((byte)this[0xb9] & 2) == 0) {
    uVar4 = *(ulong *)(this + 0xc0);
  }
  else {
    uVar4 = 0x20088;
  }
  CPNDC::DrawTextExA((CPNDC *)local_2b0,*(char **)(this + 0xc4),(CPNxRect *)&local_14,uVar4);
  XPNWindow::PaintToScreen
            ((XPNWindow *)this,param_1,(CPNDC *)local_2b0,(CPNxRect *)&local_44,pCVar1);
  if (&stack0x00000000 != (undefined1 *)0x2b0) {
    XPNDC::SetTextFgColor((XPNDC *)local_2b0,(CPNColor *)local_18);
    XPNDC::SetTextBgColor((XPNDC *)local_2b0,(CPNColor *)local_20);
    XPNDC::SetFont((XPNDC *)local_2b0,local_28);
    XPNDC::SetBrush((XPNDC *)local_2b0,local_30);
  }
  CPNBrush::~CPNBrush(local_bc);
  CPNMemoryDC::~CPNMemoryDC(local_2b0);
  return;
}


