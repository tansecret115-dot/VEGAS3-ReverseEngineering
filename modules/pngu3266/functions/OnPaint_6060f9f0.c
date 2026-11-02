/* Module: pngu3266.dll
   Function: OnPaint
   Address: 6060f9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNAnimateCtl::OnPaint(class CPNDC &) */

void __thiscall XPNAnimateCtl::OnPaint(XPNAnimateCtl *this,CPNDC *param_1)

{
  CPNMemoryDC *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  CPNDC *pCVar5;
  CPNBrush local_80 [56];
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  CPNDC *local_1c;
  int *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  CPNDC *local_8;
  
                    /* 0x1f9f0  1666  ?OnPaint@XPNAnimateCtl@@MAEXAAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x38))(&local_28);
  local_30 = local_28;
  local_38 = 0;
  local_34 = 0;
  local_2c = local_24;
  this_00 = operator_new(499);
  if (this_00 == (CPNMemoryDC *)0x0) {
    local_8 = (CPNDC *)0x0;
  }
  else {
    local_8 = (CPNDC *)CPNMemoryDC::CPNMemoryDC(this_00,param_1,(CPNxRect *)&local_38);
  }
  pCVar5 = local_8;
  if (local_8 == (CPNDC *)0x0) {
    pCVar5 = param_1;
  }
  local_1c = pCVar5;
  if (((*(int *)(this + 0xe3) != 0) || (*(int *)(this + 0x103) < (int)local_28)) ||
     (*(int *)(this + 0x107) < local_24)) {
    CPNBrush::CPNBrush(local_80,(CPNColor *)(this + 0xc4),8);
    local_40 = local_28;
    local_3c = local_24;
    local_48 = 0;
    local_44 = 0;
    (**(code **)(*(int *)pCVar5 + 0x48))(&local_48,local_80);
    CPNBrush::~CPNBrush(local_80);
  }
  local_18 = *(int **)(this + 0xeb);
  if (local_18 == (int *)0x0) {
    local_18 = *(int **)(this + 0xe7);
  }
  if ((local_18 != (int *)0x0) && (iVar1 = (**(code **)(*local_18 + 4))(), iVar1 != 0)) {
    local_c = *(uint *)(this + 0x103);
    iVar1 = *(int *)(this + 0x107);
    iVar3 = (int)(local_28 - local_c) / 2;
    iVar2 = (local_24 - iVar1) / 2;
    if ((int)local_28 < (int)local_c) {
      iVar3 = 0;
    }
    local_10 = (uint)((int)local_28 < (int)local_c);
    if (local_24 < iVar1) {
      iVar2 = 0;
    }
    local_14 = (uint)(local_24 < iVar1);
    uVar4 = local_28;
    local_20 = iVar1;
    if ((local_10 == 0) && (uVar4 = local_c, local_14 == 0)) {
      (**(code **)(*(int *)pCVar5 + 0x54))
                (local_18,iVar3,iVar2,local_c,iVar1,*(int *)(this + 0x10b) * *(int *)(this + 0xf3),
                 *(int *)(this + 0x10f) * *(int *)(this + 0xf3),10);
    }
    else {
      if (local_14 != 0) {
        local_20 = local_24;
      }
      local_10 = uVar4;
      (**(code **)(*(int *)pCVar5 + 0x5c))
                (local_18,iVar3,iVar2,uVar4,local_20,*(int *)(this + 0x10b) * *(int *)(this + 0xf3),
                 *(int *)(this + 0x10f) * *(int *)(this + 0xf3),local_c,iVar1,10);
    }
  }
  if (local_8 != (CPNDC *)0x0) {
    (**(code **)(*(int *)param_1 + 0x50))(0,0,local_28,local_24,local_8,0,0,10);
    (*(code *)**(undefined4 **)local_8)(1);
  }
  return;
}


