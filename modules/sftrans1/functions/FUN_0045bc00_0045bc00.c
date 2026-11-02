/* Module: sftrans1.dll
   Function: FUN_0045bc00
   Address: 0045bc00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0045bc00(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_EBX;
  int *unaff_EBP;
  int *unaff_EDI;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  piVar2 = param_3;
  if (param_3 == (int *)0x0) {
    piVar2 = (int *)param_1[1];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1[1] = 0;
    }
    piVar2 = (int *)param_1[2];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1[2] = 0;
    }
    piVar2 = (int *)*param_1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *param_1 = 0;
    }
    return 0;
  }
  param_3 = (int *)0x0;
  if (param_2 == 0) {
    puVar7 = &param_3;
    puVar6 = &DAT_005547c0;
    iVar3 = (**(code **)*piVar2)(piVar2,&DAT_005547c0);
    if (-1 < iVar3) goto LAB_0045bc92;
    iVar3 = (**(code **)*piVar2)(piVar2,&DAT_0055d848,&stack0xfffffff0);
    if (iVar3 < 0) goto LAB_0045bd1c;
    piVar5 = (int *)0x0;
    iVar3 = (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,puVar6,0,0,0,&DAT_005547c0,&stack0xfffffff0);
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  else {
    puVar7 = &param_3;
    iVar3 = (**(code **)*piVar2)(piVar2,&DAT_0055d868);
  }
  if (iVar3 < 0) {
LAB_0045bd1c:
    if (iVar3 != -0x7fffbffe) {
      return iVar3;
    }
    return -0x7ff8ffa9;
  }
LAB_0045bc92:
  piVar5 = (int *)param_1[1];
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
    param_1[1] = 0;
  }
  piVar1 = (int *)param_1[2];
  piVar5 = param_1 + 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar5 = 0;
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  param_1[1] = (int)param_1;
  (**(code **)(*piVar2 + 4))(piVar2);
  *param_1 = (int)piVar2;
  iVar4 = (**(code **)*unaff_EBX)(unaff_EBX,&DAT_00554740,piVar5);
  if (-1 < iVar4) {
    piVar2 = param_1 + 3;
    (**(code **)(*(int *)*piVar5 + 0xc))((int *)*piVar5,piVar2);
    *piVar2 = *piVar2 + -1;
  }
  if (puVar7 == (undefined4 *)0x0) {
    (**(code **)(*unaff_EDI + 0x18))(unaff_EDI,0,param_1 + 4);
  }
  return iVar3;
}


