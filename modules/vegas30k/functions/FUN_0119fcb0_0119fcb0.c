/* Module: vegas30k.dll
   Function: FUN_0119fcb0
   Address: 0119fcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0119fcb0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = calloc_exref;
  if (param_3 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x8c) = param_2;
    puVar6 = (undefined4 *)0x0;
    do {
      if (puVar6 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(*pcVar5)(1,0x38);
      }
      else {
        puVar2 = (undefined4 *)(*pcVar5)(1,0x38);
        puVar6[0xd] = puVar2;
      }
      if (*(int *)(param_1 + 0x640) == 0) {
        *(undefined4 **)(param_1 + 0x640) = puVar2;
      }
      piVar1 = (int *)*param_3;
      *puVar2 = piVar1;
      (**(code **)(*piVar1 + 4))(piVar1);
      puVar2[1] = param_1;
      puVar2[2] = 0;
      puVar2[3] = param_3[1];
      uVar3 = (*pcVar5)(1,*(int *)(param_1 + 0x8c) << 2);
      puVar2[4] = uVar3;
      uVar4 = 0;
      if (*(int *)(param_1 + 0x8c) != 0) {
        do {
          uVar4 = uVar4 + 1;
          *(undefined4 *)(puVar2[4] + -4 + uVar4 * 4) = 0xffffffff;
        } while (uVar4 < *(uint *)(param_1 + 0x8c));
      }
      uVar4 = 0;
      if (param_3[1] != 0) {
        do {
          piVar1 = *(int **)(param_3[3] + uVar4 * 4);
          uVar4 = uVar4 + 1;
          *(int *)(puVar2[4] + *piVar1 * 4) = piVar1[1];
          pcVar5 = calloc_exref;
        } while (uVar4 < (uint)param_3[1]);
      }
      param_3 = (undefined4 *)param_3[4];
      *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
      puVar6 = puVar2;
    } while (param_3 != (undefined4 *)0x0);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(param_1 + 400) = 0;
    return 1;
  }
  return 0;
}


