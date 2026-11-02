/* Module: sfpagepeel.dll
   Function: FUN_0040d630
   Address: 0040d630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0040d630(void *this,undefined4 param_1,uint param_2,HWND param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_EBX;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  double local_120;
  double local_118;
  CHAR aCStack_10c [264];
  
  uVar6 = param_2 & 0xffff;
  uVar5 = param_2 >> 0x10;
  if ((uVar6 < 0x9e34) || (40999 < uVar6)) {
    if (0x7f00 < uVar6) {
      if (uVar6 == 41000) {
        FUN_00423e80(1,*(HWND *)((int)this + 0x30),0x3e9,0xf,(uchar *)0x0);
        return 0;
      }
      if (uVar6 != 0xa029) {
        return 0;
      }
      FUN_00401d40(*(HWND *)((int)this + 0x30));
      return 0;
    }
    if (uVar6 == 0x7f00) {
      FUN_0040d0f0((int)this);
      *param_4 = 1;
      return 0;
    }
  }
  else {
    puVar1 = (undefined4 *)**(int **)((int)this + 8);
    local_118 = (double)((ulonglong)local_118 & 0xffffffff00000000);
    puVar4 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_0046fa40,&local_118);
      puVar4 = local_118._0_4_;
    }
    iVar3 = (**(code **)*puVar4)(puVar4,&DAT_0046fab0,&local_120);
    if (-1 < iVar3) {
      (**(code **)(*local_120._0_4_ + 0x14))(local_120._0_4_,uVar6 - 0x9e34);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (local_118._0_4_ != (int *)0x0) {
      (**(code **)(*local_118._0_4_ + 8))(local_118._0_4_);
    }
    uVar6 = 0;
  }
  switch(uVar6) {
  case 0x5de:
    if (uVar5 != 0x200) {
      return 0;
    }
    local_120 = *(double *)((int)this + 0x68) * _DAT_00470928;
    bVar2 = false;
    local_118 = local_120;
    iVar3 = GetWindowTextA(param_3,aCStack_10c,0x104);
    if (iVar3 == 0) {
      fVar7 = (float10)local_118;
    }
    else {
      fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
      if ((float10)_DAT_0046fdc8 <= fVar7) {
        fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
        if (fVar7 <= (float10)_DAT_00470948) {
          fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
        }
        else {
          fVar7 = (float10)_DAT_00470948;
        }
      }
      else {
        fVar7 = (float10)_DAT_0046fdc8;
      }
      if (ABS(fVar7 - (float10)local_120) <= (float10)_DAT_00470950) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    *(double *)((int)this + 0x68) = (double)(fVar7 * (float10)_DAT_00470940);
    if (bVar2) {
      (**(code **)(*(int *)this + 0x2c))(this);
      return 0;
    }
    goto LAB_0040da79;
  case 0x5df:
    if (uVar5 != 0x200) {
      return 0;
    }
    local_120 = *(double *)((int)this + 0x70);
    *(double *)((int)this + 0x70) = local_120;
    iVar3 = GetWindowTextA(param_3,aCStack_10c,0x104);
    if (iVar3 == 0) goto LAB_0040da79;
    fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
    if ((float10)_DAT_0046fdc8 <= fVar7) {
      fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
      if (fVar7 <= (float10)_DAT_00470bf0) {
        fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
        *(double *)((int)this + 0x70) = (double)fVar7;
        fVar7 = fVar7 - (float10)local_120;
      }
      else {
        fVar7 = (float10)_DAT_00470bf0;
        *(double *)((int)this + 0x70) = _DAT_00470bf0;
        fVar7 = fVar7 - (float10)local_120;
      }
    }
    else {
      fVar7 = (float10)_DAT_0046fdc8;
      *(double *)((int)this + 0x70) = _DAT_0046fdc8;
      fVar7 = fVar7 - (float10)local_120;
    }
    break;
  case 0x5e0:
    if (uVar5 != 0x200) {
      return 0;
    }
    local_120 = *(double *)((int)this + 0x78);
    *(double *)((int)this + 0x78) = local_120;
    iVar3 = GetWindowTextA(param_3,aCStack_10c,0x104);
    if (iVar3 == 0) goto LAB_0040da79;
    fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
    if ((float10)_DAT_0046fdc8 <= fVar7) {
      fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
      if (fVar7 <= (float10)_DAT_0046fdc0) {
        fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
        *(double *)((int)this + 0x78) = (double)fVar7;
        fVar7 = fVar7 - (float10)local_120;
      }
      else {
        fVar7 = (float10)_DAT_0046fdc0;
        *(double *)((int)this + 0x78) = _DAT_0046fdc0;
        fVar7 = fVar7 - (float10)local_120;
      }
    }
    else {
      fVar7 = (float10)_DAT_0046fdc8;
      *(double *)((int)this + 0x78) = _DAT_0046fdc8;
      fVar7 = fVar7 - (float10)local_120;
    }
    break;
  case 0x5e1:
    if (uVar5 != 0x200) {
      return 0;
    }
    local_120 = *(double *)((int)this + 0x80);
    *(double *)((int)this + 0x80) = local_120;
    iVar3 = GetWindowTextA(param_3,aCStack_10c,0x104);
    if (iVar3 == 0) goto LAB_0040da79;
    fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
    if ((float10)_DAT_0046fdc8 <= fVar7) {
      fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
      if (fVar7 <= (float10)_DAT_0046fdc0) {
        fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
      }
      else {
        fVar7 = (float10)_DAT_0046fdc0;
      }
    }
    else {
      fVar7 = (float10)_DAT_0046fdc8;
    }
    *(double *)((int)this + 0x80) = (double)fVar7;
    fVar7 = fVar7 - (float10)local_120;
    break;
  case 0x5e2:
    if (uVar5 != 0x200) {
      return 0;
    }
    local_120 = *(double *)((int)this + 0x88);
    *(double *)((int)this + 0x88) = local_120;
    iVar3 = GetWindowTextA(param_3,aCStack_10c,0x104);
    if (iVar3 != 0) {
      fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
      if ((float10)_DAT_0046fdc8 <= fVar7) {
        fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
        if (fVar7 <= (float10)_DAT_0046fdc0) {
          fVar7 = FUN_0042cd40(aCStack_10c,(undefined4 *)0x0);
        }
        else {
          fVar7 = (float10)_DAT_0046fdc0;
        }
      }
      else {
        fVar7 = (float10)_DAT_0046fdc8;
      }
      *(double *)((int)this + 0x88) = (double)fVar7;
      if ((float10)_DAT_00470950 < ABS(fVar7 - (float10)local_120)) {
        (**(code **)(*(int *)this + 0x2c))(this);
        return 0;
      }
    }
    goto LAB_0040da79;
  case 0x5e3:
    SendMessageA(param_3,0x702,0,(int)this + 0x90);
    (**(code **)(*(int *)this + 0x2c))(this);
    return 0;
  default:
    return 0;
  }
  if ((float10)_DAT_00470950 < ABS(fVar7)) {
    (**(code **)(*(int *)this + 0x2c))(this);
    return 0;
  }
LAB_0040da79:
  FUN_0040d0f0((int)this);
  return 0;
}


