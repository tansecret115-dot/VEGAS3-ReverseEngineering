/* Module: rmbe3260.dll
   Function: FUN_66017c00
   Address: 66017c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_66017c00(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x22);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 10) = 0;
    puVar1[3] = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
    *(undefined4 *)((int)puVar1 + 0x12) = 0;
    *(undefined2 *)((int)puVar1 + 0x16) = 0;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 7) = 0;
    *(undefined4 *)((int)puVar1 + 0x1e) = 0;
    FUN_6605cf30((void *)(param_1 + 0x38),*(int *)(param_1 + 0x3c),puVar1);
  }
  return puVar1;
}


