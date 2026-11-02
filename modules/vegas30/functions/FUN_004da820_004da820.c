/* Module: vegas30.exe
   Function: FUN_004da820
   Address: 004da820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004da820(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x69c);
  if ((puVar1[0x14] != *(int *)(param_1 + 4)) || (puVar1[0x16] == 0)) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(param_1);
    }
    if (*(int *)(param_1 + 4) == 2) {
      pvVar2 = calloc(1,0x368);
      puVar1[0x16] = pvVar2;
      if (pvVar2 == (void *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0;
        return;
      }
      *(undefined4 *)((int)pvVar2 + 0x84) = 0;
    }
    *puVar1 = &LAB_004d9ec0;
    puVar1[0x14] = *(undefined4 *)(param_1 + 4);
  }
  return;
}


