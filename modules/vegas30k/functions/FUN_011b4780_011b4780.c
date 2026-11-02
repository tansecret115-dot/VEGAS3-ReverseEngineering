/* Module: vegas30k.dll
   Function: FUN_011b4780
   Address: 011b4780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011b4780(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x250) = param_2;
  if (*(void **)(param_1 + 0x254) != (void *)0x0) {
    free(*(void **)(param_1 + 0x254));
  }
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  if ((param_3 != (undefined4 *)0x0) && (param_4 != 0)) {
    puVar1 = calloc(1,param_4);
    *(undefined4 **)(param_1 + 0x254) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_3;
      param_3 = param_3 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(uint *)(param_1 + 600) = param_4;
  }
  return 0;
}


