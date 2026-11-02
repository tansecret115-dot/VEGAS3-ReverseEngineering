/* Module: rmme3260.dll
   Function: FUN_66207550
   Address: 66207550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66207550(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined2 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = param_2;
  puVar1[4] = param_3;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[3] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  FUN_6624ff10((void *)(param_1 + 0x38),*(int *)(param_1 + 0x3c),puVar1);
  return 0;
}


