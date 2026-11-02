/* Module: rmme3260.dll
   Function: FUN_6622aa50
   Address: 6622aa50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6622aa50(void *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)((int)param_1 + 0x194) == 0) {
    *(undefined4 *)((int)param_1 + 0x194) = 1;
  }
  switch(*(undefined4 *)((int)param_1 + 0x194)) {
  case 1:
    iVar5 = (**(code **)(**(int **)((int)param_1 + 0x184) + 0xc))
                      (*(int **)((int)param_1 + 0x184),6,*(undefined4 *)((int)param_1 + 0x188));
    break;
  case 2:
    piVar4 = (int *)((int)param_1 + 0xc0);
    uVar1 = (**(code **)(*(int *)((int)param_1 + 0xc0) + 0xc))();
    goto LAB_6622abf8;
  case 3:
    piVar4 = (int *)((int)param_1 + 0xda);
    (**(code **)(*(int *)((int)param_1 + 0xda) + 0x14))(*(undefined4 *)((int)param_1 + 0x18c));
    goto LAB_6622abf1;
  case 4:
    piVar4 = *(int **)(*(int *)((int)param_1 + 0x16) + (uint)*(ushort *)((int)param_1 + 0x198) * 4);
    if (piVar4 == (int *)0x0) {
      iVar5 = -0x7fffbffb;
      break;
    }
    (**(code **)(*piVar4 + 0x14))(*(undefined4 *)((int)param_1 + 0x18c));
    goto LAB_6622ab3a;
  case 5:
    piVar4 = *(int **)(*(int *)((int)param_1 + 0x3c) + (uint)*(ushort *)((int)param_1 + 0x19a) * 4);
    if (piVar4 == (int *)0x0) {
      iVar5 = -0x7fffbffb;
      break;
    }
    FUN_66218020(piVar4,0);
    (**(code **)(*piVar4 + 0x14))(*(undefined4 *)((int)param_1 + 0x18c));
LAB_6622ab3a:
    uVar1 = (**(code **)(*piVar4 + 0xc))();
    pvVar2 = operator_new(uVar1);
    if (pvVar2 == (void *)0x0) {
      iVar5 = -0x7ff8fff2;
    }
    else {
      (**(code **)(*piVar4 + 0x18))(pvVar2,uVar1);
      puVar3 = operator_new(0x28);
      if (puVar3 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_662522d0(puVar3);
      }
      (**(code **)(*piVar4 + 4))(piVar4);
      if (*(int *)((int)param_1 + 0x178) == 0) {
        (**(code **)(*piVar4 + 0x10))(piVar4,pvVar2,uVar1);
        *(uint *)((int)param_1 + 0x18c) = *(int *)((int)param_1 + 0x18c) + uVar1;
        iVar5 = (**(code **)(**(int **)((int)param_1 + 0x184) + 0x1c))
                          (*(int **)((int)param_1 + 0x184),piVar4);
      }
      else {
        iVar5 = FUN_6622b240(param_1,pvVar2,uVar1);
      }
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      operator_delete(pvVar2);
    }
    break;
  case 6:
    piVar4 = (int *)((int)param_1 + 0x114);
LAB_6622abf1:
    uVar1 = (**(code **)(*piVar4 + 0xc))();
LAB_6622abf8:
    pvVar2 = operator_new(uVar1);
    if (pvVar2 == (void *)0x0) {
      iVar5 = -0x7ff8fff2;
    }
    else {
      (**(code **)(*piVar4 + 0x18))(pvVar2,uVar1);
      puVar3 = operator_new(0x28);
      if (puVar3 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_662522d0(puVar3);
      }
      (**(code **)(*piVar4 + 4))(piVar4);
      (**(code **)(*piVar4 + 0x10))(piVar4,pvVar2,uVar1);
      *(uint *)((int)param_1 + 0x18c) = *(int *)((int)param_1 + 0x18c) + uVar1;
      iVar5 = (**(code **)(**(int **)((int)param_1 + 0x184) + 0x1c))
                        (*(int **)((int)param_1 + 0x184),piVar4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      operator_delete(pvVar2);
    }
    break;
  case 7:
    *(undefined4 *)((int)param_1 + 0x13e) = 1;
    *(undefined4 *)((int)param_1 + 400) = 0;
    *(undefined4 *)((int)param_1 + 0x194) = 0;
    FUN_66217370(*(void **)((int)param_1 + 0x180),0);
    break;
  default:
    iVar5 = -0x7ffbfff7;
  }
  if (iVar5 < 0) {
    FUN_66217370(*(void **)((int)param_1 + 0x180),iVar5);
  }
  return 0;
}


