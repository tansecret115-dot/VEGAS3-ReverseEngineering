/* Module: rmbe3260.dll
   Function: FUN_66002cd0
   Address: 66002cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66002cd0(CPNRouter *param_1)

{
  CPNRegion *this;
  int iVar1;
  CPNText *this_00;
  undefined4 uVar2;
  CPNSlider *this_01;
  int iVar3;
  int iVar4;
  CPNColor *pCVar5;
  CPNColor local_60 [32];
  CPNRegion local_40 [20];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_18;
  long local_14;
  long local_10;
  int local_c;
  int local_8;
  
  FUN_66001260(param_1);
  this_00 = operator_new(0xc0);
  if (this_00 == (CPNText *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CPNText::CPNText(this_00);
  }
  *(undefined4 *)(param_1 + 0x152) = uVar2;
  this_01 = operator_new(0x183);
  if (this_01 == (CPNSlider *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = CPNSlider::CPNSlider(this_01);
  }
  *(int *)(param_1 + 0x156) = iVar3;
  if ((*(int **)(param_1 + 0x152) != (int *)0x0) && (iVar3 != 0)) {
    (**(code **)(**(int **)(param_1 + 0x152) + 0xb8))(0x418,param_1);
    FUN_660169b0(0x112,(CPNWindow *)param_1,(CPNxSize *)&local_c,(CPNxPoint *)&local_14);
    iVar1 = local_c;
    local_18 = local_8;
    iVar4 = local_8 + (local_8 >> 0x1f & 3U);
    CPNRegion::CPNRegion(local_40);
    local_2c = 0;
    local_28 = 0;
    local_20 = local_8 + -1;
    local_24 = 5;
    CPNRegion::CreateRectRgn(local_40,(CPNxRect *)&local_2c);
    iVar3 = *(int *)(param_1 + 0x156);
    *(undefined4 *)(iVar3 + 0x13b) = 0;
    *(undefined4 *)(iVar3 + 0x13f) = 0;
    *(int *)(iVar3 + 0x143) = iVar1 + -2;
    *(int *)(iVar3 + 0x147) = iVar4 >> 2;
    XPNSlider::SetSliderRange(*(XPNSlider **)(param_1 + 0x156),DAT_6606c08c,DAT_6606c090);
    pCVar5 = (CPNColor *)CPNColor::CPNColor(local_60,5);
    CPNColor::operator=((CPNColor *)(*(int *)(param_1 + 0x156) + 0xf8),pCVar5);
    CPNColor::~CPNColor(local_60);
    XPNSlider::PartitionSlider(*(XPNSlider **)(param_1 + 0x156),(DAT_6606c090 - DAT_6606c08c) + 1);
    iVar3 = *(int *)(param_1 + 0x156);
    this = (CPNRegion *)(iVar3 + 0x117);
    CPNRegion::operator=(this,local_40);
    (**(code **)(*(int *)this + 0x18))(iVar3 + 299);
    XPNSlider::Create(*(XPNSlider **)(param_1 + 0x156),0x112,(CPNWindow *)param_1,local_14,local_10,
                      local_c,local_8,0x10000600,1);
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x156),param_1,0x80000000,7);
    *(undefined4 *)(param_1 + 0x114) = 1;
    CPNRegion::~CPNRegion(local_40);
  }
  return;
}


