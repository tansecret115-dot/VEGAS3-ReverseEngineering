/* Module: sfmarket2.dll
   Function: FUN_0048a590
   Address: 0048a590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048a590(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x26);
  *(undefined4 **)((int)param_1 + 0x1d1) = puVar1;
  *puVar1 = &LAB_0048a760;
  puVar1[3] = &LAB_0048b9a0;
  *(undefined4 *)((int)puVar1 + 0x1d) = 0;
  *(undefined4 *)((int)puVar1 + 0x22) = 0;
  if (*(int *)((int)param_1 + 0x96) != 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2e;
    (**(code **)*param_1)(param_1);
  }
  uVar2 = (**(code **)param_1[1])(param_1,1,0x80);
  puVar1[6] = uVar2;
  iVar3 = 0;
  do {
    uVar2 = (**(code **)(param_1[1] + 4))(param_1,1,0x1000);
    iVar3 = iVar3 + 4;
    *(undefined4 *)(puVar1[6] + -4 + iVar3) = uVar2;
  } while (iVar3 < 0x80);
  *(undefined1 *)(puVar1 + 7) = 1;
  if (*(char *)((int)param_1 + 0x8d) == '\0') {
    puVar1[4] = 0;
  }
  else {
    iVar3 = *(int *)((int)param_1 + 0x87);
    if (iVar3 < 8) {
      *(undefined4 *)(*param_1 + 0x14) = 0x37;
      *(undefined4 *)(*param_1 + 0x18) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    uVar2 = (**(code **)(param_1[1] + 8))(param_1,1,iVar3,3);
    puVar1[4] = uVar2;
    puVar1[5] = iVar3;
  }
  if (*(int *)((int)param_1 + 0x82) != 0) {
    *(undefined4 *)((int)param_1 + 0x82) = 2;
  }
  if (*(int *)((int)param_1 + 0x82) == 2) {
    uVar2 = (**(code **)(param_1[1] + 4))(param_1,1,(*(int *)((int)param_1 + 0x8e) + 2) * 6);
    *(undefined4 *)((int)puVar1 + 0x1d) = uVar2;
    FUN_0048a6c0((int)param_1);
  }
  return;
}


