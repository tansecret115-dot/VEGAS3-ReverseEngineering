/* Module: mcplugrw.dll
   Function: FUN_004881b0
   Address: 004881b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004881b0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xc);
  *(undefined4 **)((int)param_1 + 0x17d) = puVar2;
  *puVar2 = &DAT_00488920;
  switch(*(undefined4 *)((int)param_1 + 0x61)) {
  case 1:
    if (*(int *)((int)param_1 + 0x5d) != 1) {
LAB_0048821c:
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
    if (*(int *)((int)param_1 + 0x5d) < 1) goto LAB_0048821c;
  }
  switch(*(int *)((int)param_1 + 0x75)) {
  case 1:
    if (*(int *)((int)param_1 + 0x71) != 1) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    iVar1 = *(int *)((int)param_1 + 0x61);
    if (iVar1 == 1) {
      puVar2[1] = FUN_00488810;
      return;
    }
    if (iVar1 == 2) {
      *puVar2 = &LAB_004883e0;
      puVar2[1] = FUN_004885f0;
      return;
    }
    if (iVar1 == 3) {
      puVar2[1] = FUN_00488810;
      return;
    }
    goto LAB_0048832c;
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
      *puVar2 = &LAB_004883e0;
      puVar2[1] = &LAB_004884c0;
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
LAB_0048832c:
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
    return;
  case 5:
    if (*(int *)((int)param_1 + 0x71) != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (*(int *)((int)param_1 + 0x61) == 4) {
      *puVar2 = &LAB_004883e0;
      puVar2[1] = FUN_004886a0;
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
  puVar2[1] = &LAB_00488880;
  return;
}


