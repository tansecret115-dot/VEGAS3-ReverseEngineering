/* Module: rmbe3260.dll
   Function: FUN_66042320
   Address: 66042320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66042320(void *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)((int)this + 0x10c);
  *(int *)((int)this + 0x134) = *(int *)((int)this + 0x134) + *(int *)((int)this + 0x13c);
  uVar4 = *(uint *)((int)this + 0x120);
  iVar6 = *(int *)((int)this + 0x138) + *(int *)((int)this + 0x13c);
  *(uint *)((int)this + 0x10c) = param_1;
  *(int *)((int)this + 0x138) = iVar6;
  if (param_1 < uVar4) {
    uVar4 = (param_1 - uVar4) - 1;
  }
  else {
    uVar4 = param_1 - uVar4;
  }
  if (499 < uVar4) {
    iVar5 = (int)(((ulonglong)param_1 % 2000) / 500);
    *(int *)((int)this + iVar5 * 4 + 0x124) = iVar6;
    uVar4 = *(uint *)((int)this + 0x10c);
    uVar2 = *(uint *)((int)this + 0x120);
    *(undefined4 *)((int)this + 0x138) = 0;
    if (uVar4 < uVar2) {
      iVar6 = (uVar4 - uVar2) + -1;
    }
    else {
      iVar6 = uVar4 - uVar2;
    }
    *(int *)((int)this + iVar5 * 4 + 0x110) = iVar6;
    *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x10c);
    if (*(uint *)((int)this + 0x10c) < 2000) {
      FUN_66042430((int)this);
      return;
    }
    iVar5 = 0;
    iVar6 = (int)this + 0x124;
    iVar7 = 4;
    do {
      piVar1 = (int *)(iVar6 + -0x14);
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + *piVar1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if (0 < iVar5) {
      uVar3 = ftol();
      *(undefined4 *)((int)this + 0x140) = uVar3;
    }
  }
  return;
}


