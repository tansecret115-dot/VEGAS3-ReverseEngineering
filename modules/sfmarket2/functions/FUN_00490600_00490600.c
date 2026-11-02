/* Module: sfmarket2.dll
   Function: FUN_00490600
   Address: 00490600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00490600(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if ((((*(int *)((int)param_1 + 0x59) == 0) || (*(int *)((int)param_1 + 0x55) == 0)) ||
      (*(int *)((int)param_1 + 0x71) < 1)) || (*(int *)((int)param_1 + 0x5d) < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1f;
    (**(code **)*param_1)(param_1);
  }
  if ((0xffdc < *(int *)((int)param_1 + 0x59)) || (0xffdc < *(int *)((int)param_1 + 0x55))) {
    *(undefined4 *)(*param_1 + 0x14) = 0x28;
    *(undefined4 *)(*param_1 + 0x18) = 0xffdc;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)((int)param_1 + 0x6d) != 8) {
    *(undefined4 *)(*param_1 + 0x14) = 0xd;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x6d);
    (**(code **)*param_1)(param_1);
  }
  if (10 < *(int *)((int)param_1 + 0x71)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x18;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x71);
    *(undefined4 *)(*param_1 + 0x1c) = 10;
    (**(code **)*param_1)(param_1);
  }
  iVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x105) = 1;
  *(undefined4 *)((int)param_1 + 0x109) = 1;
  if (0 < *(int *)((int)param_1 + 0x71)) {
    piVar3 = (int *)(*(int *)((int)param_1 + 0x79) + 0xc);
    do {
      if (((piVar3[-1] < 1) || (4 < piVar3[-1])) || ((*piVar3 < 1 || (4 < *piVar3)))) {
        *(undefined4 *)(*param_1 + 0x14) = 0x10;
        (**(code **)*param_1)(param_1);
      }
      iVar1 = *(int *)((int)param_1 + 0x105);
      if (*(int *)((int)param_1 + 0x105) <= piVar3[-1]) {
        iVar1 = piVar3[-1];
      }
      *(int *)((int)param_1 + 0x105) = iVar1;
      iVar1 = *(int *)((int)param_1 + 0x109);
      if (*(int *)((int)param_1 + 0x109) <= *piVar3) {
        iVar1 = *piVar3;
      }
      *(int *)((int)param_1 + 0x109) = iVar1;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)((int)piVar3 + 0x51);
    } while (iVar2 < *(int *)((int)param_1 + 0x71));
  }
  iVar2 = 0;
  if (0 < *(int *)((int)param_1 + 0x71)) {
    puVar4 = (undefined4 *)(*(int *)((int)param_1 + 0x79) + 0x24);
    do {
      puVar4[-8] = iVar2;
      *puVar4 = 8;
      iVar1 = FUN_00484fe0(*(int *)((int)param_1 + 0x55) * puVar4[-7],
                           *(int *)((int)param_1 + 0x105) << 3);
      puVar4[-2] = iVar1;
      iVar1 = FUN_00484fe0(puVar4[-6] * *(int *)((int)param_1 + 0x59),
                           *(int *)((int)param_1 + 0x109) << 3);
      puVar4[-1] = iVar1;
      iVar1 = FUN_00484fe0(*(int *)((int)param_1 + 0x55) * puVar4[-7],*(int *)((int)param_1 + 0x105)
                          );
      puVar4[1] = iVar1;
      iVar1 = FUN_00484fe0(puVar4[-6] * *(int *)((int)param_1 + 0x59),*(int *)((int)param_1 + 0x109)
                          );
      puVar4[2] = iVar1;
      *(undefined1 *)(puVar4 + 3) = 1;
      iVar2 = iVar2 + 1;
      puVar4 = (undefined4 *)((int)puVar4 + 0x51);
    } while (iVar2 < *(int *)((int)param_1 + 0x71));
  }
  iVar2 = FUN_00484fe0(*(int *)((int)param_1 + 0x59),*(int *)((int)param_1 + 0x109) << 3);
  *(int *)((int)param_1 + 0x10d) = iVar2;
  return;
}


