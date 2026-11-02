/* Module: encn3260.dll
   Function: FUN_664952a0
   Address: 664952a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664952a0(void *this,undefined4 *param_1)

{
  short sVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  
  if (*(int *)((int)this + 0x42) != 0) {
    if (*(int *)((int)this + 0x4a) == 0) {
      *(undefined4 *)((int)this + 0x4a) = 1;
      (**(code **)(**(int **)((int)this + 4) + 0x3c))(*(undefined2 *)((int)this + 8));
    }
    return 0x40080;
  }
  if (((((*(int *)((int)this + 0x26) == 0) || (*(short *)((int)this + 0x78) != 0)) ||
       (*(int *)((int)this + 0x2a) != 0)) || (*(int *)((int)this + 0x3a) != 0)) ||
     ((*(int *)((int)this + 0x4e) != 0 && (*(int *)((int)this + 0x36) == 0)))) {
    return 0x40042;
  }
  piVar5 = (int *)FUN_664c04d0(*(undefined4 **)((int)this + 10));
  piVar5 = (int *)*piVar5;
  puVar6 = (undefined4 *)FUN_664c04e0(*(undefined4 **)((int)this + 10));
  piVar2 = (int *)*puVar6;
  if (piVar5[0xc] != 0) {
    return 0x40042;
  }
  uVar7 = (**(code **)(*piVar5 + 0x1c))(piVar5);
  uVar8 = (**(code **)(*piVar2 + 0x1c))(piVar2);
  if ((uVar8 < uVar7) && (0x2fffffff < uVar7 - uVar8)) {
    uVar8 = (uVar8 - uVar7) - 1;
  }
  else {
    uVar8 = uVar8 - uVar7;
  }
  FUN_66495e80(this,(int)this + 0x1c6);
  iVar13 = *(int *)((int)this + 0x1d6) - piVar5[10];
  for (iVar12 = *(int *)((int)this + 0x1da) - piVar5[0xb]; iVar12 < 0; iVar12 = iVar12 + 1000000) {
    iVar13 = iVar13 + -1;
  }
  uVar7 = *(uint *)((int)this + 0x5a);
  if ((((uVar7 != 0) && (*(int *)((int)this + 4) != 0)) &&
      (piVar2 = *(int **)(*(int *)((int)this + 4) + 8), piVar2 != (int *)0x0)) &&
     (iVar9 = (**(code **)(*piVar2 + 0xc))(piVar2), iVar9 == 0)) {
    uVar7 = uVar7 + 2000;
  }
  if (((*(int *)((int)this + 0x36) == 0) && (*(uint *)(*(int *)((int)this + 10) + 0xc) < 500)) &&
     ((piVar5[7] == 0 && (uVar8 < uVar7)))) {
    iVar9 = ftol();
    iVar10 = ftol();
    if ((iVar13 < iVar9) || ((iVar13 == iVar9 && (iVar12 < iVar10)))) goto LAB_6649543d;
  }
  sVar3 = (**(code **)(*piVar5 + 0x28))();
  sVar1 = *(short *)((int)this + 0x6a);
  sVar4 = (**(code **)(*piVar5 + 0x18))();
  if (sVar4 == (short)(sVar3 + sVar1)) {
    if (*(int *)((int)this + 0x22) != 2) {
      *(undefined4 *)((int)this + 0x22) = 2;
    }
    uVar11 = FUN_664c0540(*(int **)((int)this + 10));
    *param_1 = uVar11;
    if ((*(short *)((int)this + 0x6e) == *(short *)((int)this + 0x70)) &&
       (*(undefined4 *)((int)this + 0x3a) = 1, *(int *)((int)this + 0x36) != 0)) {
      *(undefined4 *)((int)this + 0x42) = 1;
    }
    FUN_66496530(this,(int *)*param_1);
    return 0;
  }
LAB_6649543d:
  *param_1 = 0;
  *(undefined4 *)((int)this + 0x22) = 1;
  return 0x40040;
}


