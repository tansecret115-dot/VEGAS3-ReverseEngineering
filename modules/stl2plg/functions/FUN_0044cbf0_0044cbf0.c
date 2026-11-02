/* Module: stl2plg.dll
   Function: FUN_0044cbf0
   Address: 0044cbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044cbf0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
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
  iVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x139) = 1;
  *(undefined4 *)((int)param_1 + 0x13d) = 1;
  if (0 < *(int *)((int)param_1 + 0x5d)) {
    piVar3 = (int *)(*(int *)((int)param_1 + 0xf6) + 0xc);
    do {
      if ((((piVar3[-1] < 1) || (4 < piVar3[-1])) || (*piVar3 < 1)) || (4 < *piVar3)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x10;
        (**(code **)*param_1)(param_1);
      }
      iVar1 = *(int *)((int)param_1 + 0x139);
      if (*(int *)((int)param_1 + 0x139) <= piVar3[-1]) {
        iVar1 = piVar3[-1];
      }
      *(int *)((int)param_1 + 0x139) = iVar1;
      iVar1 = *(int *)((int)param_1 + 0x13d);
      if (*(int *)((int)param_1 + 0x13d) <= *piVar3) {
        iVar1 = *piVar3;
      }
      *(int *)((int)param_1 + 0x13d) = iVar1;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)((int)piVar3 + 0x51);
    } while (iVar2 < *(int *)((int)param_1 + 0x5d));
  }
  iVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x141) = 8;
  if (0 < *(int *)((int)param_1 + 0x5d)) {
    piVar3 = (int *)(*(int *)((int)param_1 + 0xf6) + 0x1c);
    do {
      piVar3[2] = 8;
      iVar1 = FUN_00455b20(*(int *)((int)param_1 + 0x55) * piVar3[-5],
                           *(int *)((int)param_1 + 0x139) << 3);
      *piVar3 = iVar1;
      iVar1 = FUN_00455b20(piVar3[-4] * *(int *)((int)param_1 + 0x59),
                           *(int *)((int)param_1 + 0x13d) << 3);
      piVar3[1] = iVar1;
      iVar1 = FUN_00455b20(*(int *)((int)param_1 + 0x55) * piVar3[-5],*(int *)((int)param_1 + 0x139)
                          );
      piVar3[3] = iVar1;
      iVar1 = FUN_00455b20(piVar3[-4] * *(int *)((int)param_1 + 0x59),*(int *)((int)param_1 + 0x13d)
                          );
      piVar3[4] = iVar1;
      *(undefined1 *)(piVar3 + 5) = 1;
      *(undefined4 *)((int)piVar3 + 0x2d) = 0;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)((int)piVar3 + 0x51);
    } while (iVar2 < *(int *)((int)param_1 + 0x5d));
  }
  iVar2 = FUN_00455b20(*(int *)((int)param_1 + 0x59),*(int *)((int)param_1 + 0x13d) << 3);
  *(int *)((int)param_1 + 0x145) = iVar2;
  if ((*(int *)((int)param_1 + 0x5d) <= *(int *)((int)param_1 + 0x14d)) &&
     (*(char *)((int)param_1 + 0xfa) == '\0')) {
    *(undefined1 *)(*(int *)((int)param_1 + 0x1b9) + 0x10) = 0;
    return;
  }
  *(undefined1 *)(*(int *)((int)param_1 + 0x1b9) + 0x10) = 1;
  return;
}


