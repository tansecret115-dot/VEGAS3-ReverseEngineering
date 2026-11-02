/* Module: pngu3266.dll
   Function: UpdateImages
   Address: 606064e8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNAnimButton::UpdateImages(void) */

void __thiscall CPNAnimButton::UpdateImages(CPNAnimButton *this)

{
  CPNAnimButton *pCVar1;
  int iVar2;
  CPNBitmapImage *pCVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  CPNMemoryDC local_67c [500];
  CPNScreenDC local_488 [480];
  int local_2a8 [125];
  CPNBitmapImage local_b4 [12];
  int local_a8;
  int local_a4;
  CPNBitmapImage local_80 [12];
  long local_74;
  undefined4 local_70;
  CPNColor local_4c [32];
  undefined4 local_2c;
  undefined4 local_28;
  long local_24;
  undefined4 local_20;
  CPNBitmapImage *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x164e8  2110  ?UpdateImages@CPNAnimButton@@IAEXXZ */
  if (*(undefined4 **)(this + 0x162) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x162))(1);
    *(undefined4 *)(this + 0x162) = 0;
  }
  if (*(undefined4 **)(this + 0x166) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x166))(1);
    *(undefined4 *)(this + 0x166) = 0;
  }
  if (*(undefined4 **)(this + 0x16a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x16a))(1);
    *(undefined4 *)(this + 0x16a) = 0;
  }
  if (*(CPNBitmapImage **)(this + 0x15e) != (CPNBitmapImage *)0x0) {
    CPNBitmapImage::CPNBitmapImage(local_80,*(CPNBitmapImage **)(this + 0x15e));
    pCVar1 = this + 0x14e;
    local_8 = 1;
    *(long *)pCVar1 = local_74;
    *(undefined4 *)(this + 0x152) = local_70;
    CPNColor::CPNColor(local_4c);
    CPNBitmapImage::GetColorAt(local_80,1,0,local_4c);
    iVar2 = CPNColor::operator==(local_4c,&CPNDrawHelper::m_blackColor);
    if ((iVar2 == 0) && (((byte)this[0xb8] & 1) == 0)) {
      local_18 = 0;
    }
    else {
      local_8 = 2;
      *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 1;
      local_18 = 1;
      CPNBitmapImage::ReplaceColorAtPoint(local_80,0,0,1,0);
    }
    CPNBitmapImage::GetColorAt(local_80,2,0,local_4c);
    local_14 = CPNColor::operator==(local_4c,&CPNDrawHelper::m_blackColor);
    if (local_14 != 0) {
      local_8 = local_8 + 1;
      CPNBitmapImage::ReplaceColorAtPoint(local_80,0,0,2,0);
    }
    *(int *)(this + 0x152) = *(int *)(this + 0x152) / (int)(short)local_8;
    CPNBitmapImage::ReplaceColorAt(local_80,0,0,(CPNColor *)(this + 0xd8));
    CPNScreenDC::CPNScreenDC(local_488);
    local_24 = *(long *)pCVar1;
    local_20 = *(undefined4 *)(this + 0x152);
    local_2c = 0;
    local_28 = 0;
    CPNMemoryDC::CPNMemoryDC(local_67c,(CPNDC *)local_488,(CPNxRect *)&local_2c);
    CPNMemoryDC::CPNMemoryDC((CPNMemoryDC *)local_2a8,(CPNDC *)local_488,(CPNxRect *)&local_2c);
    CPNBitmapImage::CPNBitmapImage(local_b4,local_80);
    CPNBitmapImage::MakeDeviceDependent(local_80,(CPNDC *)local_488);
    local_1c = XPNDC::SetBitmap((XPNDC *)local_67c,local_80);
    pCVar3 = operator_new(0x33);
    if (pCVar3 == (CPNBitmapImage *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)CPNBitmapImage::CPNBitmapImage(pCVar3);
    }
    *(int **)(this + 0x162) = piVar4;
    (**(code **)(*piVar4 + 0x28))(local_488,pCVar1);
    if (&stack0x00000000 != (undefined1 *)0x2a8) {
      local_c = (**(code **)(local_2a8[0] + 0x80))(*(undefined4 *)(this + 0x162));
    }
    CPNDC::Blit((CPNDC *)local_2a8,0,0,*(long *)pCVar1,*(long *)(this + 0x152),(CPNDC *)local_67c,0,
                0,0xcc0020);
    if (&stack0x00000000 != (undefined1 *)0x2a8) {
      (**(code **)(local_2a8[0] + 0x80))(local_c);
    }
    pCVar3 = operator_new(0x33);
    if (pCVar3 == (CPNBitmapImage *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)CPNBitmapImage::CPNBitmapImage(pCVar3);
    }
    *(int **)(this + 0x16a) = piVar4;
    (**(code **)(*piVar4 + 0x28))(local_488,pCVar1);
    if (&stack0x00000000 != (undefined1 *)0x2a8) {
      local_c = (**(code **)(local_2a8[0] + 0x80))(*(undefined4 *)(this + 0x16a));
    }
    if (local_18 == 0) {
      lVar6 = 0;
      lVar5 = *(long *)(this + 0x152);
    }
    else {
      lVar5 = *(long *)(this + 0x152);
      lVar6 = lVar5;
    }
    CPNDC::Blit((CPNDC *)local_2a8,0,0,*(long *)pCVar1,lVar5,(CPNDC *)local_67c,0,lVar6,0xcc0020);
    if (&stack0x00000000 != (undefined1 *)0x2a8) {
      (**(code **)(local_2a8[0] + 0x80))(local_c);
    }
    if (local_14 == 0) {
      pCVar3 = operator_new(0x33);
      if (pCVar3 == (CPNBitmapImage *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)CPNBitmapImage::CPNBitmapImage(pCVar3);
      }
      *(int **)(this + 0x166) = piVar4;
      (**(code **)(*piVar4 + 0x28))(local_488,pCVar1);
      if (&stack0x00000000 != (undefined1 *)0x2a8) {
        local_c = (**(code **)(local_2a8[0] + 0x80))(*(undefined4 *)(this + 0x166));
      }
      CPNDC::Blit((CPNDC *)local_2a8,0,0,*(long *)pCVar1,*(long *)(this + 0x152),(CPNDC *)local_67c,
                  0,0,0xcc0020);
    }
    else {
      local_c = local_a4;
      local_10 = local_a8;
      CPNBitmapImage::GetColorAt(local_b4,local_a8 + -1,local_a4 + -1,local_4c);
      iVar2 = CPNColor::operator!=(local_4c,(CPNColor *)(this + 0xd8));
      if (iVar2 != 0) {
        local_8 = local_c + -1;
        local_14 = local_10 + -1;
        CPNBitmapImage::ReplaceColorAt(local_b4,local_14,local_8,&CPNDrawHelper::m_3dShadowColor);
        CPNBitmapImage::ReplaceColorAtPoint(local_b4,0,0,local_14,local_8);
      }
      local_8 = local_c + -1;
      CPNBitmapImage::GetColorAt(local_b4,0,local_8,local_4c);
      iVar2 = CPNColor::operator!=(local_4c,(CPNColor *)(this + 0xd8));
      if (iVar2 != 0) {
        CPNBitmapImage::ReplaceColorAt(local_b4,0,local_8,&CPNDrawHelper::m_3dHighlightColor);
        CPNBitmapImage::ReplaceColorAtPoint(local_b4,0,0,0,local_8);
      }
      CPNBitmapImage::MakeDeviceDependent(local_b4,(CPNDC *)local_488);
      XPNDC::SetBitmap((XPNDC *)local_67c,local_b4);
      pCVar3 = operator_new(0x33);
      if (pCVar3 == (CPNBitmapImage *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)CPNBitmapImage::CPNBitmapImage(pCVar3);
      }
      *(int **)(this + 0x166) = piVar4;
      (**(code **)(*piVar4 + 0x28))(local_488,pCVar1);
      if (&stack0x00000000 != (undefined1 *)0x2a8) {
        local_c = (**(code **)(local_2a8[0] + 0x80))(*(undefined4 *)(this + 0x166));
      }
      CPNDC::Blit((CPNDC *)local_2a8,0,0,*(long *)pCVar1,*(int *)(this + 0x152),(CPNDC *)local_67c,0
                  ,((local_18 != 0) + 1) * *(int *)(this + 0x152),0xcc0020);
    }
    if (&stack0x00000000 != (undefined1 *)0x2a8) {
      (**(code **)(local_2a8[0] + 0x80))(local_c);
    }
    XPNDC::SetBitmap((XPNDC *)local_67c,local_1c);
    CPNBitmapImage::~CPNBitmapImage(local_b4);
    CPNMemoryDC::~CPNMemoryDC((CPNMemoryDC *)local_2a8);
    CPNMemoryDC::~CPNMemoryDC(local_67c);
    CPNScreenDC::~CPNScreenDC(local_488);
    CPNColor::~CPNColor(local_4c);
    CPNBitmapImage::~CPNBitmapImage(local_80);
  }
  return;
}


