/* Module: pngu3266.dll
   Function: Create
   Address: 6060e212
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall XPNSlider::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long) */

int __thiscall
XPNSlider::Create(XPNSlider *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
                 long param_5,long param_6,ulong param_7,ulong param_8)

{
  CPNRegion *pCVar1;
  int iVar2;
  long lVar3;
  undefined4 local_2c;
  undefined4 local_28;
  long local_24;
  long local_20;
  int local_1c;
  int local_18;
  undefined8 local_c;
  
                    /* 0x1e212  928  ?Create@XPNSlider@@QAEHKPAVCPNWindow@@JJJJKK@Z */
  if ((param_8 & 1) != 0) {
    *(undefined4 *)(this + 0xf4) = 0;
  }
  pCVar1 = (CPNRegion *)(this + 0x117);
  iVar2 = (**(code **)(*(int *)(this + 0x117) + 0x2c))();
  if (iVar2 == 0) {
    CreateDefaultThumb(this);
  }
  local_2c = 0;
  local_28 = 0;
  local_20 = param_6;
  local_24 = param_5;
  (**(code **)(*(int *)pCVar1 + 0x18))(&local_1c);
  iVar2 = local_18;
  local_c._4_4_ = local_1c;
  CenterRect(this,(CPNxRect *)&local_1c,(CPNxRect *)&local_2c);
  (**(code **)(*(int *)pCVar1 + 0x20))(local_1c - local_c._4_4_,local_18 - iVar2);
  CPNRegion::operator=((CPNRegion *)(this + 0x167),pCVar1);
  CPNRegion::operator=((CPNRegion *)(this + 0x153),pCVar1);
  CenterRect(this,(CPNxRect *)(this + 0x13b),(CPNxRect *)&local_2c);
  SetUIMaxMin(this);
  iVar2 = XPNControl::Create((XPNControl *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                             param_7,(char *)0x0,param_8);
  local_c = (double)(*(int *)(this + 200) - *(int *)(this + 0xc4));
  lVar3 = GetSlidableDistance(this);
  *(double *)(this + 0xe0) = local_c / (double)lVar3;
  SetSliderPos(this,*(long *)(this + 0xc0));
  return iVar2;
}


