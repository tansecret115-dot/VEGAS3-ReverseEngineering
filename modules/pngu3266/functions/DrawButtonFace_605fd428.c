/* Module: pngu3266.dll
   Function: DrawButtonFace
   Address: 605fd428
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNImageButton::DrawButtonFace(class CPNDC *,class CPNxRect
   &,int,int) */

void __thiscall
CPNImageButton::DrawButtonFace
          (CPNImageButton *this,CPNDC *param_1,CPNxRect *param_2,int param_3,int param_4)

{
  CPNxRect *pCVar1;
  CPNxRect *pCVar2;
  CPNColor *pCVar3;
  int iVar4;
  BITMAPINFO *lpbmi;
  void *lpBits;
  CPNFont *pCVar5;
  CPNColor *pCVar6;
  int iVar7;
  CPNColor *yDest;
  undefined4 uVar8;
  UINT iUsage;
  undefined4 uVar9;
  DWORD rop;
  undefined1 local_174 [256];
  CPNColor local_74 [32];
  CPNColor local_54 [32];
  int local_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 uStack_28;
  CPNColor *local_20;
  CPNFont *local_18;
  CPNColor *local_10;
  CPNColor *local_c;
  int local_8;
  
                    /* 0xd428  988  ?DrawButtonFace@CPNImageButton@@UAEXPAVCPNDC@@AAVCPNxRect@@HH@Z
                        */
  pCVar1 = param_2;
  if (((byte)this[0xb8] & 2) == 0) {
    local_8 = (*(int *)(param_2 + 8) - *(int *)param_2) - *(int *)(this + 0xfb);
LAB_605fd479:
    local_8 = local_8 / 2;
  }
  else {
    if (*(int *)(this + 0xfb) + *(int *)(this + 0x103) <= *(int *)(param_2 + 8) - *(int *)param_2) {
      local_8 = ((*(int *)(param_2 + 8) - *(int *)(this + 0x103)) - *(int *)(this + 0xfb)) -
                *(int *)param_2;
      goto LAB_605fd479;
    }
    local_8 = *(int *)param_2;
  }
  local_c = (CPNColor *)
            (((*(int *)(param_2 + 0xc) - *(int *)(param_2 + 4)) - *(int *)(this + 0xff)) / 2);
  CPNColor::CPNColor(local_74);
  CPNColor::CPNColor(local_54);
  if (*(int **)(this + 0x107) == (int *)0x0) goto LAB_605fd7e1;
  param_2 = *(CPNxRect **)(this + 0x117);
  if (param_4 == 0) {
    if (((param_3 != 0) && (pCVar2 = *(CPNxRect **)(this + 0x123), pCVar2 != (CPNxRect *)0xffffffff)
        ) || ((*(int *)(this + 0xc0) != 0 &&
              ((*(int *)(this + 200) == 0 &&
               (pCVar2 = *(CPNxRect **)(this + 0x11b), pCVar2 != (CPNxRect *)0xffffffff)))))) {
      param_2 = pCVar2;
    }
  }
  else {
    if (*(CPNxRect **)(this + 0x11f) != (CPNxRect *)0xffffffff) {
      param_2 = *(CPNxRect **)(this + 0x11f);
    }
    if (*(int *)(this + 0x10f) != -1) {
      (**(code **)(**(int **)(this + 0x107) + 0x6c))(*(int *)(this + 0x10f),local_74);
      (**(code **)(**(int **)(this + 0x107) + 0x68))
                (*(undefined4 *)(this + 0x10f),&CPNDrawHelper::m_3dShadowColor);
    }
    if (*(int *)(this + 0x113) != -1) {
      (**(code **)(**(int **)(this + 0x107) + 0x6c))(*(int *)(this + 0x113),local_54);
      (**(code **)(**(int **)(this + 0x107) + 0x68))
                (*(undefined4 *)(this + 0x113),&CPNDrawHelper::m_3dHighlightColor);
    }
  }
  pCVar6 = *(CPNColor **)(this + 0xfb);
  pCVar3 = (CPNColor *)(*(int *)(pCVar1 + 8) - *(int *)pCVar1);
  if ((int)pCVar3 < (int)pCVar6) {
    local_8 = 0;
  }
  param_3 = *(int *)(pCVar1 + 0xc) - *(int *)(pCVar1 + 4);
  if (param_3 < *(int *)(this + 0xff)) {
    local_c = (CPNColor *)0x0;
  }
  local_18 = (CPNFont *)(uint)(param_3 < *(int *)(this + 0xff));
  if (*(int *)(this + 0x10b) == 0) {
    if (((int)pCVar3 < (int)pCVar6) || (pCVar3 = pCVar6, local_18 != (CPNFont *)0x0)) {
      local_10 = pCVar3;
      if (local_18 == (CPNFont *)0x0) {
        param_3 = *(int *)(this + 0xff);
      }
      iVar4 = (**(code **)(**(int **)(this + 0x107) + 0x18))();
      if (iVar4 != 0) {
        uVar9 = *(undefined4 *)(this + 0xff);
        iVar4 = *(int *)param_1;
        uVar8 = *(undefined4 *)(this + 0xfb);
        iVar7 = local_8;
        pCVar6 = local_c;
        pCVar3 = local_10;
        goto LAB_605fd746;
      }
      rop = 0xcc0020;
      iUsage = 0;
      local_20 = *(CPNColor **)(param_1 + 0x1cf);
      pCVar5 = *(CPNFont **)(this + 0x107);
      local_18 = pCVar5;
      lpbmi = (BITMAPINFO *)(**(code **)(*(int *)pCVar5 + 0x60))();
      lpBits = (void *)(**(code **)(*(int *)pCVar5 + 100))();
      iVar4 = *(int *)(this + 0xff);
      pCVar6 = *(CPNColor **)(this + 0xfb);
      pCVar3 = local_20;
      iVar7 = local_8;
      yDest = local_c;
    }
    else {
      iVar4 = (**(code **)(**(int **)(this + 0x107) + 0x18))();
      if (iVar4 != 0) {
        (**(code **)(*(int *)param_1 + 0x54))
                  (*(undefined4 *)(this + 0x107),local_8,local_c,*(undefined4 *)(this + 0xfb),
                   *(undefined4 *)(this + 0xff),0,param_2,10);
        goto LAB_605fd7a5;
      }
      rop = 0xcc0020;
      iUsage = 0;
      local_20 = *(CPNColor **)(param_1 + 0x1cf);
      pCVar5 = *(CPNFont **)(this + 0x107);
      param_3 = *(int *)(this + 0xff);
      local_10 = *(CPNColor **)(this + 0xfb);
      local_18 = pCVar5;
      lpbmi = (BITMAPINFO *)(**(code **)(*(int *)pCVar5 + 0x60))();
      lpBits = (void *)(**(code **)(*(int *)pCVar5 + 100))();
      pCVar3 = local_20;
      iVar7 = local_8;
      yDest = local_c;
      pCVar6 = local_10;
      iVar4 = param_3;
    }
LAB_605fd79f:
    StretchDIBits((HDC)pCVar3,iVar7,(int)yDest,(int)local_10,param_3,0,(int)param_2,(int)pCVar6,
                  iVar4,lpBits,lpbmi,iUsage,rop);
  }
  else {
    local_8 = 0;
    iVar4 = (**(code **)(**(int **)(this + 0x107) + 0x18))();
    if (iVar4 == 0) {
      rop = 0xcc0020;
      param_3 = *(int *)(pCVar1 + 0xc) - *(int *)(pCVar1 + 4);
      iUsage = 0;
      local_10 = (CPNColor *)(*(int *)(pCVar1 + 8) - *(int *)pCVar1);
      local_c = *(CPNColor **)(param_1 + 0x1cf);
      pCVar5 = *(CPNFont **)(this + 0x107);
      local_18 = pCVar5;
      lpbmi = (BITMAPINFO *)(**(code **)(*(int *)pCVar5 + 0x60))();
      lpBits = (void *)(**(code **)(*(int *)pCVar5 + 100))();
      pCVar3 = local_c;
      iVar7 = 0;
      yDest = (CPNColor *)0x0;
      pCVar6 = *(CPNColor **)(this + 0xfb);
      iVar4 = *(int *)(this + 0xff);
      goto LAB_605fd79f;
    }
    uVar9 = *(undefined4 *)(this + 0xff);
    param_3 = *(int *)(pCVar1 + 0xc) - *(int *)(pCVar1 + 4);
    uVar8 = *(undefined4 *)(this + 0xfb);
    iVar4 = *(int *)param_1;
    iVar7 = 0;
    pCVar6 = (CPNColor *)0x0;
    pCVar3 = (CPNColor *)(*(int *)(pCVar1 + 8) - *(int *)pCVar1);
LAB_605fd746:
    (**(code **)(iVar4 + 0x5c))
              (*(undefined4 *)(this + 0x107),iVar7,pCVar6,pCVar3,param_3,0,param_2,uVar8,uVar9,10);
  }
LAB_605fd7a5:
  if (param_4 != 0) {
    if (*(int *)(this + 0x10f) != -1) {
      (**(code **)(**(int **)(this + 0x107) + 0x68))(*(int *)(this + 0x10f),local_74);
    }
    if (*(int *)(this + 0x113) != -1) {
      (**(code **)(**(int **)(this + 0x107) + 0x68))(*(int *)(this + 0x113),local_54);
    }
  }
LAB_605fd7e1:
  if ((*(int *)(this + 0x107) == 0) || (((byte)this[0xb8] & 2) != 0)) {
    local_34 = *(int *)pCVar1;
    uStack_30 = *(undefined4 *)(pCVar1 + 4);
    local_2c = *(int *)(pCVar1 + 8);
    uStack_28 = *(undefined4 *)(pCVar1 + 0xc);
    pCVar5 = (CPNFont *)(**(code **)(*(int *)this + 0x30))();
    if ((param_1 != (CPNDC *)0x0) &&
       (local_18 = XPNDC::SetFont((XPNDC *)param_1,pCVar5), param_1 != (CPNDC *)0x0)) {
      local_10 = XPNDC::SetTextBgColor((XPNDC *)param_1,(CPNColor *)(this + 0xd8));
    }
    if (param_4 == 0) {
      pCVar6 = CPNDrawHelper::GetBtnTextColor();
    }
    else {
      pCVar6 = CPNDrawHelper::GetGrayTextColor();
    }
    if (param_1 != (CPNDC *)0x0) {
      local_20 = XPNDC::SetTextFgColor((XPNDC *)param_1,pCVar6);
    }
    if ((((byte)this[0xb8] & 2) != 0) && (*(int *)(this + 0x107) != 0)) {
      iVar4 = local_8 + 4 + *(int *)(this + 0xfb);
      local_34 = local_34 + iVar4;
      local_2c = local_2c + iVar4 + ((-4 - local_8) - *(int *)(this + 0xfb));
    }
    (**(code **)(*(int *)this + 0x24))(local_174,0xff);
    (**(code **)(*(int *)param_1 + 0x38))
              (local_174,&local_34,(-(uint)((*(uint *)(this + 0xb8) & 2) != 0) & 0x7e) + 2 | 0x12400
              );
    if (((param_1 != (CPNDC *)0x0) &&
        (XPNDC::SetTextFgColor((XPNDC *)param_1,local_20), param_1 != (CPNDC *)0x0)) &&
       (XPNDC::SetTextBgColor((XPNDC *)param_1,local_10), param_1 != (CPNDC *)0x0)) {
      XPNDC::SetFont((XPNDC *)param_1,local_18);
    }
  }
  CPNColor::~CPNColor(local_54);
  CPNColor::~CPNColor(local_74);
  return;
}


