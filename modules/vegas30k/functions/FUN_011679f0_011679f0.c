/* Module: vegas30k.dll
   Function: FUN_011679f0
   Address: 011679f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011679f0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  piVar3 = param_1;
  if (*(int *)((int)param_1 + 0xd) != 0xca) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  iVar9 = *(int *)((int)param_1 + 0x69);
  uVar2 = *(uint *)((int)param_1 + 0x6d);
  if ((uint)(iVar9 * 8) < uVar2 || iVar9 * 8 - uVar2 == 0) {
    uVar5 = FUN_01167860(*(undefined4 *)((int)param_1 + 0x55),8);
    *(undefined4 *)((int)param_1 + 0x8e) = uVar5;
    uVar5 = FUN_01167860(*(undefined4 *)((int)param_1 + 0x59),8);
    *(undefined4 *)((int)param_1 + 0x92) = uVar5;
    *(undefined4 *)((int)param_1 + 0x141) = 1;
  }
  else if ((uint)(iVar9 * 4) < uVar2 || iVar9 * 4 - uVar2 == 0) {
    uVar5 = FUN_01167860(*(undefined4 *)((int)param_1 + 0x55),4);
    *(undefined4 *)((int)param_1 + 0x8e) = uVar5;
    uVar5 = FUN_01167860(*(undefined4 *)((int)param_1 + 0x59),4);
    *(undefined4 *)((int)param_1 + 0x92) = uVar5;
    *(undefined4 *)((int)param_1 + 0x141) = 2;
  }
  else if (uVar2 < (uint)(iVar9 * 2)) {
    *(undefined4 *)((int)param_1 + 0x8e) = *(undefined4 *)((int)param_1 + 0x55);
    *(undefined4 *)((int)param_1 + 0x92) = *(undefined4 *)((int)param_1 + 0x59);
    *(undefined4 *)((int)param_1 + 0x141) = 8;
  }
  else {
    uVar5 = FUN_01167860(*(undefined4 *)((int)param_1 + 0x55),2);
    *(undefined4 *)((int)param_1 + 0x8e) = uVar5;
    uVar5 = FUN_01167860(*(undefined4 *)((int)param_1 + 0x59),2);
    *(undefined4 *)((int)param_1 + 0x92) = uVar5;
    *(undefined4 *)((int)param_1 + 0x141) = 4;
  }
  piVar7 = (int *)((int)param_1 + 0x5d);
  piVar1 = (int *)((int)param_1 + 0xf6);
  param_1 = (int *)0x0;
  if (0 < *piVar7) {
    piVar7 = (int *)(*piVar1 + 0xc);
    do {
      iVar9 = *(int *)((int)piVar3 + 0x141);
      iVar6 = iVar9;
      if (iVar9 < 8) {
        iVar11 = *(int *)((int)piVar3 + 0x139) * iVar9;
        do {
          iVar8 = piVar7[-1] * iVar6 * 2;
          if ((iVar8 - iVar11 != 0 && iVar11 <= iVar8) ||
             (iVar8 = *(int *)((int)piVar3 + 0x13d) * iVar9, iVar10 = *piVar7 * iVar6 * 2,
             iVar10 - iVar8 != 0 && iVar8 <= iVar10)) break;
          iVar6 = iVar6 * 2;
        } while (iVar6 < 8);
      }
      piVar7[6] = iVar6;
      param_1 = (int *)((int)param_1 + 1);
      piVar7 = (int *)((int)piVar7 + 0x51);
    } while ((int)param_1 < *(int *)((int)piVar3 + 0x5d));
  }
  iVar9 = 0;
  if (0 < *(int *)((int)piVar3 + 0x5d)) {
    piVar7 = (int *)(*(int *)((int)piVar3 + 0xf6) + 0x24);
    do {
      iVar6 = FUN_01167860(piVar7[-7] * *piVar7 * *(int *)((int)piVar3 + 0x55),
                           *(int *)((int)piVar3 + 0x139) << 3);
      piVar7[1] = iVar6;
      iVar6 = FUN_01167860(piVar7[-6] * *(int *)((int)piVar3 + 0x59) * *piVar7,
                           *(int *)((int)piVar3 + 0x13d) << 3);
      piVar7[2] = iVar6;
      iVar9 = iVar9 + 1;
      piVar7 = (int *)((int)piVar7 + 0x51);
    } while (iVar9 < *(int *)((int)piVar3 + 0x5d));
  }
  switch(*(undefined4 *)((int)piVar3 + 0x65)) {
  case 1:
    *(undefined4 *)((int)piVar3 + 0x96) = 1;
    break;
  case 2:
  case 3:
    *(undefined4 *)((int)piVar3 + 0x96) = 3;
    break;
  case 4:
  case 5:
    *(undefined4 *)((int)piVar3 + 0x96) = 4;
    break;
  default:
    *(undefined4 *)((int)piVar3 + 0x96) = *(undefined4 *)((int)piVar3 + 0x5d);
  }
  uVar5 = 1;
  if (*(char *)((int)piVar3 + 0x81) == '\0') {
    uVar5 = *(undefined4 *)((int)piVar3 + 0x96);
  }
  *(undefined4 *)((int)piVar3 + 0x9a) = uVar5;
  cVar4 = FUN_01167c40(piVar3);
  if (cVar4 == '\0') {
    *(undefined4 *)((int)piVar3 + 0x9e) = 1;
    return;
  }
  *(undefined4 *)((int)piVar3 + 0x9e) = *(undefined4 *)((int)piVar3 + 0x13d);
  return;
}


