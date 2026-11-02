/* Module: sfmarket2.dll
   Function: FUN_0040f180
   Address: 0040f180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0040f180(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EDI;
  int *piVar3;
  int **ppiVar4;
  int *piVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0x4f120f;
  iVar2 = FUN_0040f340((int)&local_4,4,param_1);
  if (iVar2 < 0) {
    return;
  }
  iVar2 = FUN_0040f2c0(piVar1,*(wchar_t **)((int)this + 4));
  if (iVar2 < 0) {
    return;
  }
  iVar2 = FUN_0040f2c0(piVar1,*(wchar_t **)((int)this + 8));
  if (iVar2 < 0) {
    return;
  }
  ppiVar4 = &param_1;
  param_1 = (int *)0x0;
  local_8 = 4;
  piVar3 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,&local_8,4);
  if (iVar2 < 0) {
    return;
  }
  if (unaff_EBX == 4) {
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,(int)this + 0x10,unaff_EDI,&stack0xfffffff4);
    if (iVar2 < 0) {
      return;
    }
    if (unaff_EDI != 0) goto LAB_0040f227;
  }
  else {
LAB_0040f227:
    iVar2 = -0x7ffb1fc7;
  }
  if (iVar2 < 0) {
    return;
  }
  iVar2 = FUN_0040f340((int)this + 0xc,4,piVar1);
  if (iVar2 < 0) {
    return;
  }
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,&stack0xffffffe8,4,&stack0xfffffff4);
  if (iVar2 < 0) {
    return;
  }
  if (ppiVar4 == (int **)0x4) {
    piVar5 = (int *)0x0;
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,(int)this + 0x14,piVar3,&stack0xffffffe4);
    if (iVar2 < 0) {
      return;
    }
    if (piVar3 == piVar5) goto LAB_0040f28f;
  }
  iVar2 = -0x7ffb1fc7;
LAB_0040f28f:
  if ((-1 < iVar2) && (iVar2 = FUN_0040f340((int)this + 0x18,4,piVar1), -1 < iVar2)) {
    FUN_0040f340((int)this + 0x1c,4,piVar1);
  }
  return;
}


