/* Module: vegas30.exe
   Function: FUN_004d2fd0
   Address: 004d2fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004d2fd0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = *(undefined4 **)(param_2 + 0x69c);
  if ((puVar1[0x14] == *(int *)(param_2 + 4)) && (puVar1[0x15] != 0)) {
    return 1;
  }
  if ((code *)*puVar1 != (code *)0x0) {
    (*(code *)*puVar1)(param_2);
  }
  if (*(int *)(param_2 + 4) == 2) {
    pvVar2 = calloc(1,0x4d4);
    puVar1[0x15] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      *(undefined4 *)(param_2 + 4) = 0;
      return 0x8007000e;
    }
    puVar1[0x14] = *(undefined4 *)(param_2 + 4);
    FUN_004d28e0(param_1,param_2,param_3);
  }
  else if (*(int *)(param_2 + 4) == 3) {
    pvVar2 = calloc(1,0x210);
    puVar1[0x15] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      *(undefined4 *)(param_2 + 4) = 0;
      return 0x8007000e;
    }
    puVar1[0x14] = *(undefined4 *)(param_2 + 4);
    FUN_004d2c80(param_1,param_2,param_3);
    *puVar1 = FUN_004cf0d0;
    puVar1[0x14] = *(undefined4 *)(param_2 + 4);
    return 0;
  }
  *puVar1 = FUN_004cf0d0;
  puVar1[0x14] = *(undefined4 *)(param_2 + 4);
  return 0;
}


