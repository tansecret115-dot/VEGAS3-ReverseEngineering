/* Module: vegas30k.dll
   Function: FUN_0115bf70
   Address: 0115bf70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115bf70(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if ((0xffdc < *(int *)((int)param_1 + 0x59)) || (0xffdc < *(int *)((int)param_1 + 0x55))) {
    *(undefined4 *)(*param_1 + 0x14) = 0x28;
    *(undefined4 *)(*param_1 + 0x18) = 0xffdc;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)((int)param_1 + 0xf2) != 8) {
    *(undefined4 *)(*param_1 + 0x14) = 0xd;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xf2);
    (**(code **)*param_1)(param_1);
  }
  if (10 < *(int *)((int)param_1 + 0x5d)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x18;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x5d);
    *(undefined4 *)(*param_1 + 0x1c) = 10;
    (**(code **)*param_1)(param_1);
  }
  iVar3 = 0;
  *(undefined4 *)((int)param_1 + 0x139) = 1;
  *(undefined4 *)((int)param_1 + 0x13d) = 1;
  if (0 < *(int *)((int)param_1 + 0x5d)) {
    piVar4 = (int *)(*(int *)((int)param_1 + 0xf6) + 0xc);
    do {
      if ((((piVar4[-1] < 1) || (4 < piVar4[-1])) || (*piVar4 < 1)) || (4 < *piVar4)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x10;
        (**(code **)*param_1)(param_1);
      }
      iVar1 = *(int *)((int)param_1 + 0x139);
      if (*(int *)((int)param_1 + 0x139) <= piVar4[-1]) {
        iVar1 = piVar4[-1];
      }
      *(int *)((int)param_1 + 0x139) = iVar1;
      iVar1 = *(int *)((int)param_1 + 0x13d);
      if (*(int *)((int)param_1 + 0x13d) <= *piVar4) {
        iVar1 = *piVar4;
      }
      *(int *)((int)param_1 + 0x13d) = iVar1;
      iVar3 = iVar3 + 1;
      piVar4 = (int *)((int)piVar4 + 0x51);
    } while (iVar3 < *(int *)((int)param_1 + 0x5d));
  }
  iVar3 = 0;
  *(undefined4 *)((int)param_1 + 0x141) = 8;
  if (0 < *(int *)((int)param_1 + 0x5d)) {
    puVar5 = (undefined4 *)(*(int *)((int)param_1 + 0xf6) + 0x1c);
    do {
      puVar5[2] = 8;
      uVar2 = FUN_01167860(*(int *)((int)param_1 + 0x55) * puVar5[-5],
                           *(int *)((int)param_1 + 0x139) << 3);
      *puVar5 = uVar2;
      uVar2 = FUN_01167860(puVar5[-4] * *(int *)((int)param_1 + 0x59),
                           *(int *)((int)param_1 + 0x13d) << 3);
      puVar5[1] = uVar2;
      uVar2 = FUN_01167860(*(int *)((int)param_1 + 0x55) * puVar5[-5],
                           *(undefined4 *)((int)param_1 + 0x139));
      puVar5[3] = uVar2;
      uVar2 = FUN_01167860(puVar5[-4] * *(int *)((int)param_1 + 0x59),
                           *(undefined4 *)((int)param_1 + 0x13d));
      puVar5[4] = uVar2;
      *(undefined1 *)(puVar5 + 5) = 1;
      *(undefined4 *)((int)puVar5 + 0x2d) = 0;
      iVar3 = iVar3 + 1;
      puVar5 = (undefined4 *)((int)puVar5 + 0x51);
    } while (iVar3 < *(int *)((int)param_1 + 0x5d));
  }
  uVar2 = FUN_01167860(*(undefined4 *)((int)param_1 + 0x59),*(int *)((int)param_1 + 0x13d) << 3);
  *(undefined4 *)((int)param_1 + 0x145) = uVar2;
  if ((*(int *)((int)param_1 + 0x5d) <= *(int *)((int)param_1 + 0x14d)) &&
     (*(char *)((int)param_1 + 0xfa) == '\0')) {
    *(undefined1 *)(*(int *)((int)param_1 + 0x1b9) + 0x10) = 0;
    return;
  }
  *(undefined1 *)(*(int *)((int)param_1 + 0x1b9) + 0x10) = 1;
  return;
}


