/* Module: pngu3266.dll
   Function: DrawSliderTrack
   Address: 60606c73
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall CPNImageSlider::DrawSliderTrack(class CPNDC *,class CPNxRect
   const &) */

void __thiscall
CPNImageSlider::DrawSliderTrack(CPNImageSlider *this,CPNDC *param_1,CPNxRect *param_2)

{
  int *piVar1;
  BITMAPINFO *pBVar2;
  void *pvVar3;
  HDC hdc;
  int iVar4;
  int iVar5;
  UINT UVar6;
  DWORD DVar7;
  int local_40;
  int local_3c;
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
  HDC local_10;
  int *local_c;
  uint local_8;
  
                    /* 0x16c73  1013  ?DrawSliderTrack@CPNImageSlider@@MAEXPAVCPNDC@@ABVCPNxRect@@@Z
                        */
  if (*(int *)(this + 0x183) != 0) {
    local_c = (int *)(**(code **)(*(int *)this + 0xb0))();
    XPNSlider::GetThumbRect((XPNSlider *)this,(CPNxRect *)&local_40);
    local_1c = *(int *)(param_2 + 4);
    local_20 = *(int *)param_2;
    local_3c = local_3c + -local_1c;
    local_34 = local_34 + -local_1c;
    local_18 = *(int *)(this + 0x187);
    local_40 = local_40 + -local_20;
    local_38 = local_38 + -local_20;
    local_14 = *(int *)(this + 0x18b);
    local_28 = 0;
    local_24 = 0;
    if (local_c == (int *)0x0) {
      if (*(int *)(this + 0x1a3) != -1) {
        local_24 = *(int *)(this + 0x1a3);
      }
      DVar7 = 0xcc0020;
      UVar6 = 0;
      hdc = *(HDC *)(param_1 + 0x1cf);
      piVar1 = *(int **)(this + 0x183);
      local_c = piVar1;
      pBVar2 = (BITMAPINFO *)(**(code **)(*piVar1 + 0x60))();
      pvVar3 = (void *)(**(code **)(*piVar1 + 100))();
      iVar4 = 0;
      iVar5 = local_24;
    }
    else {
      iVar4 = *(int *)(this + 0x19f);
      local_8 = (uint)(*(int *)(this + 0x19b) < iVar4);
      local_30 = (local_38 - local_40) / 2 + local_40;
      local_2c = (local_34 - local_3c) / 2 + local_3c;
      if (iVar4 != -1) {
        iVar5 = local_30;
        if (*(int *)(this + 0xf4) != 0) {
          local_1c = local_1c + local_2c;
          if (local_8 != 0) {
            local_24 = local_2c;
          }
          local_14 = local_14 - local_2c;
          iVar5 = local_18;
        }
        local_18 = iVar5;
        DVar7 = 0xcc0020;
        UVar6 = 0;
        local_10 = *(HDC *)(param_1 + 0x1cf);
        piVar1 = *(int **)(this + 0x183);
        local_c = piVar1;
        pBVar2 = (BITMAPINFO *)(**(code **)(*piVar1 + 0x60))();
        pvVar3 = (void *)(**(code **)(*piVar1 + 100))();
        StretchDIBits(local_10,local_20,local_1c,local_18,local_14,0,iVar4 + local_24,local_18,
                      local_14,pvVar3,pBVar2,UVar6,DVar7);
        if (*(int *)(this + 0xf4) == 0) {
          local_20 = local_20 + local_30;
          local_28 = local_30;
          local_18 = *(int *)(this + 0x187) - local_18;
        }
        else {
          local_1c = *(int *)(param_2 + 4);
          if (local_8 == 0) {
            local_24 = local_24 + local_14;
          }
          else {
            local_24 = 0;
          }
          local_14 = local_2c;
        }
      }
      iVar5 = *(int *)(this + 0x19b);
      DVar7 = 0xcc0020;
      UVar6 = 0;
      hdc = *(HDC *)(param_1 + 0x1cf);
      piVar1 = *(int **)(this + 0x183);
      local_c = piVar1;
      pBVar2 = (BITMAPINFO *)(**(code **)(*piVar1 + 0x60))();
      pvVar3 = (void *)(**(code **)(*piVar1 + 100))();
      iVar4 = local_28;
      iVar5 = iVar5 + local_24;
    }
    StretchDIBits(hdc,local_20,local_1c,local_18,local_14,iVar4,iVar5,local_18,local_14,pvVar3,
                  pBVar2,UVar6,DVar7);
  }
  return;
}


