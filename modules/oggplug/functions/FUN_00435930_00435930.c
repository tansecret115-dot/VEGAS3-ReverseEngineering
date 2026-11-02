/* Module: oggplug.dll
   Function: FUN_00435930
   Address: 00435930
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00435930(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    free(*(void **)param_1[5]);
    free(*(void **)(param_1[5] + 4));
    free(*(void **)(param_1[5] + 0xc));
    free(*(void **)(param_1[5] + 0x10));
    puVar2 = (undefined4 *)param_1[5];
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    free((void *)param_1[5]);
  }
  if ((void *)param_1[3] != (void *)0x0) {
    free((void *)param_1[3]);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    free((void *)param_1[4]);
  }
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


