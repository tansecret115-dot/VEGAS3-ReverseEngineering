/* Module: vegas30k.dll
   Function: FUN_0119fe80
   Address: 0119fe80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0119fe80(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = calloc_exref;
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004005;
  }
  *(undefined4 *)(param_1 + 0x644) = 0;
  puVar6 = *(undefined4 **)(param_1 + 0x640);
  do {
    (**(code **)(*(int *)*puVar6 + 8))((int *)*puVar6);
    piVar1 = (int *)*param_3;
    *puVar6 = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    puVar6[3] = param_3[1];
    free((void *)puVar6[4]);
    uVar3 = (*pcVar5)(1,*(int *)(param_1 + 0x8c) << 2);
    puVar6[4] = uVar3;
    uVar4 = 0;
    if (*(int *)(param_1 + 0x8c) != 0) {
      do {
        uVar4 = uVar4 + 1;
        *(undefined4 *)(puVar6[4] + -4 + uVar4 * 4) = 0xffffffff;
      } while (uVar4 < *(uint *)(param_1 + 0x8c));
    }
    uVar4 = 0;
    if (param_3[1] != 0) {
      do {
        piVar1 = *(int **)(param_3[3] + uVar4 * 4);
        uVar4 = uVar4 + 1;
        *(int *)(puVar6[4] + *piVar1 * 4) = piVar1[1];
        pcVar5 = calloc_exref;
      } while (uVar4 < (uint)param_3[1]);
    }
    param_3 = (undefined4 *)param_3[4];
    *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
    puVar7 = (undefined4 *)puVar6[0xd];
    if (param_3 == (undefined4 *)0x0) {
      if (puVar7 != (undefined4 *)0x0) {
        piVar1 = (int *)puVar6[0xd];
        puVar6[0xd] = 0;
        while (piVar1 != (int *)0x0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 == (int *)0x0) {
            piVar2 = (int *)piVar1[1];
            if (piVar2 != (int *)0x0) {
              (**(code **)(*piVar2 + 8))(piVar2);
            }
          }
          else {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          if ((void *)piVar1[4] != (void *)0x0) {
            free((void *)piVar1[4]);
          }
          piVar2 = (int *)piVar1[0xd];
          free(piVar1);
          piVar1 = piVar2;
        }
        return 0;
      }
    }
    else if (puVar7 == (undefined4 *)0x0) {
      uVar3 = (*pcVar5)(1,0x38);
      puVar6[0xd] = uVar3;
      puVar7 = puVar6;
    }
    puVar6 = puVar7;
  } while (param_3 != (undefined4 *)0x0);
  return 0;
}


