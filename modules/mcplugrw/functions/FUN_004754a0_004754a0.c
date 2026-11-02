/* Module: mcplugrw.dll
   Function: FUN_004754a0
   Address: 004754a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004754a0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)((int)param_1 + 0xd) != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  *(undefined1 *)((int)param_1 + 0xf9) = 0;
  *(undefined4 *)((int)param_1 + 0x75) = param_2;
  *(undefined1 *)((int)param_1 + 0xff) = 0;
  switch(param_2) {
  case 0:
    iVar3 = *(int *)((int)param_1 + 0x5d);
    *(int *)((int)param_1 + 0x71) = iVar3;
    if ((iVar3 < 1) || (10 < iVar3)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x18;
      *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x71);
      *(undefined4 *)(*param_1 + 0x1c) = 10;
      (**(code **)*param_1)(param_1);
    }
    iVar3 = 0;
    if (0 < *(int *)((int)param_1 + 0x71)) {
      iVar4 = 0;
      do {
        piVar2 = (int *)(iVar4 + *(int *)((int)param_1 + 0x79));
        iVar4 = iVar4 + 0x51;
        *piVar2 = iVar3;
        piVar2[2] = 1;
        piVar2[3] = 1;
        piVar2[4] = 0;
        piVar2[5] = 0;
        piVar2[6] = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)param_1 + 0x71));
      return;
    }
    break;
  case 1:
    *(undefined1 *)((int)param_1 + 0xf9) = 1;
    *(undefined4 *)((int)param_1 + 0x71) = 1;
    puVar1 = *(undefined4 **)((int)param_1 + 0x79);
    *puVar1 = 1;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    return;
  case 2:
    puVar1 = *(undefined4 **)((int)param_1 + 0x79);
    *(undefined1 *)((int)param_1 + 0xff) = 1;
    *(undefined4 *)((int)param_1 + 0x71) = 3;
    *puVar1 = 0x52;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar3 = *(int *)((int)param_1 + 0x79);
    *(undefined4 *)(iVar3 + 0x51) = 0x47;
    *(undefined4 *)(iVar3 + 0x59) = 1;
    *(undefined4 *)(iVar3 + 0x5d) = 1;
    *(undefined4 *)(iVar3 + 0x61) = 0;
    *(undefined4 *)(iVar3 + 0x65) = 0;
    *(undefined4 *)(iVar3 + 0x69) = 0;
    iVar3 = *(int *)((int)param_1 + 0x79);
    *(undefined4 *)(iVar3 + 0xa2) = 0x42;
    *(undefined4 *)(iVar3 + 0xaa) = 1;
    *(undefined4 *)(iVar3 + 0xae) = 1;
    *(undefined4 *)(iVar3 + 0xb2) = 0;
    *(undefined4 *)(iVar3 + 0xb6) = 0;
    *(undefined4 *)(iVar3 + 0xba) = 0;
    return;
  case 3:
    puVar1 = *(undefined4 **)((int)param_1 + 0x79);
    *(undefined1 *)((int)param_1 + 0xf9) = 1;
    *(undefined4 *)((int)param_1 + 0x71) = 3;
    *puVar1 = 1;
    puVar1[2] = 2;
    puVar1[3] = 2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar3 = *(int *)((int)param_1 + 0x79);
    *(undefined4 *)(iVar3 + 0x51) = 2;
    *(undefined4 *)(iVar3 + 0x59) = 1;
    *(undefined4 *)(iVar3 + 0x5d) = 1;
    *(undefined4 *)(iVar3 + 0x61) = 1;
    *(undefined4 *)(iVar3 + 0x65) = 1;
    *(undefined4 *)(iVar3 + 0x69) = 1;
    iVar3 = *(int *)((int)param_1 + 0x79);
    *(undefined4 *)(iVar3 + 0xa2) = 3;
    *(undefined4 *)(iVar3 + 0xaa) = 1;
    *(undefined4 *)(iVar3 + 0xae) = 1;
    *(undefined4 *)(iVar3 + 0xb2) = 1;
    *(undefined4 *)(iVar3 + 0xb6) = 1;
    *(undefined4 *)(iVar3 + 0xba) = 1;
    return;
  case 4:
    puVar1 = *(undefined4 **)((int)param_1 + 0x79);
    *(undefined1 *)((int)param_1 + 0xff) = 1;
    *(undefined4 *)((int)param_1 + 0x71) = 4;
    *puVar1 = 0x43;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar3 = *(int *)((int)param_1 + 0x79);
    *(undefined4 *)(iVar3 + 0x51) = 0x4d;
    *(undefined4 *)(iVar3 + 0x59) = 1;
    *(undefined4 *)(iVar3 + 0x5d) = 1;
    *(undefined4 *)(iVar3 + 0x61) = 0;
    *(undefined4 *)(iVar3 + 0x65) = 0;
    *(undefined4 *)(iVar3 + 0x69) = 0;
    iVar3 = *(int *)((int)param_1 + 0x79);
    *(undefined4 *)(iVar3 + 0xa2) = 0x59;
    *(undefined4 *)(iVar3 + 0xaa) = 1;
    *(undefined4 *)(iVar3 + 0xae) = 1;
    *(undefined4 *)(iVar3 + 0xb2) = 0;
    *(undefined4 *)(iVar3 + 0xb6) = 0;
    *(undefined4 *)(iVar3 + 0xba) = 0;
    iVar3 = *(int *)((int)param_1 + 0x79);
    *(undefined4 *)(iVar3 + 0xf3) = 0x4b;
    *(undefined4 *)(iVar3 + 0xfb) = 1;
    *(undefined4 *)(iVar3 + 0xff) = 1;
    *(undefined4 *)(iVar3 + 0x103) = 0;
    *(undefined4 *)(iVar3 + 0x107) = 0;
    *(undefined4 *)(iVar3 + 0x10b) = 0;
    return;
  case 5:
    puVar1 = *(undefined4 **)((int)param_1 + 0x79);
    *(undefined1 *)((int)param_1 + 0xff) = 1;
    *(undefined4 *)((int)param_1 + 0x71) = 4;
    *puVar1 = 1;
    puVar1[2] = 2;
    puVar1[3] = 2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar3 = *(int *)((int)param_1 + 0x79);
    *(undefined4 *)(iVar3 + 0x51) = 2;
    *(undefined4 *)(iVar3 + 0x59) = 1;
    *(undefined4 *)(iVar3 + 0x5d) = 1;
    *(undefined4 *)(iVar3 + 0x61) = 1;
    *(undefined4 *)(iVar3 + 0x65) = 1;
    *(undefined4 *)(iVar3 + 0x69) = 1;
    iVar3 = *(int *)((int)param_1 + 0x79);
    *(undefined4 *)(iVar3 + 0xa2) = 3;
    *(undefined4 *)(iVar3 + 0xaa) = 1;
    *(undefined4 *)(iVar3 + 0xae) = 1;
    *(undefined4 *)(iVar3 + 0xb2) = 1;
    *(undefined4 *)(iVar3 + 0xb6) = 1;
    *(undefined4 *)(iVar3 + 0xba) = 1;
    iVar3 = *(int *)((int)param_1 + 0x79);
    *(undefined4 *)(iVar3 + 0xf3) = 4;
    *(undefined4 *)(iVar3 + 0xfb) = 2;
    *(undefined4 *)(iVar3 + 0xff) = 2;
    *(undefined4 *)(iVar3 + 0x103) = 0;
    *(undefined4 *)(iVar3 + 0x107) = 0;
    *(undefined4 *)(iVar3 + 0x10b) = 0;
    return;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 8;
    (**(code **)*param_1)(param_1);
  }
  return;
}


