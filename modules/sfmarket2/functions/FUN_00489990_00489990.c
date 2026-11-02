/* Module: sfmarket2.dll
   Function: FUN_00489990
   Address: 00489990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00489990(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x18);
  *(undefined4 **)((int)param_1 + 0x1cd) = puVar1;
  *puVar1 = &DAT_00489f80;
  switch(*(undefined4 *)((int)param_1 + 0x61)) {
  case 1:
    if (*(int *)((int)param_1 + 0x5d) != 1) {
LAB_004899f8:
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    break;
  case 2:
  case 3:
    if (*(int *)((int)param_1 + 0x5d) != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    break;
  case 4:
  case 5:
    if (*(int *)((int)param_1 + 0x5d) != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    break;
  default:
    if (*(int *)((int)param_1 + 0x5d) < 1) goto LAB_004899f8;
  }
  iVar2 = *(int *)((int)param_1 + 0x65);
  if (iVar2 == 1) {
    *(undefined4 *)((int)param_1 + 0x96) = 1;
    if ((*(int *)((int)param_1 + 0x61) == 1) || (*(int *)((int)param_1 + 0x61) == 3)) {
      puVar1[1] = &LAB_00489de0;
      iVar2 = 1;
      if (1 < *(int *)((int)param_1 + 0x5d)) {
        iVar3 = 0x51;
        do {
          iVar2 = iVar2 + 1;
          *(undefined1 *)(*(int *)((int)param_1 + 0xf6) + 0x30 + iVar3) = 0;
          iVar3 = iVar3 + 0x51;
        } while (iVar2 < *(int *)((int)param_1 + 0x5d));
      }
      goto LAB_00489b11;
    }
  }
  else {
    if (iVar2 == 2) {
      *(undefined4 *)((int)param_1 + 0x96) = 3;
      if (*(int *)((int)param_1 + 0x61) == 3) {
        puVar1[1] = &LAB_00489c10;
        FUN_00489b50((int)param_1);
      }
      else if (*(int *)((int)param_1 + 0x61) == 2) {
        puVar1[1] = FUN_00489d50;
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x19;
        (**(code **)*param_1)(param_1);
      }
      goto LAB_00489b11;
    }
    if (iVar2 == 4) {
      *(undefined4 *)((int)param_1 + 0x96) = 4;
      if (*(int *)((int)param_1 + 0x61) == 5) {
        puVar1[1] = &LAB_00489e10;
        FUN_00489b50((int)param_1);
      }
      else if (*(int *)((int)param_1 + 0x61) == 4) {
        puVar1[1] = FUN_00489d50;
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x19;
        (**(code **)*param_1)(param_1);
      }
      goto LAB_00489b11;
    }
    if (iVar2 == *(int *)((int)param_1 + 0x61)) {
      *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x5d);
      puVar1[1] = FUN_00489d50;
      goto LAB_00489b11;
    }
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x19;
  (**(code **)*param_1)(param_1);
LAB_00489b11:
  if (*(char *)((int)param_1 + 0x81) == '\0') {
    *(undefined4 *)((int)param_1 + 0x9a) = *(undefined4 *)((int)param_1 + 0x96);
    return;
  }
  *(undefined4 *)((int)param_1 + 0x9a) = 1;
  return;
}


