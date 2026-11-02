/* Module: sfmarket2.dll
   Function: FUN_0044e910
   Address: 0044e910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044e910(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)param_1 + 0xd);
  if ((iVar1 == 0x65) || (iVar1 == 0x66)) {
    if ((uint)param_1[0x40] < *(uint *)((int)param_1 + 0x59)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x42;
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(*(int *)((int)param_1 + 0x169) + 8))(param_1);
  }
  else if (iVar1 != 0x67) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  puVar2 = *(undefined4 **)((int)param_1 + 0x169);
  cVar3 = *(char *)((int)puVar2 + 0xd);
  while (cVar3 == '\0') {
    (*(code *)*puVar2)(param_1);
    uVar4 = 0;
    if (*(int *)((int)param_1 + 0x10d) != 0) {
      do {
        if (param_1[2] != 0) {
          *(uint *)(param_1[2] + 4) = uVar4;
          *(undefined4 *)(param_1[2] + 8) = *(undefined4 *)((int)param_1 + 0x10d);
          (**(code **)param_1[2])(param_1);
        }
        cVar3 = (**(code **)(*(int *)((int)param_1 + 0x175) + 4))(param_1,0);
        if (cVar3 == '\0') {
          *(undefined4 *)(*param_1 + 0x14) = 0x16;
          (**(code **)*param_1)(param_1);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)((int)param_1 + 0x10d));
    }
    (**(code **)(*(int *)((int)param_1 + 0x169) + 8))(param_1);
    puVar2 = *(undefined4 **)((int)param_1 + 0x169);
    cVar3 = *(char *)((int)puVar2 + 0xd);
  }
  (**(code **)(*(int *)((int)param_1 + 0x179) + 0x10))(param_1);
  (**(code **)(*(int *)((int)param_1 + 0x51) + 0x10))(param_1);
  FUN_0045bc00((int)param_1);
  return;
}


