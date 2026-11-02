/* Module: pngu3266.dll
   Function: Draw
   Address: 606178cd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNImageBorder::Draw(class CPNDC &,class CPNxRect const
   &,unsigned long) */

void __thiscall
CPNImageBorder::Draw(CPNImageBorder *this,CPNDC *param_1,CPNxRect *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  CPNDC *this_00;
  CPNxRect *pCVar3;
  BITMAPINFO *pBVar4;
  void *pvVar5;
  UINT UVar6;
  DWORD DVar7;
  CPNPen local_b0 [108];
  CPNColor local_44 [32];
  uint local_24;
  uint local_20;
  CPNPen *local_18;
  uint local_14;
  HDC local_10;
  HDC local_c;
  int *local_8;
  
  pCVar3 = param_2;
                    /* 0x278cd  976  ?Draw@CPNImageBorder@@UAEXAAVCPNDC@@ABVCPNxRect@@K@Z */
  this_00 = param_1;
  local_24 = param_3 & 1;
  if (local_24 != 0) {
    local_c = *(HDC *)(param_1 + 0x1cf);
    DVar7 = 0xcc0020;
    local_8 = *(int **)(this + 0xc);
    iVar1 = *(int *)(this + 8);
    UVar6 = 0;
    iVar2 = *(int *)(this + 4);
    pBVar4 = (BITMAPINFO *)(**(code **)(*local_8 + 0x60))();
    pvVar5 = (void *)(**(code **)(*local_8 + 100))();
    StretchDIBits(local_c,*(int *)param_2,*(int *)(param_2 + 4),iVar2,iVar1,0,*(int *)(this + 0x10),
                  iVar2,iVar1,pvVar5,pBVar4,UVar6,DVar7);
  }
  local_14 = param_3 & 2;
  if (local_14 != 0) {
    local_c = *(HDC *)(param_1 + 0x1cf);
    DVar7 = 0xcc0020;
    local_8 = *(int **)(this + 0xc);
    iVar1 = *(int *)(this + 8);
    UVar6 = 0;
    iVar2 = *(int *)(this + 4);
    pBVar4 = (BITMAPINFO *)(**(code **)(*local_8 + 0x60))();
    pvVar5 = (void *)(**(code **)(*local_8 + 100))();
    StretchDIBits(local_c,*(int *)(param_2 + 8) - iVar2,*(int *)(param_2 + 4),iVar2,iVar1,0,
                  *(int *)(this + 0x14),iVar2,iVar1,pvVar5,pBVar4,UVar6,DVar7);
  }
  local_20 = param_3 & 4;
  if (local_20 != 0) {
    local_c = *(HDC *)(param_1 + 0x1cf);
    DVar7 = 0xcc0020;
    local_8 = *(int **)(this + 0xc);
    iVar1 = *(int *)(this + 8);
    UVar6 = 0;
    iVar2 = *(int *)(this + 4);
    pBVar4 = (BITMAPINFO *)(**(code **)(*local_8 + 0x60))();
    pvVar5 = (void *)(**(code **)(*local_8 + 100))();
    StretchDIBits(local_c,*(int *)param_2,*(int *)(param_2 + 0xc) - iVar1,iVar2,iVar1,0,
                  *(int *)(this + 0x18),iVar2,iVar1,pvVar5,pBVar4,UVar6,DVar7);
  }
  local_c = (HDC)(param_3 & 8);
  if (local_c != (HDC)0x0) {
    local_10 = *(HDC *)(param_1 + 0x1cf);
    DVar7 = 0xcc0020;
    local_8 = *(int **)(this + 0xc);
    iVar1 = *(int *)(this + 8);
    UVar6 = 0;
    iVar2 = *(int *)(this + 4);
    pBVar4 = (BITMAPINFO *)(**(code **)(*local_8 + 0x60))();
    pvVar5 = (void *)(**(code **)(*local_8 + 100))();
    StretchDIBits(local_10,*(int *)(param_2 + 8) - iVar2,*(int *)(param_2 + 0xc) - iVar1,iVar2,iVar1
                  ,0,*(int *)(this + 0x1c),iVar2,iVar1,pvVar5,pBVar4,UVar6,DVar7);
  }
  if ((param_3 & 0x20) != 0) {
    param_2 = (CPNxRect *)(*(int *)(param_2 + 0xc) - *(int *)(param_2 + 4));
    param_1 = (CPNDC *)0x0;
    if (local_24 != 0) {
      param_1 = *(CPNDC **)(this + 8);
      param_2 = param_2 + -(int)param_1;
    }
    if (local_20 != 0) {
      param_2 = param_2 + -*(int *)(this + 8);
    }
    local_8 = (int *)0x0;
    if (0 < *(int *)(this + 4)) {
      do {
        CPNColor::CPNColor(local_44);
        (**(code **)(**(int **)(this + 0xc) + 0x38))(local_8,*(int *)(this + 8) + -1,local_44);
        CPNPen::CPNPen(local_b0,local_44,1,1);
        if (this_00 != (CPNDC *)0x0) {
          local_18 = XPNDC::SetPen((XPNDC *)this_00,local_b0);
        }
        local_10 = (HDC)(*(int *)pCVar3 + (int)local_8);
        (**(code **)(*(int *)this_00 + 0x10))
                  (local_10,param_1 + *(int *)(pCVar3 + 4),local_10,
                   param_1 + (int)param_2 + *(int *)(pCVar3 + 4));
        if (this_00 != (CPNDC *)0x0) {
          XPNDC::SetPen((XPNDC *)this_00,local_18);
        }
        CPNPen::~CPNPen(local_b0);
        CPNColor::~CPNColor(local_44);
        local_8 = (int *)((int)local_8 + 1);
      } while ((int)local_8 < *(int *)(this + 4));
    }
  }
  if ((param_3 & 0x80) != 0) {
    param_1 = (CPNDC *)0x0;
    param_2 = (CPNxRect *)(*(int *)(pCVar3 + 0xc) - *(int *)(pCVar3 + 4));
    if (local_14 != 0) {
      param_1 = *(CPNDC **)(this + 8);
      param_2 = param_2 + -(int)param_1;
    }
    if (local_c != (HDC)0x0) {
      param_2 = param_2 + -*(int *)(this + 8);
    }
    local_8 = (int *)0x0;
    if (0 < *(int *)(this + 4)) {
      do {
        CPNColor::CPNColor(local_44);
        (**(code **)(**(int **)(this + 0xc) + 0x38))(local_8,*(int *)(this + 8) * 2 + -1,local_44);
        CPNPen::CPNPen(local_b0,local_44,1,1);
        if (this_00 != (CPNDC *)0x0) {
          local_18 = XPNDC::SetPen((XPNDC *)this_00,local_b0);
        }
        local_10 = (HDC)((int)local_8 + (*(int *)(pCVar3 + 8) - *(int *)(this + 4)));
        (**(code **)(*(int *)this_00 + 0x10))
                  (local_10,param_1 + *(int *)(pCVar3 + 4),local_10,
                   param_1 + (int)param_2 + *(int *)(pCVar3 + 4));
        if (this_00 != (CPNDC *)0x0) {
          XPNDC::SetPen((XPNDC *)this_00,local_18);
        }
        CPNPen::~CPNPen(local_b0);
        CPNColor::~CPNColor(local_44);
        local_8 = (int *)((int)local_8 + 1);
      } while ((int)local_8 < *(int *)(this + 4));
    }
  }
  if ((param_3 & 0x10) != 0) {
    param_1 = (CPNDC *)0x0;
    param_2 = (CPNxRect *)(*(int *)(pCVar3 + 8) - *(int *)pCVar3);
    if (local_24 != 0) {
      param_1 = *(CPNDC **)(this + 4);
      param_2 = param_2 + -(int)param_1;
    }
    if (local_14 != 0) {
      param_2 = param_2 + -*(int *)(this + 4);
    }
    local_8 = (int *)0x0;
    if (0 < *(int *)(this + 8)) {
      do {
        CPNColor::CPNColor(local_44);
        (**(code **)(**(int **)(this + 0xc) + 0x38))(*(int *)(this + 4) + -1,local_8,local_44);
        CPNPen::CPNPen(local_b0,local_44,1,1);
        if (this_00 != (CPNDC *)0x0) {
          local_18 = XPNDC::SetPen((XPNDC *)this_00,local_b0);
        }
        local_14 = *(int *)(pCVar3 + 4) + (int)local_8;
        (**(code **)(*(int *)this_00 + 0x10))
                  (param_1 + *(int *)pCVar3,local_14,param_1 + (int)param_2 + *(int *)pCVar3,
                   local_14);
        if (this_00 != (CPNDC *)0x0) {
          XPNDC::SetPen((XPNDC *)this_00,local_18);
        }
        CPNPen::~CPNPen(local_b0);
        CPNColor::~CPNColor(local_44);
        local_8 = (int *)((int)local_8 + 1);
      } while ((int)local_8 < *(int *)(this + 8));
    }
  }
  if ((param_3 & 0x40) != 0) {
    param_1 = (CPNDC *)0x0;
    param_2 = (CPNxRect *)(*(int *)(pCVar3 + 8) - *(int *)pCVar3);
    if (local_20 != 0) {
      param_1 = *(CPNDC **)(this + 4);
      param_2 = param_2 + -(int)param_1;
    }
    if (local_c != (HDC)0x0) {
      param_2 = param_2 + -*(int *)(this + 4);
    }
    param_3 = 0;
    if (0 < *(int *)(this + 8)) {
      do {
        CPNColor::CPNColor(local_44);
        (**(code **)(**(int **)(this + 0xc) + 0x38))
                  (*(int *)(this + 4) + -1,param_3 + *(int *)(this + 8) * 2,local_44);
        CPNPen::CPNPen(local_b0,local_44,1,1);
        if (this_00 != (CPNDC *)0x0) {
          local_18 = XPNDC::SetPen((XPNDC *)this_00,local_b0);
        }
        local_c = (HDC)((param_3 + *(int *)(pCVar3 + 0xc)) - *(int *)(this + 8));
        (**(code **)(*(int *)this_00 + 0x10))
                  (param_1 + *(int *)pCVar3,local_c,param_1 + (int)param_2 + *(int *)pCVar3,local_c)
        ;
        if (this_00 != (CPNDC *)0x0) {
          XPNDC::SetPen((XPNDC *)this_00,local_18);
        }
        CPNPen::~CPNPen(local_b0);
        CPNColor::~CPNColor(local_44);
        param_3 = param_3 + 1;
      } while ((int)param_3 < *(int *)(this + 8));
    }
  }
  return;
}


