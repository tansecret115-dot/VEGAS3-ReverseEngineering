/* Module: oggplug.dll
   Function: FUN_004387a0
   Address: 004387a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004387a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_00440730(param_1);
    iVar1 = 0;
    if (0 < *(int *)param_1[4]) {
      do {
        (**(code **)(*(int *)(param_1[10] + iVar1 * 4) + 0x14))
                  (*(undefined4 *)(param_1[5] + iVar1 * 4));
        (**(code **)(*(int *)(param_1[0xb] + iVar1 * 4) + 0x14))
                  (*(undefined4 *)(param_1[6] + iVar1 * 4));
        (**(code **)(*(int *)(param_1[0xc] + iVar1 * 4) + 0x14))
                  (*(undefined4 *)(param_1[7] + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)param_1[4]);
    }
    puVar2 = (undefined4 *)param_1[9];
    if ((puVar2 != (undefined4 *)0x0) && (puVar2 != (undefined4 *)param_1[8])) {
      FUN_00433960(puVar2);
      free((void *)param_1[9]);
    }
    if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
      FUN_00433960((undefined4 *)param_1[8]);
      free((void *)param_1[8]);
    }
    free((void *)param_1[10]);
    free((void *)param_1[0xb]);
    free((void *)param_1[0xc]);
    free((void *)param_1[5]);
    free((void *)param_1[6]);
    free((void *)param_1[7]);
    puVar2 = param_1;
    for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    free(param_1);
  }
  return;
}


