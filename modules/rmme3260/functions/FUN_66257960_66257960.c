/* Module: rmme3260.dll
   Function: FUN_66257960
   Address: 66257960
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66257960(void *this,int *param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  
  piVar3 = *(int **)((int)this + 0x20);
  iVar5 = *(int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x40) = 0;
  iVar1 = (piVar3[1] - piVar3[3]) + iVar5;
  piVar7 = param_1;
  if (param_2 != 0) {
    if (param_2 != 1) {
      *(undefined4 *)((int)this + 0x40) = 0x16;
      return (int *)0x0;
    }
    piVar7 = (int *)((int)param_1 + iVar1);
  }
  if ((piVar3[1] <= (int)piVar7) && ((int)piVar7 <= (*(int *)((int)this + 0x18) + iVar1) - iVar5)) {
    *(int *)((int)this + 0x14) = (int)piVar7 + (iVar5 - iVar1);
    return piVar7;
  }
  if (piVar3[5] == 0) {
    pvVar2 = (void *)FUN_6625b760((void *)((int)this + 0x10),piVar3);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  else {
    piVar3[4] = *(int *)((int)this + 0x18);
  }
  piVar3 = FUN_6625b700((void *)((int)this + 0x10),(int)piVar7,(int *)&param_1);
  if (piVar3 == (int *)0x0) {
    piVar4 = operator_new(0x18);
    piVar3 = (int *)0x0;
    if (piVar4 != (int *)0x0) {
      *piVar4 = 0;
      piVar4[5] = 0;
      piVar3 = piVar4;
    }
    *piVar3 = *param_1;
    *param_1 = (int)piVar3;
    param_2 = *(uint *)((int)this + 0x4e);
    pvVar2 = operator_new(param_2);
    piVar3[3] = (int)pvVar2;
    piVar3[4] = param_2 + (int)pvVar2;
    piVar3[1] = (int)piVar7;
    piVar3[2] = (int)piVar7;
    *(void **)((int)this + 0x18) = pvVar2;
    *(void **)((int)this + 0x14) = pvVar2;
    piVar4 = piVar7;
  }
  else {
    *(int *)((int)this + 0x14) = (int)piVar7 + (piVar3[3] - piVar3[1]);
    *(int *)((int)this + 0x18) = piVar3[4];
    piVar4 = (int *)((piVar3[4] - piVar3[3]) + piVar3[1]);
  }
  *(int **)((int)this + 0x20) = piVar3;
  *(undefined4 *)((int)this + 0x24) = 0;
  iVar5 = (**(code **)(**(int **)((int)this + 4) + 0xc))(piVar4,0);
  if (iVar5 != -1) {
    return piVar7;
  }
  uVar6 = (**(code **)(**(int **)((int)this + 4) + 0x14))();
  *(undefined4 *)((int)this + 0x40) = uVar6;
  return (int *)0x0;
}


