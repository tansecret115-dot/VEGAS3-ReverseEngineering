/* Module: vidcap30.exe
   Function: FUN_0056ae40
   Address: 0056ae40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0056ae40(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
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
  iVar3 = 0;
  *(undefined4 *)((int)param_1 + 0x105) = 1;
  *(undefined4 *)((int)param_1 + 0x109) = 1;
  if (0 < *(int *)((int)param_1 + 0x71)) {
    piVar4 = (int *)(*(int *)((int)param_1 + 0x79) + 0xc);
    do {
      if (((piVar4[-1] < 1) || (4 < piVar4[-1])) || ((*piVar4 < 1 || (4 < *piVar4)))) {
        *(undefined4 *)(*param_1 + 0x14) = 0x10;
        (**(code **)*param_1)(param_1);
      }
      iVar1 = *(int *)((int)param_1 + 0x105);
      if (*(int *)((int)param_1 + 0x105) <= piVar4[-1]) {
        iVar1 = piVar4[-1];
      }
      *(int *)((int)param_1 + 0x105) = iVar1;
      iVar1 = *(int *)((int)param_1 + 0x109);
      if (*(int *)((int)param_1 + 0x109) <= *piVar4) {
        iVar1 = *piVar4;
      }
      *(int *)((int)param_1 + 0x109) = iVar1;
      iVar3 = iVar3 + 1;
      piVar4 = (int *)((int)piVar4 + 0x51);
    } while (iVar3 < *(int *)((int)param_1 + 0x71));
  }
  iVar3 = 0;
  if (0 < *(int *)((int)param_1 + 0x71)) {
    puVar5 = (undefined4 *)(*(int *)((int)param_1 + 0x79) + 0x24);
    do {
      puVar5[-8] = iVar3;
      *puVar5 = 8;
      uVar2 = FUN_0055eb60(*(int *)((int)param_1 + 0x55) * puVar5[-7],
                           *(int *)((int)param_1 + 0x105) << 3);
      puVar5[-2] = uVar2;
      uVar2 = FUN_0055eb60(puVar5[-6] * *(int *)((int)param_1 + 0x59),
                           *(int *)((int)param_1 + 0x109) << 3);
      puVar5[-1] = uVar2;
      uVar2 = FUN_0055eb60(*(int *)((int)param_1 + 0x55) * puVar5[-7],
                           *(undefined4 *)((int)param_1 + 0x105));
      puVar5[1] = uVar2;
      uVar2 = FUN_0055eb60(puVar5[-6] * *(int *)((int)param_1 + 0x59),
                           *(undefined4 *)((int)param_1 + 0x109));
      puVar5[2] = uVar2;
      *(undefined1 *)(puVar5 + 3) = 1;
      iVar3 = iVar3 + 1;
      puVar5 = (undefined4 *)((int)puVar5 + 0x51);
    } while (iVar3 < *(int *)((int)param_1 + 0x71));
  }
  uVar2 = FUN_0055eb60(*(undefined4 *)((int)param_1 + 0x59),*(int *)((int)param_1 + 0x109) << 3);
  *(undefined4 *)((int)param_1 + 0x10d) = uVar2;
  return;
}


