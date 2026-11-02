/* Module: rmme3260.dll
   Function: FUN_66269500
   Address: 66269500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66269500(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (1 < *(int *)(param_1 + 8)) {
    return 0x80040009;
  }
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xc));
  }
  puVar1 = operator_new(param_3);
  *(undefined4 **)(param_1 + 0xc) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(uint *)(param_1 + 0x10) = param_3;
  return 0;
}


