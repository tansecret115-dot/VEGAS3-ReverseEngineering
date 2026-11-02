/* Module: pngu3266.dll
   Function: UpdateThumbImage
   Address: 6060704a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall CPNImageSlider::UpdateThumbImage(void) */

void __thiscall CPNImageSlider::UpdateThumbImage(CPNImageSlider *this)

{
  bool bVar1;
  int iVar2;
  CPNColor *pCVar3;
  CPNColor local_2c [32];
  int local_c;
  int local_8;
  
                    /* 0x1704a  2113  ?UpdateThumbImage@CPNImageSlider@@MAEXXZ */
  if (*(int **)(this + 399) != (int *)0x0) {
    (**(code **)(**(int **)(this + 399) + 0x40))(this + 0x193);
    XPNImageSlider::InitThumbImageOffsetArray((XPNImageSlider *)this);
    bVar1 = true;
    local_c = 1;
    CPNColor::CPNColor(local_2c);
    local_8 = 0;
    (**(code **)(**(int **)(this + 399) + 0x38))(1,0,local_2c);
    iVar2 = CPNColor::operator==(local_2c,&CPNDrawHelper::m_blackColor);
    if (iVar2 != 0) {
      local_c = 2;
      local_8 = 1;
      (**(code **)(**(int **)(this + 399) + 0x3c))(0,0,1,0);
    }
    *(int *)(this + 0x197) = *(int *)(this + 0x197) / local_c;
    iVar2 = (**(code **)(**(int **)(this + 399) + 0x60))();
    if ((iVar2 == 0) || (-1 < *(int *)(iVar2 + 8))) {
      bVar1 = false;
    }
    if (bVar1) {
      if (local_8 != 0) {
        *(undefined4 *)(this + 0x1ab) = *(undefined4 *)(this + 0x197);
      }
    }
    else if (local_8 != 0) {
      *(undefined4 *)(this + 0x1ab) = 0;
      *(int *)(this + 0x1a7) = *(int *)(this + 0x1a7) + *(int *)(this + 0x197);
    }
    iVar2 = **(int **)(this + 399);
    pCVar3 = CPNDrawHelper::GetBtnFaceColor();
    (**(code **)(iVar2 + 0x34))(0,0,pCVar3);
    CPNColor::~CPNColor(local_2c);
  }
  return;
}


