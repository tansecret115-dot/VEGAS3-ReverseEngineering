/* Module: vfplugs.dll
   Function: FUN_00413e20
   Address: 00413e20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00413e20(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_EBX;
  int *unaff_EBP;
  int *unaff_EDI;
  int *piVar4;
  undefined4 *puVar5;
  int **ppiVar6;
  
  piVar1 = param_2;
  if (param_2 == (int *)0x0) {
    piVar1 = *(int **)((int)this + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 4) = 0;
    }
    piVar1 = *(int **)((int)this + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 8) = 0;
    }
    piVar1 = *(int **)this;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)this = 0;
    }
    return 0;
  }
  param_2 = (int *)0x0;
  if (param_1 == 0) {
    ppiVar6 = &param_2;
    puVar5 = &DAT_004866a0;
    iVar2 = (**(code **)*piVar1)(piVar1,&DAT_004866a0);
    if (-1 < iVar2) goto LAB_00413eb2;
    iVar2 = (**(code **)*piVar1)(piVar1,&DAT_00488310,&stack0xfffffff0);
    if (iVar2 < 0) goto LAB_00413f3c;
    piVar4 = (int *)0x0;
    iVar2 = (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,puVar5,0,0,0,&DAT_004866a0,&stack0xfffffff0);
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  else {
    ppiVar6 = &param_2;
    iVar2 = (**(code **)*piVar1)(piVar1,&DAT_00488330);
  }
  if (iVar2 < 0) {
LAB_00413f3c:
    if (iVar2 != -0x7fffbffe) {
      return iVar2;
    }
    return -0x7ff8ffa9;
  }
LAB_00413eb2:
  piVar4 = *(int **)((int)this + 4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *(undefined4 *)((int)this + 4) = 0;
  }
  piVar4 = *(int **)((int)this + 8);
  puVar5 = (undefined4 *)((int)this + 8);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *puVar5 = 0;
  }
  piVar4 = *(int **)this;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *(undefined4 *)this = 0;
  }
  *(void **)((int)this + 4) = this;
  (**(code **)(*piVar1 + 4))(piVar1);
  *(int **)this = piVar1;
  iVar3 = (**(code **)*unaff_EBX)(unaff_EBX,&DAT_00486620,puVar5);
  if (-1 < iVar3) {
    piVar1 = (int *)((int)this + 0xc);
    (**(code **)(*(int *)*puVar5 + 0xc))((int *)*puVar5,piVar1);
    *piVar1 = *piVar1 + -1;
  }
  if (ppiVar6 == (int **)0x0) {
    (**(code **)(*unaff_EDI + 0x18))(unaff_EDI,0,(int)this + 0x10);
  }
  return iVar2;
}


