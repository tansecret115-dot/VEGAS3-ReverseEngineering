/* Module: pngu3266.dll
   Function: UpdateTrackImage
   Address: 60606ed7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall CPNImageSlider::UpdateTrackImage(void) */

void __thiscall CPNImageSlider::UpdateTrackImage(CPNImageSlider *this)

{
  bool bVar1;
  int iVar2;
  CPNColor *pCVar3;
  CPNColor local_30 [32];
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x16ed7  2115  ?UpdateTrackImage@CPNImageSlider@@MAEXXZ */
  if (*(int **)(this + 0x183) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x183) + 0x40))(this + 0x187);
    XPNImageSlider::InitTrackImageOffsetArray((XPNImageSlider *)this);
    local_c = 1;
    CPNColor::CPNColor(local_30);
    local_10 = 0;
    local_8 = 0;
    (**(code **)(**(int **)(this + 0x183) + 0x38))(1,0,local_30);
    iVar2 = CPNColor::operator==(local_30,&CPNDrawHelper::m_blackColor);
    if (iVar2 != 0) {
      local_c = 2;
      local_8 = 1;
      (**(code **)(**(int **)(this + 0x183) + 0x3c))(0,0,1,0);
    }
    (**(code **)(**(int **)(this + 0x183) + 0x38))(2,0,local_30);
    iVar2 = CPNColor::operator==(local_30,&CPNDrawHelper::m_blackColor);
    if (iVar2 != 0) {
      local_c = local_c + 1;
      local_10 = 1;
      (**(code **)(**(int **)(this + 0x183) + 0x3c))(0,0,2,0);
    }
    *(int *)(this + 0x18b) = *(int *)(this + 0x18b) / local_c;
    iVar2 = (**(code **)(**(int **)(this + 0x183) + 0x60))();
    if ((iVar2 == 0) || (-1 < *(int *)(iVar2 + 8))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (local_8 != 0) {
        *(undefined4 *)(this + 0x19f) = *(undefined4 *)(this + 0x18b);
      }
      if (local_10 != 0) {
        iVar2 = *(int *)(this + 0x18b);
        if (local_8 != 0) {
          iVar2 = iVar2 << 1;
        }
        *(int *)(this + 0x1a3) = iVar2;
      }
    }
    else {
      if (local_8 != 0) {
        *(undefined4 *)(this + 0x19f) = 0;
        *(int *)(this + 0x19b) = *(int *)(this + 0x19b) + *(int *)(this + 0x18b);
      }
      if (local_10 != 0) {
        *(undefined4 *)(this + 0x1a3) = 0;
        *(int *)(this + 0x19b) = *(int *)(this + 0x19b) + *(int *)(this + 0x18b);
        if (local_8 != 0) {
          *(int *)(this + 0x19f) = *(int *)(this + 0x19f) + *(int *)(this + 0x18b);
        }
      }
    }
    iVar2 = **(int **)(this + 0x183);
    pCVar3 = CPNDrawHelper::GetBtnFaceColor();
    (**(code **)(iVar2 + 0x34))(0,0,pCVar3);
    CPNColor::~CPNColor(local_30);
  }
  return;
}


