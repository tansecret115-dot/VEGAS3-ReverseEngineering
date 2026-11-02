/* Module: vidcap30.exe
   Function: FUN_0056a600
   Address: 0056a600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0056a600(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xc);
  *(undefined4 **)((int)param_1 + 0x17d) = puVar2;
  *puVar2 = &DAT_0056ad70;
  switch(*(undefined4 *)((int)param_1 + 0x61)) {
  case 1:
    if (*(int *)((int)param_1 + 0x5d) != 1) {
LAB_0056a66c:
      *(undefined4 *)(*param_1 + 0x14) = 7;
      (**(code **)*param_1)(param_1);
    }
    break;
  case 2:
  case 3:
    if (*(int *)((int)param_1 + 0x5d) != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 7;
      (**(code **)*param_1)(param_1);
    }
    break;
  case 4:
  case 5:
    if (*(int *)((int)param_1 + 0x5d) != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 7;
      (**(code **)*param_1)(param_1);
    }
    break;
  default:
    if (*(int *)((int)param_1 + 0x5d) < 1) goto LAB_0056a66c;
  }
  switch(*(int *)((int)param_1 + 0x75)) {
  case 1:
    if (*(int *)((int)param_1 + 0x71) != 1) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    iVar1 = *(int *)((int)param_1 + 0x61);
    if (iVar1 == 1) {
      puVar2[1] = FUN_0056ac60;
      return;
    }
    if (iVar1 == 2) {
      *puVar2 = &LAB_0056a830;
      puVar2[1] = FUN_0056aa40;
      return;
    }
    if (iVar1 == 3) {
      puVar2[1] = FUN_0056ac60;
      return;
    }
    goto LAB_0056a77c;
  case 2:
    if (*(int *)((int)param_1 + 0x71) != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (*(int *)((int)param_1 + 0x61) != 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x19;
      (**(code **)*param_1)(param_1);
      return;
    }
    break;
  case 3:
    if (*(int *)((int)param_1 + 0x71) != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (*(int *)((int)param_1 + 0x61) == 2) {
      *puVar2 = &LAB_0056a830;
      puVar2[1] = &LAB_0056a910;
      return;
    }
    if (*(int *)((int)param_1 + 0x61) != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x19;
      (**(code **)*param_1)(param_1);
      return;
    }
    break;
  case 4:
    if (*(int *)((int)param_1 + 0x71) != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (*(int *)((int)param_1 + 0x61) == 4) break;
LAB_0056a77c:
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
    return;
  case 5:
    if (*(int *)((int)param_1 + 0x71) != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (*(int *)((int)param_1 + 0x61) == 4) {
      *puVar2 = &LAB_0056a830;
      puVar2[1] = FUN_0056aaf0;
      return;
    }
    if (*(int *)((int)param_1 + 0x61) != 5) {
      *(undefined4 *)(*param_1 + 0x14) = 0x19;
      (**(code **)*param_1)(param_1);
      return;
    }
    break;
  default:
    if ((*(int *)((int)param_1 + 0x75) != *(int *)((int)param_1 + 0x61)) ||
       (*(int *)((int)param_1 + 0x71) != *(int *)((int)param_1 + 0x5d))) {
      *(undefined4 *)(*param_1 + 0x14) = 0x19;
      (**(code **)*param_1)(param_1);
    }
  }
  puVar2[1] = &LAB_0056acd0;
  return;
}


