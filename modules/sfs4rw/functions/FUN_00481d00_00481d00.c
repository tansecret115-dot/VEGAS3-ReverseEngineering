/* Module: sfs4rw.dll
   Function: FUN_00481d00
   Address: 00481d00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481d00(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x18);
  *(undefined4 **)((int)param_1 + 0x1cd) = puVar1;
  *puVar1 = &DAT_004822f0;
  switch(*(undefined4 *)((int)param_1 + 0x61)) {
  case 1:
    if (*(int *)((int)param_1 + 0x5d) != 1) {
LAB_00481d68:
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
    if (*(int *)((int)param_1 + 0x5d) < 1) goto LAB_00481d68;
  }
  iVar2 = *(int *)((int)param_1 + 0x65);
  if (iVar2 == 1) {
    *(undefined4 *)((int)param_1 + 0x96) = 1;
    if ((*(int *)((int)param_1 + 0x61) == 1) || (*(int *)((int)param_1 + 0x61) == 3)) {
      puVar1[1] = &LAB_00482150;
      iVar2 = 1;
      if (1 < *(int *)((int)param_1 + 0x5d)) {
        iVar3 = 0x51;
        do {
          iVar2 = iVar2 + 1;
          *(undefined1 *)(*(int *)((int)param_1 + 0xf6) + 0x30 + iVar3) = 0;
          iVar3 = iVar3 + 0x51;
        } while (iVar2 < *(int *)((int)param_1 + 0x5d));
      }
      goto LAB_00481e81;
    }
  }
  else {
    if (iVar2 == 2) {
      *(undefined4 *)((int)param_1 + 0x96) = 3;
      if (*(int *)((int)param_1 + 0x61) == 3) {
        puVar1[1] = &LAB_00481f80;
        FUN_00481ec0((int)param_1);
      }
      else if (*(int *)((int)param_1 + 0x61) == 2) {
        puVar1[1] = FUN_004820c0;
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x19;
        (**(code **)*param_1)(param_1);
      }
      goto LAB_00481e81;
    }
    if (iVar2 == 4) {
      *(undefined4 *)((int)param_1 + 0x96) = 4;
      if (*(int *)((int)param_1 + 0x61) == 5) {
        puVar1[1] = &LAB_00482180;
        FUN_00481ec0((int)param_1);
      }
      else if (*(int *)((int)param_1 + 0x61) == 4) {
        puVar1[1] = FUN_004820c0;
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x19;
        (**(code **)*param_1)(param_1);
      }
      goto LAB_00481e81;
    }
    if (iVar2 == *(int *)((int)param_1 + 0x61)) {
      *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x5d);
      puVar1[1] = FUN_004820c0;
      goto LAB_00481e81;
    }
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x19;
  (**(code **)*param_1)(param_1);
LAB_00481e81:
  if (*(char *)((int)param_1 + 0x81) == '\0') {
    *(undefined4 *)((int)param_1 + 0x9a) = *(undefined4 *)((int)param_1 + 0x96);
    return;
  }
  *(undefined4 *)((int)param_1 + 0x9a) = 1;
  return;
}


