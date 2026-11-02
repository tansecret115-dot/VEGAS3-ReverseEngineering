/* Module: pngu3266.dll
   Function: OnPaint
   Address: 6061818a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNTextWithLink::OnPaint(class CPNDC *) */

void __thiscall XPNTextWithLink::OnPaint(XPNTextWithLink *this,CPNDC *param_1)

{
  char cVar1;
  CPNColor *pCVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  CPNxRect *pCVar8;
  CPNFont *pCVar9;
  uint uVar10;
  CPNPen local_438 [108];
  CPNPen local_3cc [108];
  CPNMemoryDC local_360 [20];
  CPNFont *local_34c;
  CPNColor *local_344;
  CPNBrush local_16c [56];
  CPNColor local_134 [32];
  CPNFont local_114 [52];
  int local_e0 [3];
  int local_d4 [3];
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8 [2];
  int local_b0 [3];
  CPNColor *local_a4;
  CPNBrush *local_9c;
  CPNColor local_98 [12];
  int local_8c;
  int local_88;
  int iStack_84;
  int local_80;
  CPNPen *local_74;
  char *local_70 [4];
  CPNPen *local_60;
  char *local_5c [3];
  char local_50;
  undefined3 uStack_4f;
  int local_4c;
  int local_48 [3];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28 [3];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x2818a  1675  ?OnPaint@XPNTextWithLink@@MAEXPAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x3c))(&local_c8);
  local_14 = local_c8;
  local_10 = iStack_c4;
  local_c = iStack_c0;
  local_8 = iStack_bc;
  CPNMemoryDC::CPNMemoryDC(local_360,param_1,(CPNxRect *)&local_14);
  CPNBrush::CPNBrush(local_16c);
  CPNBrush::SetColor(local_16c,(CPNColor *)(this + 0xef));
  CPNDC::FillRectangle((CPNDC *)local_360,(CPNxRect *)&local_14,local_16c);
  if (&stack0x00000000 != (undefined1 *)0x360) {
    local_9c = XPNDC::SetBrush((XPNDC *)local_360,local_16c);
  }
  if (*(int *)(this + 0x10e) == 1) {
    pCVar2 = (CPNColor *)(this + 0x112);
    if (*(int *)(this + 0x11e) == 0) {
      pCVar2 = (CPNColor *)(this + 0xd0);
    }
    CPNPen::CPNPen(local_3cc,pCVar2,1,1);
    if (&stack0x00000000 != (undefined1 *)0x360) {
      local_60 = XPNDC::SetPen((XPNDC *)local_360,local_3cc);
    }
    CPNDC::DrawRectangle((CPNDC *)local_360,(CPNxRect *)&local_14);
    local_14 = local_14 + *(int *)(this + 0x131);
    local_c = local_c - *(int *)(this + 0x139);
    local_10 = local_10 + *(int *)(this + 0x135);
    local_8 = local_8 - *(int *)(this + 0x13d);
    if (&stack0x00000000 != (undefined1 *)0x360) {
      XPNDC::SetPen((XPNDC *)local_360,local_60);
    }
  }
  else {
    if (*(int *)(this + 0x10e) != 2) goto LAB_6061841e;
    CPNPen::CPNPen(local_3cc);
    CPNPen::CPNPen(local_438);
    CPNColor::CPNColor(local_134,0x14);
    CPNColor::CPNColor(local_98,0x10);
    CPNPen::SetColor(local_3cc,local_134);
    CPNPen::SetColor(local_438,local_98);
    if (&stack0x00000000 != (undefined1 *)0x360) {
      local_74 = XPNDC::SetPen((XPNDC *)local_360,local_3cc);
    }
    CPNDC::DrawLine((CPNDC *)local_360,local_14,local_8 + -1,local_c,local_8 + -1);
    CPNDC::DrawLine((CPNDC *)local_360,local_c + -1,local_8,local_c + -1,local_10);
    if (&stack0x00000000 != (undefined1 *)0x360) {
      local_60 = XPNDC::SetPen((XPNDC *)local_360,local_438);
    }
    CPNDC::DrawLine((CPNDC *)local_360,local_14,local_8,local_14,local_10);
    CPNDC::DrawLine((CPNDC *)local_360,local_14,local_10,local_c,local_10);
    local_14 = local_14 + 1;
    local_10 = local_10 + 1;
    local_c = local_c + -1;
    local_8 = local_8 + -1;
    if (&stack0x00000000 != (undefined1 *)0x360) {
      XPNDC::SetPen((XPNDC *)local_360,local_60);
      XPNDC::SetPen((XPNDC *)local_360,local_74);
    }
    CPNColor::~CPNColor(local_98);
    CPNColor::~CPNColor(local_134);
    CPNPen::~CPNPen(local_438);
  }
  CPNPen::~CPNPen(local_3cc);
LAB_6061841e:
  if (&stack0x00000000 != (undefined1 *)0x360) {
    local_a4 = XPNDC::SetTextBgColor((XPNDC *)local_360,(CPNColor *)(this + 0xef));
  }
  CPNFont::CPNFont(local_114);
  piVar3 = (int *)(**(code **)(*(int *)this + 0x30))();
  iVar4 = (**(code **)(*(int *)this + 0x30))();
  iVar4 = *(int *)(iVar4 + 0x1c);
  iVar5 = (**(code **)(*(int *)this + 0x30))();
  local_38 = *(int *)(iVar5 + 0x18);
  iVar5 = (**(code **)(*(int *)this + 0x30))();
  local_34 = *(int *)(iVar5 + 0x10);
  iVar5 = (**(code **)(*(int *)this + 0x30))();
  local_2c = *(uint *)(iVar5 + 0xc);
  iVar5 = 1;
  pcVar6 = (char *)(**(code **)(*piVar3 + 0x18))();
  CPNFont::Create(local_114,local_2c,local_34,local_38,iVar4,pcVar6,iVar5);
  local_74 = (CPNPen *)local_34c;
  local_60 = (CPNPen *)local_344;
  if (*(int *)(*(int *)(this + 0xc4) + -8) != 0) {
    local_30 = 0;
    local_18 = 0;
    local_2c = 0;
    lVar7 = CPNDC::GetCharHeight((CPNDC *)local_360);
    local_38 = lVar7;
    FUN_60618bd0(local_28,(int *)(this + 0xc4));
    if (0 < *(int *)(local_28[0] + -8)) {
      local_3c = 0;
      local_34 = lVar7 * 2;
LAB_60618500:
      if (local_3c < local_8 - local_10) {
        FUN_60618d40(local_5c,&DAT_60649ac0);
        local_1c = 0;
        local_4c = 0;
LAB_60618524:
        FUN_60618bb0(local_48);
        iVar4 = 0;
        if (0 < *(int *)(local_28[0] + -8)) {
          do {
            cVar1 = *(char *)(iVar4 + local_28[0]);
            _local_50 = CONCAT31(uStack_4f,cVar1);
            if (cVar1 == '\n') goto LAB_606185a2;
            if (cVar1 == '|') {
              local_4c = 1;
              goto LAB_606185a8;
            }
            iVar5 = isspace((int)cVar1);
            if (iVar5 != 0) {
              FUN_60619140(local_48);
              goto LAB_60618579;
            }
            FUN_60619140(local_48);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(local_28[0] + -8));
        }
        goto LAB_606185ab;
      }
    }
LAB_60618899:
    FUN_60618cd0(local_28);
  }
  XPNWindow::PaintToScreen
            ((XPNWindow *)this,param_1,(CPNDC *)local_360,(CPNxRect *)&local_c8,
             (CPNColor *)(this + 0xef));
  XPNDC::SetFont((XPNDC *)local_360,(CPNFont *)local_74);
  XPNDC::SetTextFgColor((XPNDC *)local_360,(CPNColor *)local_60);
  CPNFont::~CPNFont(local_114);
  if (&stack0x00000000 != (undefined1 *)0x360) {
    XPNDC::SetTextBgColor((XPNDC *)local_360,local_a4);
    XPNDC::SetBrush((XPNDC *)local_360,local_9c);
  }
  CPNBrush::~CPNBrush(local_16c);
  CPNMemoryDC::~CPNMemoryDC(local_360);
  return;
LAB_60618579:
  iVar4 = iVar4 + 1;
  iVar5 = isspace((int)*(char *)(iVar4 + local_28[0]));
  if (iVar5 == 0) goto LAB_606185ab;
  if (local_50 == '\n') goto LAB_606185a2;
  FUN_60619140(local_48);
  goto LAB_60618579;
LAB_606185a2:
  local_18 = 1;
LAB_606185a8:
  local_1c = 1;
LAB_606185ab:
  if ((((byte)this[0xb9] & 8) != 0) && (local_8 - local_10 < local_34)) {
    FUN_60618e60(local_5c,local_28);
    thunk_FUN_60618b70(local_28);
    thunk_FUN_60618b70(local_48);
    local_18 = 1;
    FUN_60618cd0(local_48);
    goto LAB_606186eb;
  }
  if (*(int *)(local_48[0] + -8) != 0) {
    FUN_60618f60(local_70,local_5c,local_48);
    FUN_60619550((int *)local_70);
    if (local_4c == 0) {
      pCVar9 = (CPNFont *)(**(code **)(*(int *)this + 0x30))();
    }
    else {
      pCVar9 = local_114;
    }
    XPNDC::SetFont((XPNDC *)local_360,pCVar9);
    CPNDC::GetTextExtent((CPNDC *)local_360,local_70[0],(CPNxSize *)local_b8);
    if ((local_c - local_30) - local_14 < local_b8[0]) {
      local_1c = 1;
      local_18 = 1;
      thunk_FUN_60618b70(local_48);
    }
    else {
      FUN_60619160(local_5c,local_48);
      FUN_60618e60(local_70,local_28);
      piVar3 = FUN_606193f0(local_70,local_e0,
                            *(int *)(local_70[0] + -8) - *(int *)(local_48[0] + -8));
      FUN_60618e60(local_28,piVar3);
      FUN_60618cd0(local_e0);
      thunk_FUN_60618b70(local_48);
      if (*(int *)(local_28[0] + -8) == 0) {
        local_1c = 1;
      }
    }
    FUN_60618cd0((int *)local_70);
  }
  FUN_60618cd0(local_48);
  if (local_1c != 0) goto LAB_606186eb;
  goto LAB_60618524;
LAB_606186eb:
  if (*(int *)(local_5c[0] + -8) == 0) {
    local_18 = 1;
  }
  else {
    iStack_84 = local_c;
    local_88 = local_3c;
    local_80 = local_38 + local_3c;
    local_8c = local_14 + local_30;
    if (local_2c == 0) {
      XPNDC::SetTextFgColor((XPNDC *)local_360,(CPNColor *)(this + 0xd0));
      pCVar9 = (CPNFont *)(**(code **)(*(int *)this + 0x30))();
      XPNDC::SetFont((XPNDC *)local_360,pCVar9);
    }
    else {
      XPNDC::SetTextFgColor((XPNDC *)local_360,(CPNColor *)(this + 0x149));
      XPNDC::SetFont((XPNDC *)local_360,local_114);
      pCVar8 = operator_new(0x10);
      if (pCVar8 == (CPNxRect *)0x0) {
        pCVar8 = (CPNxRect *)0x0;
      }
      else {
        *(int *)pCVar8 = local_8c;
        *(int *)(pCVar8 + 4) = local_88;
        *(int *)(pCVar8 + 8) = iStack_84;
        *(int *)(pCVar8 + 0xc) = local_80;
      }
      if ((((byte)this[0xb9] & 8) == 0) || (*(int *)(local_28[0] + -8) != 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 8;
      }
      CPNDC::DrawTextExA((CPNDC *)local_360,local_5c[0],pCVar8,uVar10 | 0x12081);
      FUN_6061a230(*(void **)(this + 0x168),pCVar8);
    }
    if ((((byte)this[0xb9] & 8) == 0) || (*(int *)(local_28[0] + -8) != 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 8;
    }
    CPNDC::DrawTextExA((CPNDC *)local_360,local_5c[0],(CPNxRect *)&local_8c,uVar10 | 0x12080);
  }
  if ((local_4c != 0) && (*(int *)(local_5c[0] + -8) != 0)) {
    local_2c = (uint)(local_2c == 0);
    piVar3 = FUN_606193f0(local_28,local_d4,*(int *)(local_28[0] + -8) - 1);
    FUN_60618e60(local_28,piVar3);
    FUN_60618cd0(local_d4);
  }
  if (local_18 == 0) {
    CPNDC::GetTextExtent((CPNDC *)local_360,local_5c[0],(CPNxSize *)local_b0);
    local_30 = local_30 + local_b0[0];
  }
  else {
    local_30 = 0;
    local_34 = local_34 + local_38;
    local_3c = local_3c + local_38;
    local_18 = 0;
  }
  thunk_FUN_60618b70((int *)local_5c);
  FUN_60618cd0((int *)local_5c);
  if (*(int *)(local_28[0] + -8) < 1) goto LAB_60618899;
  goto LAB_60618500;
}


