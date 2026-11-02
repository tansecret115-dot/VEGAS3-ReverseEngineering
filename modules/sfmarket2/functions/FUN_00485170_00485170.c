/* Module: sfmarket2.dll
   Function: FUN_00485170
   Address: 00485170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00485170(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  piVar2 = param_1;
  if (*(int *)((int)param_1 + 0xd) != 0xca) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  iVar3 = *(int *)((int)param_1 + 0x69);
  uVar6 = *(uint *)((int)param_1 + 0x6d);
  if ((uint)(iVar3 * 8) < uVar6 || iVar3 * 8 - uVar6 == 0) {
    iVar3 = FUN_00484fe0(*(int *)((int)param_1 + 0x55),8);
    *(int *)((int)param_1 + 0x8e) = iVar3;
    iVar3 = FUN_00484fe0(*(int *)((int)param_1 + 0x59),8);
    *(int *)((int)param_1 + 0x92) = iVar3;
    *(undefined4 *)((int)param_1 + 0x141) = 1;
  }
  else if ((uint)(iVar3 * 4) < uVar6 || iVar3 * 4 - uVar6 == 0) {
    iVar3 = FUN_00484fe0(*(int *)((int)param_1 + 0x55),4);
    *(int *)((int)param_1 + 0x8e) = iVar3;
    iVar3 = FUN_00484fe0(*(int *)((int)param_1 + 0x59),4);
    *(int *)((int)param_1 + 0x92) = iVar3;
    *(undefined4 *)((int)param_1 + 0x141) = 2;
  }
  else if (uVar6 < (uint)(iVar3 * 2)) {
    *(undefined4 *)((int)param_1 + 0x8e) = *(undefined4 *)((int)param_1 + 0x55);
    *(undefined4 *)((int)param_1 + 0x92) = *(undefined4 *)((int)param_1 + 0x59);
    *(undefined4 *)((int)param_1 + 0x141) = 8;
  }
  else {
    iVar3 = FUN_00484fe0(*(int *)((int)param_1 + 0x55),2);
    *(int *)((int)param_1 + 0x8e) = iVar3;
    iVar3 = FUN_00484fe0(*(int *)((int)param_1 + 0x59),2);
    *(int *)((int)param_1 + 0x92) = iVar3;
    *(undefined4 *)((int)param_1 + 0x141) = 4;
  }
  piVar7 = (int *)((int)param_1 + 0x5d);
  piVar1 = (int *)((int)param_1 + 0xf6);
  param_1 = (int *)0x0;
  if (0 < *piVar7) {
    piVar7 = (int *)(*piVar1 + 0xc);
    do {
      iVar3 = *(int *)((int)piVar2 + 0x141);
      iVar4 = iVar3;
      if (iVar3 < 8) {
        iVar10 = *(int *)((int)piVar2 + 0x139) * iVar3;
        do {
          iVar8 = piVar7[-1] * iVar4 * 2;
          if ((iVar8 - iVar10 != 0 && iVar10 <= iVar8) ||
             (iVar8 = *(int *)((int)piVar2 + 0x13d) * iVar3, iVar9 = *piVar7 * iVar4 * 2,
             iVar9 - iVar8 != 0 && iVar8 <= iVar9)) break;
          iVar4 = iVar4 * 2;
        } while (iVar4 < 8);
      }
      piVar7[6] = iVar4;
      param_1 = (int *)((int)param_1 + 1);
      piVar7 = (int *)((int)piVar7 + 0x51);
    } while ((int)param_1 < *(int *)((int)piVar2 + 0x5d));
  }
  iVar3 = 0;
  if (0 < *(int *)((int)piVar2 + 0x5d)) {
    piVar7 = (int *)(*(int *)((int)piVar2 + 0xf6) + 0x24);
    do {
      iVar4 = FUN_00484fe0(piVar7[-7] * *piVar7 * *(int *)((int)piVar2 + 0x55),
                           *(int *)((int)piVar2 + 0x139) << 3);
      piVar7[1] = iVar4;
      iVar4 = FUN_00484fe0(piVar7[-6] * *(int *)((int)piVar2 + 0x59) * *piVar7,
                           *(int *)((int)piVar2 + 0x13d) << 3);
      piVar7[2] = iVar4;
      iVar3 = iVar3 + 1;
      piVar7 = (int *)((int)piVar7 + 0x51);
    } while (iVar3 < *(int *)((int)piVar2 + 0x5d));
  }
  switch(*(undefined4 *)((int)piVar2 + 0x65)) {
  case 1:
    *(undefined4 *)((int)piVar2 + 0x96) = 1;
    break;
  case 2:
  case 3:
    *(undefined4 *)((int)piVar2 + 0x96) = 3;
    break;
  case 4:
  case 5:
    *(undefined4 *)((int)piVar2 + 0x96) = 4;
    break;
  default:
    *(undefined4 *)((int)piVar2 + 0x96) = *(undefined4 *)((int)piVar2 + 0x5d);
  }
  uVar5 = 1;
  if (*(char *)((int)piVar2 + 0x81) == '\0') {
    uVar5 = *(undefined4 *)((int)piVar2 + 0x96);
  }
  *(undefined4 *)((int)piVar2 + 0x9a) = uVar5;
  uVar6 = FUN_004853c0((int)piVar2);
  if ((char)uVar6 == '\0') {
    *(undefined4 *)((int)piVar2 + 0x9e) = 1;
    return;
  }
  *(undefined4 *)((int)piVar2 + 0x9e) = *(undefined4 *)((int)piVar2 + 0x13d);
  return;
}


