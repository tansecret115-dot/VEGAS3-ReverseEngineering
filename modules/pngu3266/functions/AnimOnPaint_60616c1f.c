/* Module: pngu3266.dll
   Function: AnimOnPaint
   Address: 60616c1f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNAnimButton::AnimOnPaint(class CPNDC &) */

void __thiscall XPNAnimButton::AnimOnPaint(XPNAnimButton *this,CPNDC *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  CPNMemoryDC local_268 [500];
  CPNBrush local_74 [56];
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  CPNImage *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
                    /* 0x26c1f  799  ?AnimOnPaint@XPNAnimButton@@MAEXAAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x38))(&local_c);
  local_24 = local_c;
  local_20 = local_8;
  local_2c = 0;
  local_28 = 0;
  CPNMemoryDC::CPNMemoryDC(local_268,param_1,(CPNxRect *)&local_2c);
  if (((*(int *)(this + 0x11e) != 0) || (*(int *)(this + 0x13e) < (int)local_c)) ||
     (*(int *)(this + 0x142) < (int)local_8)) {
    CPNBrush::CPNBrush(local_74,(CPNColor *)(this + 0xff),8);
    local_34 = local_c;
    local_30 = local_8;
    local_3c = 0;
    local_38 = 0;
    CPNDC::FillRectangle((CPNDC *)local_268,(CPNxRect *)&local_3c,local_74);
    CPNBrush::~CPNBrush(local_74);
  }
  local_18 = *(CPNImage **)(this + 0x126);
  if (local_18 == (CPNImage *)0x0) {
    local_18 = *(CPNImage **)(this + 0x122);
  }
  if ((local_18 != (CPNImage *)0x0) && (iVar3 = (**(code **)(*(int *)local_18 + 4))(), iVar3 != 0))
  {
    uVar1 = *(uint *)(this + 0x13e);
    local_1c = *(uint *)(this + 0x142);
    iVar4 = (int)(local_c - uVar1) / 2;
    iVar3 = (int)(local_8 - local_1c) / 2;
    if ((int)local_c < (int)uVar1) {
      iVar4 = 0;
    }
    local_10 = (uint)((int)local_c < (int)uVar1);
    if ((int)local_8 < (int)local_1c) {
      iVar3 = 0;
    }
    local_14 = (uint)((int)local_8 < (int)local_1c);
    if (local_10 == 0) {
      uVar2 = uVar1;
      if (local_14 == 0) {
        CPNDC::Blit((CPNDC *)local_268,local_18,iVar4 + -1,iVar3 + -1,uVar1,local_1c,
                    *(int *)(this + 0x146) * *(int *)(this + 0x12e),
                    *(int *)(this + 0x14a) * *(int *)(this + 0x12e),10);
        goto LAB_60616dc3;
      }
    }
    else {
      local_10 = local_c;
      uVar2 = local_10;
    }
    local_10 = uVar2;
    bVar5 = local_14 != 0;
    local_14 = local_1c;
    if (bVar5) {
      local_14 = local_8;
    }
    CPNDC::StretchBlit((CPNDC *)local_268,local_18,iVar4,iVar3,local_10,local_14,
                       *(int *)(this + 0x146) * *(int *)(this + 0x12e),
                       *(int *)(this + 0x14a) * *(int *)(this + 0x12e),uVar1,local_1c,10);
  }
LAB_60616dc3:
  (**(code **)(*(int *)param_1 + 0x50))(0,0,local_c,local_8,local_268,0,0,10);
  CPNMemoryDC::~CPNMemoryDC(local_268);
  return;
}


