/* Module: mcplugrw.dll
   Function: FUN_0047e150
   Address: 0047e150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047e150(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char unaff_BL;
  int iVar4;
  int *piVar5;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x4d);
  *(undefined4 **)((int)param_1 + 0x1ad) = puVar1;
  *puVar1 = &LAB_0047e2c0;
  if (unaff_BL != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)(param_1);
  }
  iVar2 = *(int *)((int)param_1 + 0x141);
  if (*(char *)(*(int *)((int)param_1 + 0x1c9) + 8) != '\0') {
    if (iVar2 < 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2e;
      (**(code **)*param_1)(param_1);
    }
    FUN_0047e210((int)param_1);
    iVar2 = *(int *)((int)param_1 + 0x141) + 2;
  }
  iVar4 = 0;
  if (0 < *(int *)((int)param_1 + 0x5d)) {
    piVar5 = (int *)(*(int *)((int)param_1 + 0xf6) + 0x24);
    puVar1 = puVar1 + 2;
    do {
      uVar3 = (**(code **)(param_1[1] + 8))
                        (param_1,1,piVar5[-2] * *piVar5,
                         ((piVar5[-6] * *piVar5) / *(int *)((int)param_1 + 0x141)) * iVar2);
      *puVar1 = uVar3;
      iVar4 = iVar4 + 1;
      puVar1 = puVar1 + 1;
      piVar5 = (int *)((int)piVar5 + 0x51);
    } while (iVar4 < *(int *)((int)param_1 + 0x5d));
  }
  return;
}


