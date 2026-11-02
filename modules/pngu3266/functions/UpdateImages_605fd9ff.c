/* Module: pngu3266.dll
   Function: UpdateImages
   Address: 605fd9ff
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNImageButton::UpdateImages(void) */

void __thiscall CPNImageButton::UpdateImages(CPNImageButton *this)

{
  CPNImageButton *pCVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  CPNColor local_54 [32];
  CPNColor local_34 [32];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0xd9ff  2111  ?UpdateImages@CPNImageButton@@IAEXXZ */
  if (*(int **)(this + 0x107) == (int *)0x0) {
    return;
  }
  pCVar1 = this + 0xfb;
  (**(code **)(**(int **)(this + 0x107) + 0x40))(pCVar1);
  InitImageOffsetArray(this);
  local_8 = 1;
  CPNColor::CPNColor(local_34);
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  (**(code **)(**(int **)(this + 0x107) + 0x38))(1,0,local_34);
  iVar3 = CPNColor::operator==(local_34,&CPNDrawHelper::m_blackColor);
  if ((iVar3 != 0) || (((byte)this[0xb8] & 1) != 0)) {
    local_8 = 2;
    *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 1;
    local_10 = 1;
    (**(code **)(**(int **)(this + 0x107) + 0x3c))(0,0,1,0);
  }
  (**(code **)(**(int **)(this + 0x107) + 0x38))(2,0,local_34);
  iVar3 = CPNColor::operator==(local_34,&CPNDrawHelper::m_blackColor);
  if (iVar3 != 0) {
    local_8 = local_8 + 1;
    local_c = 1;
    (**(code **)(**(int **)(this + 0x107) + 0x3c))(0,0,2,0);
    (**(code **)(**(int **)(this + 0x107) + 0x38))(0,0,local_34);
    CPNColor::CPNColor(local_54);
    (**(code **)(**(int **)(this + 0x107) + 0x38))
              (*(int *)pCVar1 + -1,*(int *)(this + 0xff) + -1,local_54);
    iVar3 = CPNColor::operator!=(local_34,local_54);
    if (iVar3 != 0) {
      uVar4 = (**(code **)(**(int **)(this + 0x107) + 0x70))
                        (*(int *)pCVar1 + -1,*(int *)(this + 0xff) + -1);
      *(undefined4 *)(this + 0x10f) = uVar4;
      (**(code **)(**(int **)(this + 0x107) + 0x3c))
                (0,0,*(int *)pCVar1 + -1,*(int *)(this + 0xff) + -1);
    }
    (**(code **)(**(int **)(this + 0x107) + 0x38))(0,*(int *)(this + 0xff) + -1,local_54);
    iVar3 = CPNColor::operator!=(local_34,local_54);
    if (iVar3 != 0) {
      uVar4 = (**(code **)(**(int **)(this + 0x107) + 0x70))(0,*(int *)(this + 0xff) + -1);
      *(undefined4 *)(this + 0x113) = uVar4;
      (**(code **)(**(int **)(this + 0x107) + 0x3c))(0,0,0,*(int *)(this + 0xff) + -1);
    }
    CPNColor::~CPNColor(local_54);
  }
  (**(code **)(**(int **)(this + 0x107) + 0x38))(3,0,local_34);
  iVar3 = CPNColor::operator==(local_34,&CPNDrawHelper::m_blackColor);
  if (iVar3 != 0) {
    local_8 = local_8 + 1;
    local_14 = 1;
    (**(code **)(**(int **)(this + 0x107) + 0x3c))(0,0,3,0);
  }
  *(int *)(this + 0xff) = *(int *)(this + 0xff) / local_8;
  iVar3 = (**(code **)(**(int **)(this + 0x107) + 0x60))();
  if ((iVar3 == 0) || (-1 < *(int *)(iVar3 + 8))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    if (local_10 != 0) {
      *(undefined4 *)(this + 0x11b) = 0;
      *(int *)(this + 0x117) = *(int *)(this + 0x117) + *(int *)(this + 0xff);
    }
    if (local_c != 0) {
      *(undefined4 *)(this + 0x11f) = 0;
      *(int *)(this + 0x117) = *(int *)(this + 0x117) + *(int *)(this + 0xff);
      if (local_10 != 0) {
        *(int *)(this + 0x11b) = *(int *)(this + 0x11b) + *(int *)(this + 0xff);
      }
    }
    if (local_14 != 0) {
      iVar3 = *(int *)(this + 0xff);
      *(undefined4 *)(this + 0x123) = 0;
      *(int *)(this + 0x117) = *(int *)(this + 0x117) + iVar3;
      if (local_c != 0) {
        *(int *)(this + 0x11f) = *(int *)(this + 0x11f) + iVar3;
      }
      if (local_10 != 0) {
        *(int *)(this + 0x11b) = *(int *)(this + 0x11b) + iVar3;
      }
    }
    goto LAB_605fdce8;
  }
  if (local_10 != 0) {
    *(undefined4 *)(this + 0x11b) = *(undefined4 *)(this + 0xff);
  }
  if (local_c != 0) {
    iVar3 = *(int *)(this + 0xff);
    if (local_10 != 0) {
      iVar3 = iVar3 << 1;
    }
    *(int *)(this + 0x11f) = iVar3;
  }
  if (local_14 == 0) goto LAB_605fdce8;
  if (local_c == 0) {
LAB_605fdc66:
    if (local_10 == 0) {
      iVar3 = *(int *)(this + 0xff);
    }
    else {
LAB_605fdc72:
      iVar3 = *(int *)(this + 0xff) << 1;
    }
  }
  else {
    if (local_10 == 0) {
      if (local_c == 0) goto LAB_605fdc66;
      goto LAB_605fdc72;
    }
    iVar3 = *(int *)(this + 0xff) * 3;
  }
  *(int *)(this + 0x123) = iVar3;
LAB_605fdce8:
  (**(code **)(**(int **)(this + 0x107) + 0x34))(0,0,this + 0xd8);
  CPNColor::~CPNColor(local_34);
  return;
}


